#include "SLRD.h"

SLRD::SLRD(int SizeX,int SizeY) {
    cx = cy =eventy=eventx= 0;
    Focus.push_back(iconad);
    FRIENDS=MAIL=HELL= ICEFIRE= DISPATCH= TOURNAMENT= BAG= HERB= RACE= THEATER= MYSTERY= PAGODA= XIAOWU= ENERGY= TASKS= ABYSS= TYRANT= ELEMENT= TREANT = true;
    currentfocus = "default";
    dimX = SizeX;
    dimY = SizeY;
    restartMacro=true;
    waitMacro=false;
    setOrder();
}
void SLRD::setOrder() {
    for (int i = 0; i < 20; i++) {
        Order[i] = i;
    }
}
void SLRD::macroLoop() {
  
    while (true) {
        switch (restartMacro) {
        case true:
            startSLRD();
            break;
        case false:
            if (HELL) {

                break;
            }
            if (BAG) {

                break;
            }
            if (MAIL) {

                break;
            }
            if (FRIENDS) {

                break;
            }
            if (ICEFIRE) {

                break;
            }
            if (DISPATCH) {

                break;
            }
            if (TOURNAMENT) {

                break;
            }
            if (HERB) {

                break;
            }
            if (RACE) {

                break;
            }
            if (THEATER) {

                break;
            }
            if (MYSTERY) {

                break;
            }
            if (PAGODA) {

                break;
            }
            if (XIAOWU) {

                break;
            }
            if (ENERGY) {

                break;
            }
            if (TASKS) {

                break;
            }
            if (ABYSS) {

                break;
            }
            if (TYRANT) {

                break;
            }
            if (ELEMENT) {

                break;
            }
            if (TREANT) {

                break;
            }
        } 
    }
}


void SLRD::recursiveSearch(const fs::path& dirPath, vector<string>& focus)
{
    for (const auto& entry : fs::directory_iterator(dirPath))
    {
        if (fs::is_directory(entry.status()))
        {
            // Call recursiveSearch function for subdirectory
            recursiveSearch(entry.path(), focus);
        }
        else
        {
            // Check if the file extension is ".png"
            if (entry.path().extension() == ".png")
            {
                // Add the file path with name and extension to the focus vector
                focus.push_back(entry.path().string());
            }
        }
    }
}

void SLRD::startSLRD() {
    adb.quit(PSLR);
    adb.launch(SLR);
    adb.wait(3000);
    while (!findclick(croixmenu));
    while (!findclick(login, server));
    goHome();
    restartMacro = false;
}
void SLRD::goHome() {
    int i = 0;
    while (!find(iconadless)) {
        findclick(back);
    }
    for (int i = 0; i < 5; i++) {
        adb.touch(dimX * 0.96, dimY * 0.15);
        adb.wait(200);
    }
}

void SLRD::HellSlaughter() {// à revoir quick challenge
    goHome();
    while (!findclick(hell)) {
        adb.swipe(9 * dimX / 10, dimY / 2, dimX / 10, dimY / 2, 500);
    }
    adb.wait(3000);
    while (findclick(claimrace)||findclick(congrats));
    while (!findclick(oneclickhell));
    if (find(advance) || find(oneclicknotavailable))goHome();
    else {
        while (!findclick(confirm, confirmhell));
        while (!findclick(battle, teamfillhell));
        while (!findclick(endclickhell, endofchallengehell));
        HELL = false;
        goHome();
    }
}


void SLRD::doMail() {
    goHome();
    while (!findclick(mail));   
    while (!findclick(claimall));
    adb.wait(2000);
    while (findclick(congrats));
    MAIL = false;
    goHome();   
}

void SLRD::doTheater() {
    goHome();
    while (!findclick(store));
    while (!findclick(theaterchoose));
    for (int i = 0; i < 10; i++) {
        while (!findclick(watchtheater));
        while (!find(adwatched)) {
                findclick(crossad);
        }
    }
    find(theaterid);
    adb.touch(dimX * 0.36, cy);
    findclick(max);
    findclick(confirmpurchase);
    findclick(congrats);
    adb.touch(dimX * 0.57, cy);
    findclick(max);
    findclick(confirmpurchase);
    findclick(congrats);
    adb.touch(dimX * 0.78, cy);
    findclick(max);
    findclick(confirmpurchase);
    findclick(congrats);
    MAIL = false;
    goHome();
}

