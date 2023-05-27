#include "SLRD.h"
#include "../Windows Kits/10/Include/10.0.22000.0/um/Windows.h"
#include "../Windows Kits/10/Include/10.0.22000.0/um/TlHelp32.h"
#include "../MSVC/14.35.32215/include/fstream"
#include "../MSVC/14.35.32215/include/iostream"
#include "../MSVC/14.35.32215/include/ctime"
using namespace cv;

using namespace tesseract;

void time() {
   auto currentTime = std::chrono::system_clock::now();

    // Conversion du temps en un format lisible
    std::time_t currentTimeT = std::chrono::system_clock::to_time_t(currentTime);
    std::tm localTime;
    localtime_s(&localTime, &currentTimeT);

    // Extraction des composants de la date et de l'heure
    int year = localTime.tm_year + 1900; // Année
    int month = localTime.tm_mon + 1;    // Mois (janvier = 1)
    int day = localTime.tm_mday;         // Jour du mois
    int hour = localTime.tm_hour;        // Heure
    int minute = localTime.tm_min;       // Minute
    int second = localTime.tm_sec;       // Seconde

    // Affichage de la date et de l'heure
    std::cout << "Date et heure actuelles : "
        << day << "/" << month << "/" << year << " "
        << hour << ":" << minute << ":" << second << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(20));
}
void launchEmulator(const char* programPath, fadb adb) {
    wchar_t programPathW[MAX_PATH];
    if (MultiByteToWideChar(CP_UTF8, 0, programPath, -1, programPathW, MAX_PATH) == 0) {
        std::cout << "Error converting program path to wide characters." << std::endl;
        return;
    }

    PROCESS_INFORMATION processInfo;
    ZeroMemory(&processInfo, sizeof(processInfo));

    STARTUPINFO startupInfo;
    ZeroMemory(&startupInfo, sizeof(startupInfo));
    startupInfo.cb = sizeof(startupInfo);

    if (CreateProcess(nullptr, programPathW, nullptr, nullptr, FALSE, 0, nullptr, nullptr, &startupInfo, &processInfo)) {
        std::cout << "Bluestacks is launched!" << std::endl;
        CloseHandle(processInfo.hProcess);
        CloseHandle(processInfo.hThread);
        for (int i = 0; i < 20; i++) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            adb.connect();
        }
    }
    else {
        DWORD errorCode = GetLastError();
        std::cout << "Error launching Bluestacks. Error code: " << errorCode << std::endl;
    }
}

void detect_image(fadb& adb, fopencv& op, SLRD& sl) {
    while (true) {
        if (sl.endmacro)break;
        sl.findclickEvents(sl.busy);
        sl.findclickEvents(sl.reconnect);
        if (sl.findEvents(sl.waitconnexion)) {
            cout <<"X: " << sl.getEventx()<<endl;
            cout << "Y: " << sl.getEventy()<<endl;
           // sl.findclick(sl.previousobject);
            sl.waitMacro = true;
        }
        else sl.waitMacro = false;
      //  std::this_thread::sleep_for(std::chrono::milliseconds(2000)); // attend 100ms
    }
}

void stuck(SLRD&sl, int& MAXREBOOT) {
    while (true) {
        if (sl.endmacro)break;
        if (sl.getRebootCount() >= MAXREBOOT) {
            std::cout << "Relance du jeu\n"<<endl;
            sl.restartMacro = true;
        }
       
       // std::this_thread::sleep_for(std::chrono::seconds(1)); // attend 1s
        //cout << "RebootCount:" << sl.getRebootCount()<<endl;
    }
}




int main()
{
    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_SHOW);
    fadb adb;
    fopencv op;
    ocr api;
    const char* EmulatorPath = "C:/Program Files/BlueStacks_nxt/HD-Player.exe";
    int dimX = 0;
    int dimY = 0;
    int MAXREBOOT = 50;
  // launchEmulator(EmulatorPath,adb);
    adb.setDim(dimX, dimY);
    SLRD sl(dimX, dimY);
   // std::thread image_detection_thread(detect_image, std::ref(adb), std::ref(op), std::ref(sl));
  //  std::thread not_detected_count_check_thread(stuck, std::ref(sl), std::ref(MAXREBOOT));
    // sl.macroLoop();
    adb.screenshot();
    api.detectText("y",sl.getCx(),sl.getCy());
     adb.wait(2000);
   //// sl.restartMacro = false;
   // image_detection_thread.join();
   // not_detected_count_check_thread.join();

    //op.findMultipleImage(sl.Case, sl.getListCoords());
    //cout<<"size: "<<sl.getListCoords().size();
    

  
    return 0;
}


