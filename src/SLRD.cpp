#include "SLRD.h"


SLRD::SLRD(int SizeX,int SizeY) {
    cx = cy =eventy=eventx= 0;
    MAIL = FRIENDS = HELL= ICEFIRE= TOURNAMENT= BAG= HERB= RACE= THEATER= MYSTERY= PAGODA= XIAOWU= ENERGY= TASKS= ABYSS= TYRANT= ELEMENT= TREANT = false;
    HELL = true;
    dimX = SizeX;
    dimY = SizeY;
    endmacro = false;
    restartMacro=true;
    waitMacro=false;
    previousobject = croixmenu;
    setOrder();
}
void SLRD::setOrder() {
    for (int i = 0; i < 20; i++) {
        Order[i] = i;
    }
}
bool SLRD::macroEnd() {
    if (FRIENDS == false && MAIL == false && HELL == false && ICEFIRE == false && DISPATCH == false && TOURNAMENT == false && BAG == false && HERB == false && RACE == false && THEATER == false && MYSTERY == false && PAGODA == false && XIAOWU == false && ENERGY == false && TASKS == false && ABYSS == false && TYRANT == false && ELEMENT == false && TREANT == false) {
        endmacro = true;
        return true;
    }
    else return false;
}

void SLRD::macroLoop() {
  
    while (true) {
        switch (restartMacro) {
        case true:
            //startSLRD();
            restartMacro = false;
            break;
        case false:
            if (HELL) {
                doHell();
                break;
            }
            if (BAG) {
                getBag();
                break;
            }
            if (MAIL) {
                doMail();
                break;
            }
            if (FRIENDS) {
                doFriends();
                break;
            }
            if (ICEFIRE) {
                doIcefire();
                break;
            }
            if (DISPATCH) {
                doDispatch();
                break;
            }
            if (TOURNAMENT) {

                break;
            }
            if (HERB) {
                doHerb();
                break;
            }
            if (RACE) {
                doRace();
                break;
            }
            if (THEATER) {
                doTheater();
                break;
            }
            if (MYSTERY) {
                doMystery();
                break;
            }
            if (PAGODA) {

                break;
            }
            if (XIAOWU) {
                doXiao();
                break;
            }
            if (ENERGY) {

                break;
            }
            if (TASKS) {
                doTasks();
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
        if (macroEnd()) {
            std::cout << "trouvé!" << std::endl;
            break;
        }
    }
}


void SLRD::recursiveSearch(const std::filesystem::path& dirPath, std::vector<std::string>& focus)
{ 
    for (const auto& entry : std::filesystem::directory_iterator(dirPath))
    {
        if (std::filesystem::is_directory(entry.status()))
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
    try {
        std::cout << "RESTART";
        restartMacro = false;
        rebootCount = 0;
        adb.quit(PSLR);
        adb.launch(SLR);
        adb.wait(3000);
        while (!findclick(croixmenu));
        while (!findclick(login, server));
        goHome();
        
    }
    catch (int e) {
        
        return;
    }
}
void SLRD::goHome() {
    try {
        while (!find(iconadless)) {
            findclick(back);
        }
        for (int i = 0; i < 5; i++) {
            adb.touch(dimX * 0.96, dimY * 0.15);
            adb.wait(200);
        }
    }
    catch (int e) {
        return;
    }
}

void SLRD::doMystery() {
    try {
        goHome();
        while (!findclick(mysterychest));
        for (int i = 0; i < 3; ++i) {
            while (!findclick(watchadmystery));
            while (!find(adwatched));
            adb.wait(1000);
            while (!findclick(crossad));
            while (!findclick(congrats));
        }
        MYSTERY = false;
        while (!findclick(croixmenu));
        goHome();
    }
    catch (int e) {
        return;
    }
}

//void SLRD::doMystery() {
//    try {
//
//    }
//    catch (int e) {
//        return;
//    }
//}
void SLRD::doRace() {
    try {
        int day = getDay();
        goHome();
        if (day != 6 && day != 7) {
            while (!findclick(pot)) {
                swiperightmenu();
            }
            while (!findclick(racechoose));
            while (findclick(claimrace));
        }
        RACE = false;
        goHome();
    }
    catch (int e) {
        return;
    }
}

void SLRD::doDispatch() {
    try {
        goHome();
        swipemiddlemenu();
        while (!findclick(sect));
        while (!findclick(dispatchbuilding)) {
            adb.swipe(dimX / 10, dimY / 2, 9*dimX / 10, dimY / 2, 500);
        }
        while (!findclick(claimdispatch));
        adb.wait(2000);
        while (findclick(congrats)) {
            adb.wait(2000);
        }
        adb.wait(2000);
        while (findclick(dispatch)) {
            adb.wait(2000);
            findclick(deploy);
            adb.wait(2000);
            findclick(dispatch); 
        }
        DISPATCH = false;
        while (!findclick(croixmenu));
        goHome();
    }
    catch (int e) {
        return;
    }
}

void SLRD::doHerb() {
    try {
        goHome();
        while (!findclick(pot)) {
            swiperightmenu();
        }
        while (!findclick(potchoose));
        adb.wait(2000);
        while (findclick(claimall)) {
            while (!findclick(congrats));
            while (!findclick(croixmenu));
        }
        while (!findclick(protect));
        while (!findclick(confirmpot));
        while (!findclick(deliver));
        int day = getDay();
        if (day == 6 || day == 7) {
            while (!findclick(shipnow));
            while (!findclick(confirmdeliver));
        }
        else {
            while (!findclick(godlyrefresh));
            while (!findclick(confirm));
            while (!findclick(shipnow));
            adb.wait(1000);
            while (findclick(buy)) {
                while (!findclick(croixmenu));
                while (!findclick(shipnow));
            }
        }
        HERB = false;
        goHome();
        
    }
    catch (int e) {
        
        return;
    }
}



void SLRD::doHell() {// à revoir quick challenge
    try {
        goHome();
        while (!findclick(hell)) {
            adb.swipe(9 * dimX / 10, dimY / 2, dimX / 10, dimY / 2, 500);
        }
        adb.wait(3000);
        while (findclick(claimrace) || findclick(congrats));
        adb.wait(2000);
        if (find(advance) || find(oneclicknotavailable)) {
            HELL = false;
            goHome();
            return;
        }     
        while (!findclick(oneclickhell));
        while (!findclick(confirm, confirmhell));
        while (!findclick(battle));
        while (!findclick(endclickhell, endofchallengehell));
        HELL = false;
        goHome();
    }
    catch (int e) {       
        return;
    }
}


void SLRD::doMail() {
    try {
        goHome();
        while (!findclick(mail));
        while (!findclick(claimall));
        adb.wait(2000);
        while (findclick(congrats));
        MAIL = false;
        goHome();
    }
    catch (int e) {       
        return;
    }
}

void SLRD::doTheater() {
    try {
        goHome();
        while (!findclick(store));
        while (!findclick(theaterchoose));
        for (int i = 0; i < 2; i++) {
            while (!find(canwatch));
            while (!findclick(watchtheater));
            while (!find(adwatched));
           while (!findclick(crossad));  // add the other way to quit
            adb.wait(2000);
        }
        adb.wait(1000);
        adb.touch(dimX * 0.36, dimY*0.351);
        adb.wait(1000);
        findclick(max);
        adb.wait(1000);
        findclick(confirmpurchase);
        adb.wait(1000);
        findclick(congrats);
        adb.wait(1000);
        adb.touch(dimX * 0.57, dimY * 0.351);
        adb.wait(1000);
        findclick(max);
        adb.wait(1000);
        findclick(confirmpurchase);
        adb.wait(1000);
        findclick(congrats);
        adb.wait(1000);
        adb.touch(dimX * 0.78, dimY * 0.351);
        adb.wait(1000);
        findclick(max);
        adb.wait(1000);
        findclick(confirmpurchase);
        adb.wait(1000);
        findclick(congrats);
        THEATER = false;
        goHome();
    }
    catch (int e) {       
        return;
    }
}

void SLRD::doIcefire() {
    try {
        goHome();
        while (!findclick(icefire)) {
            adb.swipe(9 * dimX / 10, dimY / 2, dimX / 10, dimY / 2, 500);
        }
        while (!findclick(oneclickroll));
        while (!findclick(start));
        while (!findclick(manageherbs));
        adb.wait(2000);
        if (find(aromatic)) {
            adb.touch(cx, dimY * 0.787);
            adb.touch(cx, dimY * 0.787);
        }
        adb.swipe(6 * dimX / 10, dimY / 2, 3.65 * dimX / 10, dimY / 2, 1000);
        if (find(silk)) {
            adb.touch(cx, dimY * 0.787);
            adb.touch(cx, dimY * 0.787);
        }
        adb.swipe(6 * dimX / 10, dimY / 2, 3.65 * dimX / 10, dimY / 2, 1000);
        if (find(velvet)) {
            adb.touch(cx, dimY * 0.787);
            adb.touch(cx, dimY * 0.787);
        }
        adb.swipe(6 * dimX / 10, dimY / 2, 3.65 * dimX / 10, dimY / 2, 1000);
        if (find(octagonal)) {
            adb.touch(cx, dimY * 0.787);
            adb.touch(cx, dimY * 0.787);
        }
        adb.swipe(6 * dimX / 10, dimY / 2, 3.65 * dimX / 10, dimY / 2, 1000);
        if (find(orchid)) {
            adb.touch(cx, dimY * 0.787);
            adb.touch(cx, dimY * 0.787);
        }
        adb.swipe(6 * dimX / 10, dimY / 2, 3.65 * dimX / 10, dimY / 2, 1000);
        if (find(apricot)) {
            adb.touch(cx, dimY * 0.787);
            adb.touch(cx, dimY * 0.787);
        }
        if (find(ginseng)) {
            adb.touch(cx, dimY * 0.787);
            adb.touch(cx, dimY * 0.787);
        }
        if (find(sunflower)) {
            adb.touch(cx, dimY * 0.787);
            adb.touch(cx, dimY * 0.787);
        }
        adb.wait(1000);
        findclick(croixmenu);
        while (!find(endicefire));


        ICEFIRE = false;
        goHome();
    }
    catch (int e) {       
        return;
    }
}
void SLRD::doFriends() {
    try {
        goHome();
        while (!findclick(friends));
        adb.wait(1000);
        while (!findclick(sendall));
        while (!findclick(claimallfriends));
        FRIENDS = false;
        goHome();
    }
    catch (int e) {     
        return;
    }
}
void SLRD::doTasks() {
    try {
        goHome();
        while (!findclick(tasks));
        while (!findclick(claimallfriends));
        adb.wait(2000);
        while (findclick(congrats)) {
            adb.wait(2000);
        };
        while (!findclick(weekly));
        while (!findclick(claimallfriends));
        adb.wait(2000);
        while (findclick(congrats)) {
            adb.wait(2000);
        }
        TASKS = false;
        goHome();
    }
    catch (int e) {     
        return;
    }
}

void SLRD::doShop() {
    try {
        goHome();
        swipemiddlemenu();
        while (findclick(shop));
    }
    catch (int e) {        
        return;
    }
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
        while (!findclick(cancel));
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
        while (!findclick(confirmxiao));
        XIAOWU = false;
        goHome();
    }
    catch (int e) {       
        return;  
    }
}
void SLRD::getBag() {
    try {
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
    catch (int e) {      
        return;
    }

}

int SLRD::getDay() {
    auto currentTime = std::chrono::system_clock::now();
    std::time_t currentTimeT = std::chrono::system_clock::to_time_t(currentTime);
    std::tm localTime;
    localtime_s(&localTime, &currentTimeT);
    return localTime.tm_mday;
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
bool SLRD::findclick(std::string imgtoclick,std::string imgtofind){
    for (int i = 0; i < 1; i++) {
        adb.screenshot();
        if (op.checkImage(imgtofind))
        {
            if (op.findImage(imgtoclick,backg, cx, cy)) {
                adb.touch(cx, cy);
                return true;
            }
        }
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


bool SLRD::findclick(std::string imgtemplate) { 
    while (waitMacro) {
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }
    adb.screenshot();
    if (op.findImage(imgtemplate,backg, cx, cy)) {
        rebootCount = 0;
        restartMacro = false;
        previousobject = imgtemplate;
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



bool SLRD::findclickEvents(std::string imgtemplate) {
    adb.screenshotEvents();
    if (op.findImage(imgtemplate,imgevents, eventx, eventy)) {
        adb.touch(eventx, eventy);
        return true;
    }
    else return false;
}

bool SLRD::find(std::string imgtemplate) {
    while (waitMacro) {
        std::this_thread::sleep_for(std::chrono::seconds(5));
        find(previousobject);
    }
    adb.screenshot();
    if (op.findImage(imgtemplate,backg, cx, cy)) {
        rebootCount = 0;
        restartMacro = false;
        previousobject = imgtemplate;
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
bool SLRD::findEvents(std::string imgtemplate) {
    adb.screenshotEvents();
    if (op.findImage(imgtemplate,imgevents, eventx, eventy)) {
        return true;
    }
    else return false;
}


void SLRD::CurrentFocus() {
    for (int i = 0; i < Focus.size(); i++) {
        std::cout << Focus.size();    
        if (find(Focus.at(i))) {
            currentfocus = Focus.at(i);
           // std::cout << currentfocus;
        }
    }
}