void SLRD::doIcefire() {

    goHome();
    while (!findclick(icefire)) {
        adb.swipe(9 * dimX / 10, dimY / 2, dimX / 10, dimY / 2, 500);
    }
    while (!findclick(oneclickroll));
    while (!findclick(start));
    while (!findclick(manageherbs));
    if (find(aromatic)) {
        adb.touch(cx, dimY * 0.787);
    }
    adb.swipe(6 * dimX / 10, dimY / 2, 3.65 * dimX / 10, dimY / 2, 1000);
    if (find(silk)) {
        adb.touch(cx, dimY * 0.787);
    }
    adb.swipe(6 * dimX / 10, dimY / 2, 3.65 * dimX / 10, dimY / 2, 1000);
    if (find(velvet)) {
        adb.touch(cx, dimY * 0.787);
    }
    adb.swipe(6 * dimX / 10, dimY / 2, 3.65 * dimX / 10, dimY / 2, 1000);
    if (find(octagonal)) {
        adb.touch(cx, dimY * 0.787);
    }
    adb.swipe(6 * dimX / 10, dimY / 2, 3.65 * dimX / 10, dimY / 2, 1000);
    if (find(orchid)) {
        adb.touch(cx, dimY * 0.787);
    }
    adb.swipe(6 * dimX / 10, dimY / 2, 3.65 * dimX / 10, dimY / 2, 1000);
    if (find(apricot)) {
        adb.touch(cx, dimY * 0.787);
    }
    if (find(ginseng)) {
        adb.touch(cx, dimY * 0.787);
    }
    if (find(sunflower)) {
        adb.touch(cx, dimY * 0.787);
    }
    findclick(croixmenu);
    ICEFIRE = false;
    goHome();
}
void SLRD::doFriends() {
    goHome();
    while (!findclick(friends));
    adb.wait(1000);
    findclick(sendall);
    findclick(claimallfriends);
    FRIENDS = false;
    goHome();
}
void SLRD::doTasks() {
    goHome();
    while (!findclick(tasks));
    while (!findclick(claimallfriends));
    adb.wait(2000);
    while(findclick(congrats));
    while (!findclick(weekly));
    while (!findclick(claimallfriends));
    adb.wait(2000);
    while (findclick(congrats));
    TASKS = false;
    goHome();
}

void SLRD::doShop() {
    goHome();
    swipemiddlemenu();
    while (findclick(shop));
}
void SLRD::doXiao() {
    try {
        goHome();
        while (!findclick(xiaoassistant));
        adb.wait(1000);
        findclick(completeall);
        while (!findclick(confirmxiao));
        while (!findclick(gameplay));
        adb.wait(1000);
        findclick(completeall);
        while (!findclick(confirmxiao));
        adb.wait(1000);
        while (findclick(gameplaynotice)) {
            while (!findclick(cancel));
        }
        while (!findclick(rankingxiao));
        adb.wait(1000);
        findclick(completeall);
        while (!findclick(confirmxiao));
        while (!findclick(sectxiao));
        adb.wait(1000);
        findclick(completeall);
        while (!findclick(confirmxiao));
        while (!findclick(shopxiao));
        adb.wait(1000);
        findclick(completeall);
        XIAOWU = false;
        goHome();
    }
    catch (int e) {
        cout << "YESSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS";
        return;  
    }
}
void SLRD::getBag() {
    goHome();
    swipemiddlemenu();
    while (!findclick(sect));
    while (!findclick(luckybagicon));
    adb.wait(2000);
    while (findclick(diamondbag) || findclick(confirmbag)) {
        adb.wait(2000);
    }
    while (!findclick(croixmenu));
    BAG = false;
    goHome();

}

void SLRD::macroGame() {
    startSLRD();
    getBag();
}

void SLRD::swipeleftmenu() {
    for (int i = 0; i < 5; i++) {
        adb.swipe(100, 500, dimX - 100, 500,500);
    }
}
void SLRD::swipemiddlemenu() {
    swipeleftmenu();
    for (int i = 0; i < 2; i++) {
        adb.swipe(dimX - dimX/4, 500, 100, 500, 500);
    }
}
void SLRD::swiperightmenu() {
    for (int i = 0; i < 5; i++) {
        adb.swipe(dimX - 100, 500,100, 500,500);
    }
}
bool SLRD::findclick(string imgtoclick,string imgtofind){
    for (int i = 0; i < 1; i++) {
        adb.screenshot();
        if (op.checkImage(imgtofind))
        {
            if (op.findImage(imgtoclick,backg, cx, cy)) {
                adb.touch(cx, cy);
                return true;
            }
        }
      //  adb.wait(500)  ;
    }
    return false;
}

int SLRD::getCx()const {
    return cx;
}
int SLRD::getCy()const {
    return cy;
}
int SLRD::getEventx()const {
    return eventx;
}
int SLRD::getEventy()const {
    return eventy;
}
void SLRD::setRebootCount(int nb) {
    rebootCount = nb;
}

int SLRD::getRebootCount() {
    return rebootCount;
}

class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "MyException occurred";
    }
};

bool SLRD::findclick(string imgtemplate) { 
    while (waitMacro) {
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }
    adb.screenshot();
    if (op.findImage(imgtemplate,backg, cx, cy)) {
        rebootCount = 0;
        adb.touch(cx, cy);
        return true;
    }
    if (restartMacro) {
        throw 20;  
        return false;
    }
    else {
        rebootCount++;
        return false;
    }
    
}



bool SLRD::findclickEvents(string imgtemplate) {
    adb.screenshotEvents();
    if (op.findImage(imgtemplate,imgevents, eventx, eventy)) {
        adb.touch(eventx, eventy);
        return true;
    }
    else return false;
}

bool SLRD::find(string imgtemplate) {
    for (int i = 0; i < 1; i++) {
        adb.screenshot();
        if (op.findImage(imgtemplate,backg, cx, cy)) {
            rebootCount = 0;
            return true;
        }
    }
    if (restartMacro) {
        throw 20;
        return false;
    }
    else {
        rebootCount++;
        return false;
    }
}
bool SLRD::findEvents(string imgtemplate) {
    adb.screenshotEvents();
    if (op.findImage(imgtemplate,imgevents, eventx, eventy)) {
        return true;
    }
    else return false;
}


void SLRD::CurrentFocus() {
    for (int i = 0; i < Focus.size(); i++) {
        cout << Focus.size();    
        if (find(Focus.at(i))) {
            currentfocus = Focus.at(i);
           // cout << currentfocus;
        }
    }
}
