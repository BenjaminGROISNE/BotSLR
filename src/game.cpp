#include "game.h"

game::game() {
    TRIAL= FRIENDS= MAIL= HELL= ICEFIRE= TOURNAMENT= BAG= HERB= RACE= THEATER= MYSTERY= XIAOWU= TASKS= ABYSS= TYRANT= ELEMENT= TREANT= FOREST= GRANDMASTER= BATTLEPASS= SECRETSHOP= ZHUQING= WHALES= DAILIES= HUNTING= CHECKIN= SECTWAR= SILVERWEISS= SOTTO= TREE= PEAK= SOULASCENSION= RANKING = false;
    background = Template(backg, Gray);
    dimX = 1920;
    dimY = 1080;
    package = "com.soullandrl.gp";
    activity = "com.soullandrl.gp/cc.qidea.jsfb.SplashActivity";
    fillPopup();
    sys.createpaths(templates);
    mac = macroConfig(package, activity);
    firstboot = true;
    restartMacro = true;
    endmacro = false;
}

void game::initActivities()
{

    std::vector<std::tuple<bool*, std::string>> alltuples{
        std::tuple<bool*, std::string>(&TRIAL, "TRIAL"),
        std::tuple<bool*, std::string>(&FRIENDS, "FRIENDS"),
        std::tuple<bool*, std::string>(&MAIL, "MAIL"),
        std::tuple<bool*, std::string>(&HELL, "HELL"),
        std::tuple<bool*, std::string>(&ICEFIRE, "ICEFIRE"),
        std::tuple<bool*, std::string>(&TOURNAMENT, "TOURNAMENT"),
        std::tuple<bool*, std::string>(&BAG, "BAG"),
        std::tuple<bool*, std::string>(&HERB, "HERB"),
        std::tuple<bool*, std::string>(&RACE, "RACE"),
        std::tuple<bool*, std::string>(&THEATER, "THEATER"),
        std::tuple<bool*, std::string>(&MYSTERY, "MYSTERY"),
        std::tuple<bool*, std::string>(&XIAOWU, "XIAOWU"),
        std::tuple<bool*, std::string>(&TASKS, "TASKS"),
        std::tuple<bool*, std::string>(&ABYSS, "ABYSS"),
        std::tuple<bool*, std::string>(&TYRANT, "TYRANT"),
        std::tuple<bool*, std::string>(&ELEMENT, "ELEMENT"),
        std::tuple<bool*, std::string>(&TREANT, "TREANT"),
        std::tuple<bool*, std::string>(&FOREST, "FOREST"),
        std::tuple<bool*, std::string>(&GRANDMASTER, "GRANDMASTER"),
        std::tuple<bool*, std::string>(&BATTLEPASS, "BATTLEPASS"),
        std::tuple<bool*, std::string>(&SECRETSHOP, "SECRETSHOP"),
        std::tuple<bool*, std::string>(&ZHUQING, "ZHUQING"),
        std::tuple<bool*, std::string>(&WHALES, "WHALES"),
        std::tuple<bool*, std::string>(&DAILIES, "DAILIES"),
        std::tuple<bool*, std::string>(&HUNTING, "HUNTING"),
        std::tuple<bool*, std::string>(&CHECKIN, "CHECKIN"),
        std::tuple<bool*, std::string>(&SECTWAR, "SECTWAR"),
        std::tuple<bool*, std::string>(&SILVERWEISS, "SILVERWEISS"),
        std::tuple<bool*, std::string>(&SOTTO, "SOTTO"),
        std::tuple<bool*, std::string>(&TREE, "TREE"),
        std::tuple<bool*, std::string>(&PEAK, "PEAK"),
        std::tuple<bool*, std::string>(&SOULASCENSION, "SOULASCENSION"),
        std::tuple<bool*, std::string>(&RANKING, "RANKING"),
    };
    char letter = 'a';
    for (int i = 0;i<alltuples.size();++i) {
        allActivities.insert({letter,alltuples.at(i)});
        ++letter;
        if (letter > 'z')letter = 'A';
    }
}

void game::selectActivity() {
    int duration = 30;
    int timeleft;
    std::string choix;
    bool choseFavPreset = false;
    bool chosePreset = false;
    std::string textseconds = "Seconds left: ";
    std::cout << std::endl << "Type which activity you wanna do:" << std::endl;
    std::cout << "ALL : 0" << std::endl;
    char let = 'a';
    while (let != 'Z') {
        bool pres;
        std::tuple<bool*, std::string>activity = getActivity(let, pres);
        if (pres) {
            std::cout << std::get<1>(activity) << ":" << let << "  ";
        }
        if (let == 'z') {
            let = 'A';
            continue;
        }
        ++let;
    }
    std::cout << "\n";
    std::cout << "for example: abjdlm or ABJghDd or 0" << std::endl << std::endl;
    std::cout << "Type P to choose preset" << std::endl;
    std::cout << "Type F to choose favorite Preset" << std::endl;
    std::cout << "Type S to Skip" << std::endl;
    std::cout << "Validate your input with Enter" << std::endl;
    std::cout << std::endl << "Seconds left: ";
    auto start = std::chrono::steady_clock::now();
    long long int elapsed = 0;
    long long int lastelapsed = elapsed;
    int maxchar = 0;
    int nbchar = 0;
    int lastnbchar = 0;
    int i = duration;
    while (i > 0) {
        i /= 10;
        maxchar++;
    }
    std::cout << duration;
    mac.readMcfilefavouritePreset();

    do {
        auto now = std::chrono::steady_clock::now();
        elapsed = std::chrono::duration_cast<std::chrono::seconds>(now - start).count();
        timeleft = duration - elapsed;
        if (lastelapsed != elapsed) {
            nbchar = 0;
            i = timeleft;
            while (i != 0) {
                i /= 10;
                nbchar++;
            }
            for (int j = 0; j < maxchar + textseconds.length(); ++j) {
                std::cout << "\b";
            }
            std::cout << textseconds;
            for (int j = 0; j < 2 * maxchar - nbchar; ++j) {
                std::cout << " ";
            }
            for (int j = 0; j < maxchar; ++j) {
                std::cout << "\b";
            }
            std::cout << timeleft;
            lastelapsed = elapsed;
        }

        if (ml.isKeyPressed(sf::Keyboard::P)) {
            std::this_thread::sleep_for(std::chrono::milliseconds(200));
            std::cout << std::endl << "Type Preset: ";
            std::cin >> choix;
            chosePreset = true;
        }

        if (ml.isKeyPressed(sf::Keyboard::F)) {
            std::this_thread::sleep_for(std::chrono::milliseconds(200));
            std::cout << "Type favorite Preset: ";
            std::cin >> choix;
            mac.favouritePreset = choix;
            mac.updateFavouritePreset(mac.favouritePreset);
        }

        if (ml.isKeyPressed(sf::Keyboard::S)&& elapsed>0.5f) {
            break;
        }

    } while (timeleft > 0 && !chosePreset);

    if (!chosePreset) {
        choix = mac.favouritePreset;
    }
    std::cout << "\n";
    for (int i = 0; i < choix.size(); i++) {
        bool pres;
        char ca = choix[i];
        std::tuple<bool*, std::string>activity = getActivity(ca, pres);
        if (pres) {
            std::cout << std::get<1>(activity) << ", ";
            *std::get<0>(activity)=true;
        }
        if (choix[i] == '0') {
            char z = 'a';
            while (z != 'Z') {
                bool pres;
                std::tuple<bool*, std::string>activity = getActivity(z, pres);
                if (pres) {
                    std::cout << std::get<1>(activity) << ", ";
                    setActivity(activity, pres);
                }
                if (z == 'z') {
                    z = 'A';
                    continue;
                }
                ++z;
            }
            break;
        }

    }
   std::cout << " will be done."<<std::endl;
}

bool game::macroEnd() {
    char z = 'a';
    while (z != 'Z') {
        bool pres;
        std::tuple<bool*, std::string>activity = getActivity(z, pres);
        if (pres) {
            if (*std::get<0>(activity) == true)return false;
        }
        if (z == 'z') {
            z = 'A';
            continue;
        }
        ++z;
    }
    return true;
}

void game::macroLoop() {
    while (!endmacro) {
        switch (restartMacro) {
        case true:
            startGame();
            break;
        case false:
            goHome();        
            if (ICEFIRE) {
                doIcefire();
                ICEFIRE = false;
                break;
            }
            if (TOURNAMENT) {
                doTournament();
                TOURNAMENT=false;
                break;
            }
            if (XIAOWU) {
                doXiao();
                XIAOWU = false;
                break;
            }
            if (TYRANT) {
                doTyrant();
                TYRANT = false;
                break;
            }
            if (ZHUQING) {
                doZhuqing();
                ZHUQING = false;
                break;
            }
            if (ELEMENT) {
                doElement();
                ELEMENT = false;
                break;
            }
            if (TREANT) {
                doTreant();
                TREANT = false;
                break;
            }
            if (HELL) {
                doHell();
                HELL = false;
                break;
            }
            if (HERB) {
                doHerb();
                HERB = false;
                break;
            }
            if (BAG) {
                doBag();
                BAG = false;
                break;
            }
            
            if (RACE) {
                doRace();
                RACE = false;
                break;
            }
            if (DAILIES) {
                doDailies();
                DAILIES = false;
                break;
            }
            if (HUNTING) {
                doHunting();
                HUNTING = false;
                break;
            }
            if (CHECKIN) {
                doCheckin();
                CHECKIN = false;
                break;
            }
            if (PEAK) {
                doPeak();
                PEAK = false;
                break;
            }
            if (SECRETSHOP) {
                doSecretShop();
                SECRETSHOP = false;
                break;
            }
            if (SOULASCENSION) {
                doSoulascension();
                SOULASCENSION = false;
                break;
            }
            if (ABYSS) {
                doAbyss();
                ABYSS = false;
                break;
            }
            if (SECTWAR) {
                doSectwar();
                SECTWAR = false;
                break;
            }
            if (SILVERWEISS) {
                doSilverweiss();
                SILVERWEISS = false;
                break;
            }
            if (SOTTO) {
                doSotto();
                SOTTO = false;
                break;
            }
            if (TREE) {
                doTree();
                TREE = false;
                break;
            }
            if (WHALES) {
                doWhales();
                WHALES = false;
                break;
            }
            if (TRIAL) {
                doTrial();
                TRIAL = false;
                break;
            }
            if (FOREST) {
                doForest();
                FOREST = false;
                break;
            }
            if (GRANDMASTER) {
                doGrandmaster();
                GRANDMASTER= false;
                break;
            }

            if (MYSTERY) {
                doMystery();
                MYSTERY = false;
                break;
            }
            if (THEATER) {
                doTheater();
                THEATER = false;
                break;
            }
            if (BATTLEPASS) {
                doBattlepass();
                BATTLEPASS = false;
                break;
            }
            if (MAIL) {
                doMail();
                MAIL = false;
                break;
            }
            if (FRIENDS) {
                doFriends();
                FRIENDS = false;
                break;
            }
            if (TASKS) {
                doTasks();
                TASKS = false;
                break;
            }
            endmacro = true;
            std::cout << "End of Macro!" << std::endl;
        } 
    }
}

void game::startGame() {
    try {
        std::cout << "RESTART"<<std::endl;
        restartMacro = false;
        rebootCount = 0;
        if (adb.onPackage(package)&&goHomeFirstBoot());
        else {
            firstboot = false;
            adb.quitPackage(package);
            adb.launchPackage(activity);
            launchGame();
        }

    }
    catch (RebootException& e) {
        
        return;
    }
}

void game::launchGame()
{
    try{
        Coords connect{ 0.26 * dimX,0.926 * dimY };
        std::vector<std::string> menuelements = { shop,sect };
        std::vector<std::string>clicklaunch{ cross,iconslr,agngames };
        while (!fOneTemplateA(menuelements)) {
            while (fcOneTemplateA(clicklaunch));
            while (fA(addaccount)) {
                adb.touch(connect.x, connect.y);
            }
            adb.touch(dimX * 0.52, dimY * 0.046);
            wait(200);
        }
    }
    catch (RebootException& e) {

        return;
    }
}

void game::goHome() {
    try {      
        std::vector<std::string> menuelements = {shop,sect};
        std::vector<std::string>goback{ cross, home,back };
        while (!fOneTemplateA(menuelements)) {
            while (fcOneTemplateA(goback));
            adb.touch(dimX * 0.52, dimY * 0.046);
            wait(200);
        }
    }
    catch (RebootException& e) {
        return;
    }
}

bool game::goHomeFirstBoot() {
    try {
        if (firstboot) {
            std::cout << "First Boot of Macro and detected you're on package trying to goHome\n";
            std::cout << "Will restart if impossible\n";
            int MAXSTEPS = 7;
            firstboot = false;
            std::vector<std::string> menuelements = { shop,sect };
            std::vector<std::string>goback{ cross,home, back };
            while (!fOneTemplateA(menuelements)) {
                while (MAXSTEPS >= 0) {
                    if (!fcOneTemplateA(goback,700))break;
                    else MAXSTEPS--;
                }
                adb.touch(dimX * 0.52, dimY * 0.046);
                wait(200);
                if (MAXSTEPS < 0)return false;
            }

            return true;
        }
        else return false;
    }
    catch (RebootException& e) {
        return false;
    }
}


void game::doMystery() {
    try {
        
        while (!fA(onmysterychest)) {
            fcA(mystery);
        }
        int nbretries=0;
        bool hasbugged = false;
        bool noads = false;
        while (fCompareA(timevouchermystery, graytimevouchermystery)) {
            nbretries = 0;
            while (!fCompareA(watchmystery, cantwatchmystery)) {
                fA(onmysterychest);
                if (fCompareA(graytimevouchermystery, timevouchermystery)) {
                    noads = true;
                    break;
                }
            }
            if (noads)break;
            while (fcA(watchmystery, 6000)) {
                nbretries++;
                std::cout << "nbTries:" << nbretries << "/4\n";
                if (nbretries > 4) {
                    std::cout << "Can't watch ad game has bugged exiting\n";
                    hasbugged = true;
                    break;
                }
            }
            if (hasbugged)break;
            while (!fA(congratulations)) {
                wait(2500);
                adb.back();
                wait(2500);
            }
            while (fA(congratulations)) {
                adb.back();
                fcA(congratulations);
            }
        }
        while (!fcA(cross));
        while (fcA(cross));
        
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doMail() {
    try {
        while (!fcA(mail));
        while (fcA(mail));
        while (!fcA(claimallmail));
        while (fcA(congratulations));
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doFriends() {
    try {

        while (!fcA(friends));
        while (fcA(friends));
        while (!fcA(sendall));
        while (!fcA(claimallfriend));

    }
    catch (RebootException& e) {
        return;
    }
}

void game::doTheater() {
    try {


        while (!fcA(store));
        while (fcA(store));
        while (!fCompareA(ctheater, nctheater)){
            fcA(nctheater);
        }

        int nbretries = 0;
        bool hasbugged = false;
        bool noads = false;
        while (fCompareA(timevouchertheater, graytimevouchertheater)) {
            nbretries = 0;
            while (!fCompareA(getticket, graygetticket)) {
                if (fCompareA(graytimevouchertheater, timevouchertheater)) {
                    noads = true;
                    break;
                }
                fA(ctheater);
            }
            if (noads)break;
            while (fcA(getticket, 6000)) {
                nbretries++;
                std::cout << "NbTries:" << nbretries<<"/4\n";
                if (nbretries>4) {
                    std::cout << "Can't watch ad game has bugged exiting\n";
                    hasbugged = true;
                    break;
                }
            }
            if (hasbugged)break;
            while (!fA(ctheater)) {
                wait(2500);
                adb.back();
                wait(2500);
            }
            
        }



        bool canbuy=true;
        while (!fA(confirmpurchasetheater)) {
            fcOneTemplateMultipleTemplateA(ticket, W, 0,0);
            if (fA(limitreachedtheater, 0)) {
                canbuy = false;
                break;
            }

        }
        if (canbuy) {
            while (!fcA(maxtheater));
            while (fcA(confirmpurchasetheater));
            while (fcA(congratulations));
        }
        canbuy = true;
        while (!fA(confirmpurchasetheater)) {
            fcOneTemplateMultipleTemplateA(ticket, W, 1, 0);
            if (fA(limitreachedtheater, 0)) {
                canbuy = false;
                break;
            }

        }
        if (canbuy) {
            while (!fcA(maxtheater));
            while (fcA(confirmpurchasetheater));
            while (fcA(congratulations));
        }
    }
    catch (RebootException& e) {
        return;
    }

}

void game::doTreant() {
    try{
        
        while (!fcA(stardouforest)) {
            swipeX(0, dimX, 500);
        }
        while (fcA(stardouforest));
        while (!fcA(treant)) {
            swipeX(0.9 * dimX, 0.1 * dimX, 500);
        }
        while (fcA(treant));
        while (!fCompareA(treetreant,treeelement)) {
            fcA(normaltreant);
        }
        std::vector<std::string> choice{ sweeptreant,battle,buytreant};
        std::string result;
        while (true) {
            while (!fOneTemplateA(choice, result)) {
                fcA(treetreant);
            }
            if (result==sweeptreant) {
                while (!fcA(confirmtreant)) {
                    fcA(sweeptreant);
                }
                while (fcA(confirmtreant));
            }
            else if (result==battle) {
                while (fcA(battle));
                while (!fA(fightingtreant));
                while (!fcA(victory)) {
                    fA(fightingtreant);
                }
            }
            else {
                while (fcA(cross));
                break;
            }
                
        }
        while (!fcA(claimalltreant)) {
            fcA(pointstreant);
        }
        while (fcA(congratulations));
        while (!fcA(cross));
        while (fcA(cross));
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doElement() {
    try {

        while (!fcA(stardouforest)) {
            swipeX(0, dimX, 500);
        }
        while (fcA(stardouforest));
        while (!fcA(treant)) {
            swipeX(0.9*dimX, 0.1*dimX, 500);
        }
        while (fcA(treant));
        while (!fCompareA(treeelement, treetreant)) {
            fcA(elementtreant);
        }
        std::vector<std::string> choice{ sweeptreant,battle,buytreant };
        std::string result;
        while (true) {
            while (!fOneTemplateA(choice,result)) {
                fcA(treeelement);
            }
            if (result==sweeptreant) {
                while (!fcA(confirmtreant)) {
                    fcA(sweeptreant);
                }
                while (fcA(confirmtreant));
            }
            else if (result==battle) {
                while (fcA(battle));
                while (!fA(fightingelement));
                while (!fcA(victory)) {
                    fA(fightingelement);
                }
            }
            else {
                while (fcA(cross));
                break;
            }
        }
        while (!fcA(claimalltreant)) {
            fcA(pointstreant);
        }
        while (fcA(congratulations));
        while (!fcA(cross));
        while (fcA(cross));
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doXiao() {
    try {

        while (!fA(cdailiesxiaowu)) {
            fcA(xiaowu);
        }
        bool hasdone = false;
        int repeat = 0;
        while (!fcA(completeallxiaowu,0));
        while (fcA(completeallxiaowu,0)) {
            ++repeat;
            if (fA(nomissionsxiaowu,0)||repeat>3) {
                hasdone = true;
                break;
            }
        }
        if (!hasdone) {
            while (!fcA(confirmxiaowu)) {
                fA(assistantlog);
            }
            while (fcA(confirmxiaowu));
        }
        hasdone = false;
        repeat = 0;
        while (!fcCompareA(ncgameplay, cgameplay));
        while (fcCompareA(ncgameplay, cgameplay));
        while (!fcA(completeallxiaowu,0));
        while (fcA(completeallxiaowu,0)) {
            ++repeat;
            if (fA(nomissionsxiaowu,0) || repeat > 3) {
                hasdone = true;
                break;
            }
        }
        if (!hasdone) {
            while (!fcA(confirmxiaowu)) {
                fA(assistantlog);
            }
            while (fcA(confirmxiaowu));
            while (!fcA(cancelxiaowu));
            while (fcA(cancelxiaowu));
        }
        hasdone = false;
        repeat = 0;
        while (!fcCompareA(ncranking, cranking));
        while (fcCompareA(ncranking, cranking));
        while (!fcA(completeallxiaowu,0));
        while (fcA(completeallxiaowu,0)) {
            ++repeat;
            if (fA(nomissionsxiaowu,0) || repeat > 3) {
                hasdone = true;
                break;
            }
        }
        if (!hasdone) {
            while (!fcA(confirmxiaowu)) {
                fA(assistantlog);
            }
            while (fcA(confirmxiaowu));
        }
        hasdone = false;
        repeat = 0;
        while (!fcCompareA(ncsect, csect));
        while (fcCompareA(ncsect, csect));
        while (!fcA(completeallxiaowu,0));
        while (fcA(completeallxiaowu,0)) {
            ++repeat;
            if (fA(nomissionsxiaowu,0) || repeat > 3) {
                hasdone = true;
                break;
            }
        }

        if (!hasdone) {
            while (!fcA(confirmxiaowu)) {
                fA(assistantlog);
            }
            while (fcA(confirmxiaowu));
        }
        hasdone = false;
        repeat = 0;
        while (!fcCompareA(ncshop, cshop));
        while (fcCompareA(ncshop, cshop));
        while (!fcA(completeallxiaowu,0));
        while (fcA(completeallxiaowu,0)) {
            ++repeat;
            if (fA(nomissionsxiaowu) || repeat > 3,0) {
                hasdone = true;
                break;
            }
        }
        if (!hasdone) {
            while (!fcA(confirmxiaowu)) {
                fA(assistantlog);
            }
            while (fcA(confirmxiaowu));
        }
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doSecretShop()
{
    try {
        while (!fA(crosssecretshop)) {
            fcA(secretshop);
        }
        while (fcA(claimsecretshop)) {
            while (fcA(congratulations));
        }
        while (!fcA(crosssecretshop));
        while (fcA(crosssecretshop));
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doTasks() {
    try {
        while (!fA(cdailytasks)) {
            fcA(tasks);
        }
        fcA(claimalltasks);
        while (fcA(congratulations));
        while (!fcCompareA(ncweeklytasks, cweeklytasks));
        while (fcCompareA(ncweeklytasks, cweeklytasks));
        fcA(claimalltasks);
        while (fcA(congratulations));

    }
    catch (RebootException& e) {
        return;
    }
}

void game::doPeak() {
    try {
        while (!fcA(raceevent)) {
            swipeX(0, dimX, 500);
        }
        while (!fcA(peak)) {
            swipeX(0.9 * dimX, 0.1 * dimY, 500);
        }
        while (!fA(rewardpeak)) {
            fcA(peak);
        }
        int nbfights = 0;
        int nbwins = 0;
        const int MAXCHALLENGES = 40;
        bool dailiesdone = false;
        std::vector<std::string> outcome{ victorypeak,defeatpeak,matchsuccessful,searchingopponents };
        std::string result;
        while (fcCompareA(skipchallengeempty, skipchallengefull));
        int count = 0;
        while (true) {
            result.clear();
            if (fOneTemplateA(outcome, result)){                
                if (result == victorypeak) {
                    if (count>0) {
                        --count;
                    }
                    ++nbwins;
                    while (fcA(result));
                }
                else if (result == defeatpeak) {
                    if (count < 2) {
                        ++count;
                    }
                    while (fcA(result));                  
                }
            }
            else fcA(startpeakbattle);
            if(result==defeatpeak || result==victorypeak){
                ++nbfights;
                
                std::cout << "Leaves when reaches 2 and dailies done: " << count << "\n";
                std::cout << "Nbfights: " << nbfights << "/10\n";
                std::cout << "NbWins: " << nbwins << "/5\n";
                std::cout << "MAXCHALLENGES: " << nbfights << "/"+std::to_string(MAXCHALLENGES)+"\n";
            }
            if ((count >= 2 && nbwins >=5 && nbfights >=10)|| nbfights >=MAXCHALLENGES)break;
        }
        std::vector<std::string> claimpeakres{ congratulations,claimpeak };
        while (!fcA(rewardpeak));
        while (fcA(rewardpeak));
        while (fcOneTemplateA(claimpeakres));
        while (fcCompareA(ncrankrewards, crankrewards));
        while (fcOneTemplateA(claimpeakres));
        while (!fcA(cross));
        while (fcA(cross));
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doIcefire() {
    try {

        while (!fcA(yinyangwell)) {
            swipeX(0, dimX, 500);
        }
        while (!fcA(oneclickroll)) {
            while (fcA(yinyangwell));
            while (fcA(icefire));
        }
        while (fcA(oneclickroll));
        while (!fcA(startrolls));
        while (fcA(startrolls));
        while (!fA(aromatic)) {
            fcA(manageherbs);
        }
        for (int i = 0; i < 3; ++i) {
            fcOneTemplateMultipleTemplateA(collection, W, i);
            fcOneTemplateMultipleTemplateA(collection, W, i);
        }
        Coords topFlower;
        Coords botFlower;
        Zone flower;
        while (!fA(orchid)) {
            swipeX(0.6 * dimX, 0.4 * dimX, 1000);
        }
        int nbcol = 0;
        fnbTemplateA(collection, nbcol);
        for (int i = 0; i < nbcol; ++i) {
            fcOneTemplateMultipleTemplateA(collection, W, i);
            fcOneTemplateMultipleTemplateA(collection, W, i);
        }
        while (!fA(sunflower)) {
            swipeX(0.6 * dimX, 0.4 * dimX, 500);
        }
        for (int i = 0; i < 3; ++i) {
            fcOneTemplateMultipleTemplateA(collection, W, i);
            fcOneTemplateMultipleTemplateA(collection, W, i);
        }
        fcZoneA(collection, flower);
        fcZoneA(collection, flower);
        while (!fcA(cross));
        while (fcA(cross));
        while (fA(rolling));
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doTyrant() {
    try {
        if (getUTCHour() < 17) {
            while (!fcA(sect)) {
                swipeX(0, dimX, 500);
            }
            while (!fcA(sectactivities)) {
                fcA(sect);
            }
            while (!fcA(tyrant)) {
                fcA(sectactivities);
            }
            std::vector<std::string>enterRewards{ claimtyrant,congratulations };
            while (!fA(fighttyrant)) {
                while (fcOneTemplateA(enterRewards));
            }
            while (fcOneTemplateA(enterRewards));
            std::vector<std::string>outcome{ battle,sweeptyrant,buytyrant };
            std::string result;
            while (true) {
                while (!fOneTemplateA(outcome, result)) {
                    fcA(fighttyrant);
                }
                if (result==sweeptyrant) {
                    while (!fcA(confirmtyrant)) {
                        fcA(sweeptyrant);
                    }
                }
                else if (result==battle) {
                    while (!fA(fightingtyrant)) {
                        fcA(battle);
                    }
                    while (!fcA(victory)) {
                        fA(fightingtyrant);
                    }
                }
                else {
                    while (!fcA(cross));
                    while (fcA(cross));
                    break;
                }
            }
            while (!fcA(pointstyrant));
            while (!fcA(claimalltyrant)) {
                fcA(pointstyrant);
            }
            while (fcA(congratulations));
            while (!fcA(cross));
            while (fcA(cross));
        }
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doTournament() {
    try {
        if (getUTCHour() < 18) {
            while (!fcA(sect)) {
                swipeX(0, dimX, 500);
            }
            std::vector<std::string>accesstournament{ congratulations,twoteambattletournament,sect,tournament,claimtournament };
            while (!fcA(inspiration)) {
                while (fcOneTemplateA(accesstournament));
            }
            while (!fcA(encouragement)) {
                fcA(inspiration);
            }
            std::vector<std::string>endinspi{ confirminspiration,noinspiration };
            while (!fcOneTemplateA(endinspi)) {
                fcA(encouragement,0);
            }
            while (fcA(confirminspiration));
            while (!fcA(cross));
            while (fcA(cross));
            while (!fcA(chesttournament));
            std::vector<std::string>chest{ chestemptytournament,chestfulltournament };
            while (!fOneTemplateA(chest)) {
                fcA(chesttournament);
            }
            while (fcCompareA(chestfulltournament,chestnotopenedtournament));
            swipeX(2 * dimX / 3, dimX / 3, 500);
            swipeX(2 * dimX / 3, dimX / 3, 500);
            while (fcCompareA(chestfulltournament, chestnotopenedtournament));
            while (!fcA(cross));
            while (fcA(cross));

            std::vector<std::string>outcome1{ autofight,sweeptournament,buytournament };
            std::vector<std::string>outcome2{ sweepagaintournament,sweeptournament };
            std::string result;
            while (true) {
                while (!fOneTemplateA(outcome1,result)) {
                    fcA(attacktournament);
                }
                if (result==sweeptournament) {
                    while (!fA(buytournament)) {
                        fcOneTemplateA(outcome2);
                    }
                    while (!fcA(cross));
                    while (fcA(cross));
                    break;
                }
                else if (result == buytournament) {
                    while (fcA(cross));
                    break;
                }
                else {
                    while (!fcA(victory)) {
                        fA(autofight);
                    }
                    while (fcA(victory));
                }
            }
            while (!fcA(rewardtournament));
            while (!fcA(claimalltournament)) {
                fcA(rewardtournament);
            }
            while (fcA(congratulations));
            while (!fcA(cross));
            while (fcA(cross));
        }
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doBattlepass() {
    try {
        while (!fcA(battlepass));
        while (fcA(battlepass));
        while (fcCompareA(ncmissionsbattlepass, cmissionsbattlepass));
        while (fcA(claimbattlepass));
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doHerb() {
    try {
        while (!fcA(yinyangwell)) {
            swipeX(0, dimX, 500);
        }
        while (!fA(icefire)) {
            fcA(yinyangwell);
        }
        while (!fcA(herb)) {
            swipeX(0.9 * dimX, 0.1 * dimX, 500);
        }
        while (!fcA(protectherb)) {
            while (fcA(claimallherb)) {
                while (fcA(congratulations));
                fcA(cross);
            }
        }
        while (!fcA(confirmprotectherb)) {
            fcA(protectherb);
        }
        while (fcA(confirmprotectherb));
        while (!fcA(deliverherb));
        while (fcA(deliverherb));
        bool delivering = false;
        bool goldyrefresh = false;
        if (getUTCDay() == Saturday || getUTCDay() == Sunday) {
            while (!fcA(confirmdelivery)) {
                fcA(shipnow,0);
                if (fA(indelivery,0))break;
                if (fA(buyherb))break;
            }
            while (fcA(confirmdelivery));
        }
        else {
            while (!(goldyrefresh || fcA(confirmgodlyrefresh))) {
                fcA(godlyrefresh,0);
                if (fA(indelivery,0)) goldyrefresh = true;
            }
            while (!goldyrefresh && fcA(confirmgodlyrefresh));
            while (!(delivering || fcA(shipnow,0))) {
                if (fA(indelivery,0))delivering = true;
                if (fA(buyherb))delivering = true;
            }
            while (!delivering && fcA(shipnow));
        }
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doSoulascension()
{
    try {
        while (!fcA(soulpagoda)) {
            swipeX(0.9 * dimX, 0.1 * dimY, 500);
        }
        std::vector<std::string> accesssoulascension{ congratulations,soulpagoda,soulascension,claimsoulascension };
        while (!fcA(sweepsoulascension)) {
            fcOneTemplateA(accesssoulascension);
        }
        std::vector<std::string>sweep{ confirmsoulascension,sweepagainsoulascension };
        while (!fA(confirmsoulascension)) {
            fcA(soulascension);
        }
        while (!fA(insufficientsweep, 0)) {
            fcOneTemplateA(sweep, 0);
        }
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doHell() {
    try {
        if (getUTCHour() >= 16 || getUTCHour() < 15) {
            while (!fcA(hell)) {
                swipeX(1, dimX - 1, 500);
                fcA(arena);
            }
            bool oncooldown = false;
            bool hasadvanced;
            std::vector<std::string> enterhell{ congratulations,promotionsuccessful,claimhell,hell};
            do {
                hasadvanced = false;
                std::vector<std::string> challenge{ oneclickchallenge,quickchallenge };
                std::vector<std::string> alternative{ noundefeated,cooldowntext };
                std::string result;
                while (!fcA(confirmoneclickchallenge)) {
                    while (fcOneTemplateA(enterhell));
                    if (fcOneTemplateA(challenge, 0)) {
                        if (fA(noundefeated, 0)) {
                            fcA(advancehell);
                            hasadvanced = true;
                        }
                    }
                    else {
                        oncooldown = true;
                        break;
                    }

                }
            } while (hasadvanced&&!oncooldown);

            if (!oncooldown) {
                while (fcA(confirmoneclickchallenge));
                while (!fcA(endofchallenge)) {
                    fA(fightinghell);
                    fcA(battle);
                }
                while (fcA(endofchallenge));
            }
        }
    }
    catch (RebootException& e) {
        return;
    }
}

void game::doGrandmaster() {
    try {
        while (!fcA(raceevent)) {
            swipeX(1, dimX - 1, 500);
        }

        day Day= getUTCDay();
        if (Day == Saturday || Day == Sunday) {
            while (!fA(worshipgrandmaster)) {
                fcA(raceevent);
                fcA(grandmaster);
            }
            while (!fcA(worshipgrandmaster));
            bool fightleft = true;
            bool canfight = true;
            Coords leaveresult{ 0.23 * dimX,0.15 * dimY };
            std::string res;
            std::vector<std::string>outcome{ victorygrandmaster,defeatgrandmasterwe,buygrandmaster };
            while (canfight) {
                if(fightleft)fcOneTemplateMultipleTemplateA(autograndmaster, W, 0);
                else fcOneTemplateMultipleTemplateA(autograndmaster, E, 0);
                while (!fOneTemplateA(outcome,res));
                if (res == buygrandmaster)canfight=false;
                else if (res == defeatgrandmaster)fightleft = false;
                adb.touch(leaveresult.x, leaveresult.y);
            }
            while (fcA(cross));
            while (!fcA(claimallgrandmaster)) {
                fcA(pointsgrandmaster);
            }
            while (fcA(congratulations));
            while (fcA(cross));
        }
        else {
            while (!fA(pointsgrandmaster)) {
                fcA(raceevent);
                fcA(grandmaster);
            }
            Unit redbillion(redbilliongm, B);
            Unit purplebillion(billionpurplegm, B);
            Unit purplemillion(millionpurplegm, M);

            std::vector<Unit>redUnits{ redbillion };
            std::vector<Unit>purpleUnits{ purplebillion,purplemillion };
            std::vector<std::string>redDigits = { zeroredgm,oneredgm,tworedgm,threeredgm,fourredgm,fiveredgm,sixredgm,sevenredgm,eightredgm,nineredgm };
            std::vector<std::string>purpleDigits = { zeropurplegm,onepurplegm,twopurplegm,threepurplegm,fourpurplegm,fivepurplegm,sixpurplegm,sevenpurplegm,eightpurplegm,ninepurplegm };
            std::vector <Unit>activeUnits;
            std::vector <std::string>activeDigits;
            Unit enemyBillion(billiongm, B);
            Unit enemyThousand(thousandgm, K);
            Unit enemyMillion(milliongm, M);
            std::vector<Unit>enemyUnit{ enemyBillion,enemyThousand,enemyMillion };
            std::vector<std::string>enemyDigits{ zerogm,onegm,twogm,threegm,fourgm,fivegm,sixgm,sevengm,eightgm,ninegm };
            Number mybp, enemybpleft, enemybpmiddle, enemybpright;
            while (!fA(defendingbp));
            Coords topbp(C.x + getMatWidth(defendingbp) / 2, C.y - getMatHeight(defendingbp));
            while (!fA(arrowgm));
            Coords botbp(C.x - getMatWidth(arrowgm) / 2, C.y + getMatHeight(arrowgm) / 2);
            Zone mybpZone(topbp, botbp);
            if (fCompareZoneA(billionpurplegm, redbilliongm, mybpZone)) {
                activeUnits = purpleUnits;
                activeDigits = purpleDigits;
            }
            else if (fCompareZoneA(millionpurplegm, billionpurplegm, mybpZone)) {
                activeUnits = purpleUnits;
                activeDigits = purpleDigits;
            }
            else {
                activeUnits = redUnits;
                activeDigits = redDigits;
            }
            mybp = fNumberIntegerA(activeDigits, activeUnits, mybpZone);
            fcA(changegrandmaster);

            int minChallenge = 1;
            bool nochallengeleft = false;
            while (!nochallengeleft) {
                std::vector<Number>allNumbers;
                for (int i = 0; i < 3; ++i) {
                    Number tempnb;
                    while (!fOneTemplateMultipleTemplateA(bpenemygm, W, i));
                    Coords topbpEnemy(C.x + getMatWidth(bpenemygm) / 2, C.y - getMatHeight(bpenemygm) / 2);
                    Coords botbpEnemy(topbpEnemy.x + 4 * getMatWidth(bpenemygm), topbpEnemy.y + getMatHeight(bpenemygm));
                    Zone enemybpZone(topbpEnemy, botbpEnemy);
                    tempnb = fNumberIntegerA(enemyDigits, enemyUnit, enemybpZone);
                    switch (i) {
                        case 0:
                            enemybpleft = tempnb;
                            break;
                        case 1:
                            enemybpmiddle = tempnb;
                            break;
                        case 2:
                            enemybpright = tempnb;
                            break;
                    }
                    allNumbers.push_back(tempnb);
                }
                int i;
                int enemytochallenge = 0;
                bool canChallenge = false;
                for (i = 2; i >= minChallenge; --i) {
                    if (allNumbers.at(i).nb < mybp.nb) {
                        canChallenge = true;
                        enemytochallenge = i;
                        minChallenge = 1;
                        break;
                    }
                }
                if (!canChallenge) {
                    fcA(changegrandmaster);
                    minChallenge = 0;
                    continue;
                }
                std::vector<std::string>outcome{ defeatgrandmaster, victorygrandmaster,tierpromotiongm };
                while (!fOneTemplateA(outcome)) {
                    if (fA(buygrandmaster)) {
                        nochallengeleft = true;
                        while (!fcA(cross));
                        while (fcA(cross));
                        break;
                    }
                    fcOneTemplateMultipleTemplateA(sweepgrandmaster, W, enemytochallenge);
                }
                while (fOneTemplateA(outcome))adb.touch(C.x, C.y - getMatHeight(victorygrandmaster));
            }


            while (fcA(chestgrandmaster)) {
                if (fA(congratulations, 0)) {
                    while (fcA(congratulations));
                }
                else {
                    while (fcA(cross));
                    break;
                }
            }
            while (!fcA(claimallgrandmaster)) {
                fcA(pointsgrandmaster);
            }
            while (fcA(congratulations));
            while (!fcA(cross));
            while (fcA(cross));
        }
    }
    catch (RebootException& e) {
        return;
    }
}
void game::doDailies()
{
    try {
       while (!fcA(dailyevents));
        while (!fA(home)) {
            while (fcA(dailyevents));
        }
        int i = 0;
        bool found = false;

        std::vector<std::string>staminapurchase{ ncstaminapurchase,cstaminapurchase };
        while (!fOneTemplateA(staminapurchase)) {
            switch (i) {
            case 0:                
                swipe(0.07 * dimX, 0.74 * dimY, 0.07 * dimX, 0.21 * dimY, 500);
                i = 1;              
                
                break;
            case 1:
                swipe(0.07 * dimX, 0.21 * dimY, 0.07 * dimX, 0.74 * dimY, 500);
                i = 0;               
                break;
            }
        }
        while (fcCompareA(ncstaminapurchase, cstaminapurchase));
        while (fcA(claimsausages)) {
            while (fcA(congratulations));
        }
        while (fcA(congratulations));
        std::vector<std::string>normalmode{ ncnormalmode,cnormalmode };
        while (!fOneTemplateA(normalmode)) {
            switch (i) {
            case 0:
                swipe(0.07 * dimX, 0.74 * dimY, 0.07 * dimX, 0.21 * dimY, 500);
                i = 1;

                break;
            case 1:
                swipe(0.07 * dimX, 0.21 * dimY, 0.07 * dimX, 0.74 * dimY, 500);
                i = 0;
                break;
            }
        }
        while (fcCompareA(ncnormalmode, cnormalmode));
        while (fcA(claimsausages)) {
            while (fcA(congratulations));
        }
        while (fcA(congratulations));
        std::vector<std::string>dailyfreebies{ ncdailyfreebies,cdailyfreebies };
        while (!fcOneTemplateA(dailyfreebies)) {
            swipe(0.07 * dimX, 0.74 * dimY, 0.07 * dimX, 0.21 * dimY, 500);
        }
        while (fcCompareA(ncdailyfreebies, cdailyfreebies));
        while (fcA(claimfreebies)) {
            while (fcA(congratulations));
        }
        goHome();
        while (!fcA(limitedevents));
        while (fcA(limitedevents));
        std::vector<std::string>dailypacks{ ncdailypacks,cdailypacks };
        while (!fOneTemplateA(dailypacks)) {
            swipe(0.07 * dimX, 0.74 * dimY, 0.07 * dimX, 0.21 * dimY, 500);
        }
        while (fcCompareA(ncdailypacks, cdailypacks));
        while (fcA(randomluckybag));
        day Day = getUTCDay();
        if ((Day == Friday || Day == Saturday || Day == Sunday)) {
            std::vector<std::string>activewheel{ ncactivewheel,cactivewheel };
            while (!fOneTemplateA(activewheel)) {
                switch (i) {
                case 0:
                    swipe(0.07 * dimX, 0.74 * dimY, 0.07 * dimX, 0.21 * dimY, 500);
                    i = 1;

                    break;
                case 1:
                    swipe(0.07 * dimX, 0.21 * dimY, 0.07 * dimX, 0.74 * dimY, 500);
                    i = 0;
                    break;
                }
            }
            while (fcCompareA(ncactivewheel, cactivewheel));
            std::vector<std::string>wheelpack{ claimwheelpack,claimedwheelpack };
            while (!fcOneTemplateA(wheelpack)) {
                fcA(dailypackwheel);
            }
            while (fcA(cross));
            int i = 0;
            while (!fA(noluckydrawleft,0)&&!fcA(noticketswheel)) {
                fcA(drawwheel,0);
            }
            while (fcA(cross));
        }
    
    }
    catch (RebootException& e) {
        return;
    }
}
void game::doHunting()
{
    try {
        day today = getUTCDay();
        int utchour = getUTCHour();
        std::cout<<"UTCHour: " << getUTCHour()<<"\n";
        while (!fcA(stardouforest)) {
            swipeX(0, dimX,500);
        }
        while (!fA(hunting)) {
            swipeX(dimX - 1, 1,500);
        }
        while (!fA(galaxyhunt)) {
            fcA(hunting);
        }
        std::vector<std::string>outcomerewards{crosshunting,congratulations,boxhunting,beasthunting };
        std::vector<std::string>sweepinghunt{congratulations,sweephunting,buyhunting,challengehunting };
        int boxwidth = getMatWidth(boxhunting);
        int boxheight = getMatHeight(boxhunting);
        int beastwidth = getMatWidth(beasthunting);
        int beastheight = getMatHeight(beasthunting);
        std::string direction;
        std::string result;
        std::string resultsweeping;
        bool noenergy = false;
        float swipevalues[4];
        bool doGalaxy = (((today == Monday || today == Wednesday || today == Friday || today == Sunday) && getUTCHour() < 19)||((today == Tuesday || today == Thursday || today == Friday || today == Saturday || today==Sunday) && getUTCHour() >= 19));
        bool doForest = (!doGalaxy|| (today == Sunday && getUTCHour() < 19) || (today == Saturday && getUTCHour() >= 19));
        if (doGalaxy) {
            while (fcA(galaxyhunt));
            for (int i = 0; i < 4; ++i) {
                switch (i) {
                case 0:
                    direction = topleftgalaxy;
                    swipevalues[0] = 0.2;
                    swipevalues[1] = 0.2;
                    swipevalues[2] = 0.8;
                    swipevalues[3] = 0.8;
                    break;
                case 1:
                    direction = botleftgalaxy;
                    swipevalues[0] = 0.2;
                    swipevalues[1] = 0.8;
                    swipevalues[2] = 0.8;
                    swipevalues[3] = 0.2;
                    break;
                case 2:
                    direction = botrightgalaxy;
                    swipevalues[0] = 0.8;
                    swipevalues[1] = 0.8;
                    swipevalues[2] = 0.2;
                    swipevalues[3] = 0.2;
                    break;
                case 3:
                    direction = toprightgalaxy;
                    swipevalues[0] = 0.8;
                    swipevalues[1] = 0.2;
                    swipevalues[2] = 0.2;
                    swipevalues[3] = 0.8;
                    break;
                }
                while (!fA(direction)) {
                    swipe(swipevalues[0] * dimX, swipevalues[1] * dimY, swipevalues[2] * dimX, swipevalues[3] * dimY, 500);
                    while (fcA(crosshunting, 500));
                }
                while (fcOneTemplateA(outcomerewards, result)) {
                    if (result != congratulations) {
                        adb.touch(C.x - beastwidth, C.y - beastheight);
                    }
                }
            }
            if (!noenergy) {
                while (!fA(topleftgalaxy)) {
                    swipe(0.2 * dimX, 0.2 * dimY, 0.8 * dimX, 0.8 * dimY, 500);
                    while (fcA(crosshunting,500));
                }
                while (fA(topleftgalaxy)) {
                    swipe(0.75 * dimX, 0.75 * dimY, 0.45 * dimX, 0.45 * dimY, 1000);
                    wait(1000);
                    while(fcA(crosshunting,500));
                }
                if (!fA(lockmonsterhunting)) {
                    if (fCompareA(selectedcolormonstergalaxy, unselectedcolormonstergalaxy)) {
                        while (!fOneTemplateA(sweepinghunt, resultsweeping)) {
                            fcCompareA(selectedcolormonstergalaxy, unselectedcolormonstergalaxy);
                        }
                        while (fOneTemplateA(sweepinghunt, resultsweeping)) {
                            if (resultsweeping == buyhunting) {
                                noenergy = true;
                                break;
                            }
                            else if (resultsweeping == challengehunting)break;
                            else if (resultsweeping == congratulations)fcA(congratulations);
                            else fcA(sweephunting);
                        }
                    }
                }
            }
        }
        while (!fA(foresthunt)) {
            fcA(back);
        }
        if(doForest){
            while (fcA(foresthunt));
            for (int i = 0; i < 4; ++i) {
                switch (i) {
                case 0:
                    direction = topleftforest;
                    swipevalues[0] = 0.2;
                    swipevalues[1] = 0.2;
                    swipevalues[2] = 0.8;
                    swipevalues[3] = 0.8;
                    break;
                case 1:
                    direction = botleftforest;
                    swipevalues[0] = 0.2;
                    swipevalues[1] = 0.8;
                    swipevalues[2] = 0.8;
                    swipevalues[3] = 0.2;
                    break;
                case 2:
                    direction = botrightforest;
                    swipevalues[0] = 0.8;
                    swipevalues[1] = 0.8;
                    swipevalues[2] = 0.2;
                    swipevalues[3] = 0.2;
                    break;
                case 3:
                    direction = toprightforest;
                    swipevalues[0] = 0.8;
                    swipevalues[1] = 0.2;
                    swipevalues[2] = 0.2;
                    swipevalues[3] = 0.8;
                    break;
                }
                while (!fA(direction)) {
                    swipe(swipevalues[0] * dimX, swipevalues[1] * dimY, swipevalues[2] * dimX, swipevalues[3] * dimY, 500);
                    while (fcA(crosshunting,500));
                }
                while (fcOneTemplateA(outcomerewards, result)) {
                    if (result != congratulations) {
                        adb.touch(C.x - beastwidth, C.y - beastheight);
                    }
                }
            }
            if (!noenergy) {
                while (!fA(botrightforest)) {
                    swipe(0.8 * dimX, 0.8 * dimY, 0.2 * dimX, 0.2 * dimY, 500);
                    while (fcA(crosshunting, 500));
                }
                while (fcA(crosshunting));
                if (!fA(lockmonsterhunting)) {
                    if (fCompareA(selectedcolormonsterforest, unselectedcolormonsterforest)) {
                        while (!fOneTemplateA(sweepinghunt, resultsweeping)) {
                            fcCompareA(selectedcolormonsterforest, unselectedcolormonsterforest);
                        }
                        while (fOneTemplateA(sweepinghunt, resultsweeping)) {
                            if (resultsweeping == buyhunting) {
                                noenergy = true;
                                break;
                            }
                            else if (resultsweeping == challengehunting)break;
                            else if (resultsweeping == congratulations)fcA(congratulations);
                            else fcA(sweephunting);
                        }
                    }
                }
            }

        }

        while (!fA(darkness)) {
            fcA(back);
        }
        while (fcA(darkness));
        for (int i = 0; i < 4; ++i) {
            switch (i) {
            case 0:
                direction = verytopleftdarkness;
                swipevalues[0] = 0.35;
                swipevalues[1] = 0.35;
                swipevalues[2] = 0.65;
                swipevalues[3] = 0.65;
                break;
            case 1:
                direction = verybotleftdarkness;
                swipevalues[0] = 0.35;
                swipevalues[1] = 0.65;
                swipevalues[2] = 0.65;
                swipevalues[3] = 0.35;
                break;
            case 2:
                direction = verybotrightdarkness;
                swipevalues[0] = 0.65;
                swipevalues[1] = 0.65;
                swipevalues[2] = 0.35;
                swipevalues[3] = 0.35;
                break;
            case 3:
                direction = verytoprightdarkness;
                swipevalues[0] = 0.65;
                swipevalues[1] = 0.35;
                swipevalues[2] = 0.35;
                swipevalues[3] = 0.65;
                break;
            }
            while (!fA(direction)) {
                swipe(swipevalues[0] * dimX, swipevalues[1] * dimY, swipevalues[2] * dimX, swipevalues[3] * dimY, 1000);
                while (fcA(crosshunting, 500));
            }
            if (direction!= verytopleftdarkness && direction != verybotleftdarkness) {
                while (fA(direction)) {
                    swipe((1 - swipevalues[0]) * dimX, (1 - swipevalues[1]) * dimY, (1 - swipevalues[2]) * dimX, (1 - swipevalues[3]) * dimY, 1000);
                    while (fcA(crosshunting, 500));
                }
            }
            while (fcOneTemplateA(outcomerewards, result)) {
                if (result != congratulations) {
                    adb.touch(C.x - beastwidth, C.y - beastheight);
                }
            }
        }

    }
    catch (RebootException& e) {
        return;
    }
}
void game::doWhales()
{
    try {
        if (getUTCDay() == Friday && getUTCHour() > 6 && getUTCHour() < 17) {
            while (!fA(pointswhales)) {
                fcA(whales);
            }
            std::vector<std::string>outcome{autowhales, batterover,luckyhit,backgroundwhales, };
            while (!fA(buywhales, 0)) {
                while (fcOneTemplateA(outcome, 0));
            }
            while (!fcA(cross));
            while (fcA(cross));
            while (!fA(cpersonalhonor)) {
                fcA(pointswhales);
            }
            while (!fcA(claimallwhales));
            while (fcA(congratulations));
            while (!fcCompareA(ncsecthonor, csecthonor));
            while (fcCompareA(ncsecthonor, csecthonor));
            while (!fcA(claimallwhales));
            while (fcA(congratulations));
            while (!fcCompareA(nckillreward, ckillreward));
            while (fcCompareA(nckillreward, ckillreward));
            while (!fcA(claimallwhales));
            while (fcA(congratulations));
            while (!fcA(cross));
            while (fcA(cross));
        }

    }
    catch (RebootException& e) {
        return;
    }
}
void game::doAbyss() {
    try {
        std::vector<CustomNumber>AlliedTeam;
        std::vector<CustomNumber>EnnemyTeam;
        std::vector<std::string>abyssdigits = { zeroabyss,oneabyss,twoabyss,threeabyss,fourabyss,fiveabyss,sixabyss,sevenabyss,eightabyss,nineabyss };
        std::vector<std::string>abyssdigitsenemy = { zeroenemyabyss,oneenemyabyss,twoenemyabyss,threeenemyabyss,fourenemyabyss,fiveenemyabyss,sixenemyabyss,sevenenemyabyss,eightenemyabyss,nineenemyabyss };
        Unit Million(millionabyss, M);
        Unit Billion(billionabyss, B);
        Unit Billionenemy(billionenemyabyss, B);
        std::vector<Unit>unit = { Million,Billion };
        std::vector<Unit>unitEnemy = { Billionenemy };
        CustomNumber Tstrongest, Tweakest, Tmiddle, Estrongest, Emiddle, Eweakest;
        CustomNumber T0, T1, T2, E0, E1, E2;
        std::vector<CustomNumber>allEnemies;
        std::vector<CustomNumber>allAllies;
        Coords CT01, CT02, CT11, CT12, CT21, CT22, CE01, CE02, CE11, CE12, CE21, CE22;
        Zone T0zone, T1zone, T2zone, E0zone, E1zone, E2zone;
        std::vector<std::string> outcome{ abyssdefeat,victoryabyss };
        Coords Cenemy;
        bool firstenemy = true;
        int nbtries = 0;
        bool exit = false;
        bool completed = false;
        bool won = true;
        Coords Ccontinueabyss(0.36 * dimX, 0.86 * dimY);
        bool changeopp = false;
        int changemax = 0;

        while (!fcA(metalcity));
        while (!fcA(abyss)) {
            fcA(metalcity);
        }
        while (!fA(abyssformation)) {
            fcA(abyss);
        }
        int nbenemy = 0;
        while (!completed) {
            std::vector<std::string>allElements{ startexploring,redchestabyss,bluechestabyss,congratulations,continueabyss,explorationlevelup };
            if (nbtries > 5) {
                std::cout << "Too many failures Redo your team\n";
                exit = true;
                break;
            }

            do {
                while (fcOneTemplateA(allElements));
                if (fA(finalchestabyss)) {
                    completed = true;
                    break;
                }
                fnbTemplateA(abyssteamdetails, nbenemy);
                adb.touch(Ccontinueabyss.x, Ccontinueabyss.y);
            } while (nbenemy < 3);
            if (completed)break;
            if (!won) {
                while (!fcA(confirmabyss)) {
                    fcA(abysschange);
                }
                while (fcA(confirmabyss));
            }

            while (!fOneTemplateMultipleTemplateA(abyssteamdetails, E, 0));
            Cenemy = { C.x+ getMatHeight(abyssteamdetails)*2,C.y - getMatHeight(abyssteamdetails) * 2 };

            while (!fA(playerdetails)) {
                fcOneTemplateMultipleTemplateA(abyssteamdetails, E, 0);
            }

            int squadWidth = getMatWidth(abysssquad);
            int squadHeight = getMatHeight(abysssquad);

            while (!fOneTemplateMultipleTemplateA(abysssquad, N, 0));
            CE01 = { C.x - squadWidth / 2,C.y + squadHeight / 2 };
            CE02 = { C.x + squadWidth,C.y + squadHeight * 2 };
            E0zone = { CE01,CE02 };
            while (!fOneTemplateMultipleTemplateA(abysssquad, N, 1));
            CE11 = { C.x - squadWidth / 2,C.y + squadHeight / 2 };
            CE12 = { C.x + squadWidth,C.y + squadHeight * 2 };
            E1zone = { CE11,CE12 };
            while (!fOneTemplateMultipleTemplateA(abysssquad, N, 2));
            CE21 = { C.x - squadWidth / 2,C.y + squadHeight / 2 };
            CE22 = { C.x + 3 * squadWidth / 2,C.y + squadHeight * 2 };
            E2zone = { CE21,CE22 };

            E0.number = fNumberIntegerA(abyssdigitsenemy, unitEnemy, E0zone);
            E0.pos = 0;
            E1.number = fNumberIntegerA(abyssdigitsenemy, unitEnemy, E1zone);
            E1.pos = 1;
            E2.number = fNumberIntegerA(abyssdigitsenemy, unitEnemy, E2zone);
            E2.pos = 2;
            allEnemies.push_back(E0);
            allEnemies.push_back(E1);
            allEnemies.push_back(E2);

            std::sort(allEnemies.begin(), allEnemies.end(), [&](const CustomNumber& a, const CustomNumber& b) {
                return a.number.nb > b.number.nb;
                });
            Estrongest = allEnemies.at(0);
            Emiddle = allEnemies.at(1);
            Eweakest = allEnemies.at(2);
            while (fcA(cross));
            while (!fcA(formationtournament));
            while (fcA(formationtournament));
            while (!fcA(changelineupabyss));
            while (!fA(onchangelineupabyss)) {
                fcA(changelineupabyss);
            }

            if (firstenemy||(Tstrongest.pos+Tmiddle.pos+Tweakest.pos!=3)) {
                int squad1Width = getMatWidth(teamoneabyss);
                int squad1Height = getMatHeight(teamoneabyss);
                int squad2Width = getMatWidth(teamtwoabyss);
                int squad2Height = getMatHeight(teamtwoabyss);
                int squad3Width = getMatWidth(teamthreeabyss);
                int squad3Height = getMatHeight(teamthreeabyss);

                while (!fA(teamoneabyss));
                CT01 = { C.x + squad1Width / 2,C.y - squad1Height / 2 };
                CT02 = { C.x + squad1Width * 3,C.y + squad1Height / 2 };
                T0zone = { CT01,CT02 };
                while (!fA(teamtwoabyss));
                CT11 = { C.x + squad2Width / 2,C.y - squad2Height / 2 };;
                CT12 = { C.x + squad2Width * 3,C.y + squad2Height / 2 };
                T1zone = { CT11,CT12 };
                while (!fA(teamthreeabyss));
                CT21 = { C.x + squad2Width / 2,C.y - squad2Height / 2 };
                CT22 = { C.x + squad2Width * 3,C.y + squad2Height / 2 };
                T2zone = { CT21,CT22 };

                T0.number = fNumberIntegerA(abyssdigits, unit, T0zone);
                T0.pos = 0;
                T1.number = fNumberIntegerA(abyssdigits, unit, T1zone);
                T1.pos = 1;
                T2.number = fNumberIntegerA(abyssdigits, unit, T2zone);
                T2.pos = 2;
                allAllies = { T0,T1,T2 };
                std::sort(allAllies.begin(), allAllies.end(), [&](const CustomNumber& a, const CustomNumber& b) {
                    return a.number.nb > b.number.nb;
                    });
                Tstrongest = allAllies.at(0);
                Tmiddle = allAllies.at(1);
                Tweakest = allAllies.at(2);
                firstenemy = false;
            }

            if (Tstrongest.pos != Emiddle.pos) {
                while (!fcOneTemplateMultipleTemplateA(exchangeabyss, N, Tstrongest.pos));
                while (fcOneTemplateMultipleTemplateA(exchangeabyss, N, Tstrongest.pos));
                if (Tstrongest.pos < Emiddle.pos) {
                    while (!fcOneTemplateMultipleTemplateA(replaceabyss, N, Emiddle.pos - 1));
                    while (fcOneTemplateMultipleTemplateA(replaceabyss, N, Emiddle.pos - 1));
                }
                else {
                    while (!fcOneTemplateMultipleTemplateA(replaceabyss, N, Emiddle.pos));
                    while (fcOneTemplateMultipleTemplateA(replaceabyss, N, Emiddle.pos));
                }
                if (Tmiddle.pos == Emiddle.pos) {
                    Tmiddle.pos = Tstrongest.pos;
                    Tstrongest.pos = Emiddle.pos;
                }
                else if (Tweakest.pos == Emiddle.pos) {
                    Tweakest.pos = Tstrongest.pos;
                    Tstrongest.pos = Emiddle.pos;
                }
            }
            std::cout << "Done strongest Team\n";
            if (Tmiddle.pos != Eweakest.pos) {
                while (!fcOneTemplateMultipleTemplateA(exchangeabyss, N, Tmiddle.pos));
                while (fcOneTemplateMultipleTemplateA(exchangeabyss, N, Tmiddle.pos));
                if (Tmiddle.pos < Eweakest.pos) {
                    while (!fcOneTemplateMultipleTemplateA(replaceabyss, N, Eweakest.pos - 1));
                    while (fcOneTemplateMultipleTemplateA(replaceabyss, N, Eweakest.pos - 1));
                }
                else {
                    while (!fcOneTemplateMultipleTemplateA(replaceabyss, N, Eweakest.pos));
                    while (fcOneTemplateMultipleTemplateA(replaceabyss, N, Eweakest.pos));
                }
                if (Tstrongest.pos == Eweakest.pos) {
                    Tstrongest.pos = Tmiddle.pos;
                    Tmiddle.pos = Eweakest.pos;
                }
                else if (Tweakest.pos == Eweakest.pos) {
                    Tweakest.pos = Tmiddle.pos;
                    Tmiddle.pos = Eweakest.pos;
                }
            }
            std::cout << "Tstrongest pos:" << Tstrongest.pos << "\n";
            std::cout << "Tmiddle pos:" << Tmiddle.pos << "\n";
            std::cout << "Tweakest pos:" << Tweakest.pos << "\n";
            std::cout << "Estrongest pos:" << Estrongest.pos << "\n";
            std::cout << "Emiddle pos:" << Emiddle.pos << "\n";
            std::cout << "Eweakest pos:" << Eweakest.pos << "\n";
            std::cout << "Done middle Team\n";
            allEnemies.clear();      

            while (!fA(abyssteamdetails)) {
                fcA(cross);
            }
            while (!fcA(skipbattle)) {
                adb.touch(Cenemy.x, Cenemy.y);
            }
            while (!fOneTemplateA(outcome)) {
                fcA(skipbattle);
            }
            if (fcA(victoryabyss)) {
                won = true;
            }
            if (fcA(abyssdefeat)) {
                won = false;
                nbtries++;
            }

        }
        if (!exit) {
            while (!fA(onfinalchestabyss)) {
                fcA(finalchestabyss);
            }
            while (fcA(freeabyss)) {
                while (fcA(congratulations));
            }

            while (fcA(congratulations));
            while (fcA(cross));
        }
    }
    catch (RebootException& e) {
        return;
    }
}




void game::doZhuqing()
{
}
void game::doCheckin()
{
}
void game::doSectwar()
{
}
void game::doSilverweiss()
{
}
void game::doRanking()
{
}
void game::doSotto()
{
}
void game::doTree()
{
}
void game::doRace() {
    try {

    }
    catch (RebootException& e) {
        return;
    }
}
void game::doTrial() {
    try {

    }
    catch (RebootException& e) {
        return;
    }

}
void game::doBag() {
    try {

    }
    catch (RebootException& e) {
        return;
    }

}
void game::doForest() {
    try {
    }
    catch (RebootException& e) {
        return;
    }
}


void game::setAdb(fadb adb) {
    this->adb = adb;
}

void game::startMacro()
{
    mac.setDim(dimX, dimY);
    mac.initMacroConfig();
    initActivities();
    selectActivity();
    sys.createpaths(templates);
    mac.blue.startInstance(mac.playingInstance);
    mac.updateBlueStacksConfAdbPort(mac.playingInstance);
    adb.setPort(mac.playingInstance.port);
    adb.devices();
    adb.disconnectLocalhost(adb.intport);
    adb.connectLocalhost(adb.intport);
    sys.setPort(adb.intport);

    loadAllTemplates();
}
void game::setSys(sysCommands sys) {
    this->sys = sys;
}
int game::getDimX() {
    return dimX;
}

int game::getDimY() {
    return dimY;
}

void game::setPort(int port) {
    adb.setPort(port);
}

day game::getUTCDay() {
    auto now = std::chrono::system_clock::now();
    std::time_t current_time = std::chrono::system_clock::to_time_t(now);
    tm utc_time;
    gmtime_s(&utc_time, &current_time);
    int day = utc_time.tm_wday;
    switch (day) {
    case 0:
        return Sunday;
    case 1:
        return Monday;
    case 2:
        return Tuesday;
    case 3:
        return Wednesday;
    case 4:
        return Thursday;
    case 5:
        return Friday;
    case 6:
        return Saturday;
    default:
        return Monday;
    }
}

int game::getUTCHour() {
    auto now = std::chrono::system_clock::now();
    std::time_t current_time = std::chrono::system_clock::to_time_t(now);
    tm utc_time;
    gmtime_s(&utc_time, &current_time);
    return utc_time.tm_hour;
}

std::tuple<bool*, std::string> game::getActivity(char key, bool& present)
{
    if (allActivities.find(key) != allActivities.end()) {
        present = true;
        return allActivities.at(key);

    }
    present = false;
    return std::tuple<bool*, std::string>();
}

void game::setActivity(char key, bool activate)
{
    bool found = false;
    std::tuple<bool*, std::string>activity = getActivity(key, found);
    if (found) {
        *std::get<0>(activity) = activate;
    }
}

void game::setActivity(std::tuple<bool*, std::string> tuple, bool activate)
{
    *std::get<0>(tuple) = activate;
}



void game::loadTemplate(std::string image)
{
    Template newTemplate(image);
    allTemplates.insert(std::pair<std::string, Template>(image, newTemplate));
}

void game::loadAllTemplates() {
    std::string path = ".\\assets\\templates";
    std::filesystem::directory_iterator dir(path);
    std::vector<std::string>allFileNames;
    getFilesPath(allFileNames, dir);
    for (const std::string str : allFileNames) {
        loadTemplate(str);
    }
}

void game::getFilesPath(std::vector<std::string>& tab, std::filesystem::directory_iterator path)
{
    std::filesystem::path currentPath = path->path().parent_path();

    std::vector<std::filesystem::directory_entry> folders;
    folders.clear();
    for (const auto& entry : path) {
        if (entry.is_regular_file()) {
            tab.push_back(entry.path().string());
        }
        else if (entry.is_directory()) {
            folders.push_back(entry);
        }
    }
    for (int i = 0; i < folders.size(); i++) {
        if (!std::filesystem::is_empty(folders.at(i).path())) {
            getFilesPath(tab, std::filesystem::directory_iterator(folders.at(i).path()));
        }
        else {
            std::filesystem::path currentPath = folders.at(i).path();
        }
    }
}

void game::showVector(std::vector<std::string> vect)
{
    for (auto str : vect) {
        std::cout << str << "\n";
    }
}

Template game::getTemplate(std::string image, typeMat type) {
    if (allTemplates.find(image) != allTemplates.end()) {
        Template templ = allTemplates.at(image);
        templ.setType(type);
        return templ;
    }
    else return Template();
}


int game::getYear() {
    std::time_t t = std::time(nullptr);
    std::tm now;
    localtime_s(&now, &t);
    return now.tm_year + 1900;
}

int game::getMonth() {
    std::time_t t = std::time(nullptr);
    std::tm now;
    localtime_s(&now, &t);
    return now.tm_mon + 1;
}

int game::getDay() {
    std::time_t t = std::time(nullptr);
    std::tm now;
    localtime_s(&now, &t);
    int dayOfWeek = now.tm_wday;
    if (dayOfWeek == 0) {
        dayOfWeek = 7;
    }
    return dayOfWeek;
}

int game::getHour() {
    std::time_t t = std::time(nullptr);
    std::tm now;
    localtime_s(&now, &t);
    return now.tm_hour;
}

int game::getMinute() {
    std::time_t t = std::time(nullptr);
    std::tm now;
    localtime_s(&now, &t);
    return now.tm_min;
}

int game::getSecond() {
    std::time_t t = std::time(nullptr);
    std::tm now;
    localtime_s(&now, &t);
    return now.tm_sec;
}

int game::getCx()const {
    return C.x;
}

int game::getCy()const {
    return C.y;
}

void game::setRebootCount(int nb) {
    rebootCount = nb;
}

int game::getRebootCount() {
    return rebootCount;
}

void game::setDimX(int x) {
    dimX = x;
}
void game::setDimY(int y) {
    dimY = y;
}
int game::getMatWidth(const std::string& name)
{
    return op.CreateMat(name, Gray).cols;
}
int game::getMatHeight(const std::string& name)
{
    return op.CreateMat(name, Gray).rows;
}

void game::wait(int milliSeconds)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(milliSeconds));
}
void game::swipeX(int x1, int x2, int millitime)
{
    swipe(x1, dimY / 2, x2, dimY / 2, millitime);
}

void game::swipeY(int y1, int y2, int millitime)
{
    swipe(dimX / 2, y1, dimX / 2, y2, millitime);
}

void game::swipe(int x1, int y1, int x2, int y2, int millitime)
{
    adb.swipe(x1, y1, x2, y2, millitime);
}

void game::orderDigits(std::vector<Digit>& digits) {
    std::sort(digits.begin(), digits.end(), [&](const Digit& a, const Digit& b) {
        return a.Cnb.x < b.Cnb.x;
        });
}

int game::distancePoint(const Coords& fixpt, const Coords& pt)
{
    return (int)sqrt(pow(fixpt.x - pt.x, 2) + pow(fixpt.y - pt.y, 2));
}

std::vector<Coords> game::orderCoords(const std::vector<Coords>& coordes, pos range) {
    std::vector<Coords> coords = coordes;

    switch (range) {
    case N:
        std::sort(coords.begin(), coords.end(), [](const Coords& a, const Coords& b) {
            return a.y < b.y;
            });
        break;

    case S:
        std::sort(coords.begin(), coords.end(), [](const Coords& a, const Coords& b) {
            return a.y > b.y;
            });
        break;

    case W:
        std::sort(coords.begin(), coords.end(), [](const Coords& a, const Coords& b) {
            return a.x < b.x;
            });
        break;

    case E:
        std::sort(coords.begin(), coords.end(), [](const Coords& a, const Coords& b) {
            return a.x > b.x;
            });
        break;

    case NW:
        std::sort(coords.begin(), coords.end(), [](const Coords& a, const Coords& b) {
            return a.x + a.y < b.x + b.y;
            });
        break;

    case NE:
        std::sort(coords.begin(), coords.end(), [](const Coords& a, const Coords& b) {
            return a.x - a.y > b.x - b.y;
            });
        break;

    case SW:
        std::sort(coords.begin(), coords.end(), [](const Coords& a, const Coords& b) {
            return a.y - a.x > b.y - b.x;
            });
        break;

    case SE:
        std::sort(coords.begin(), coords.end(), [](const Coords& a, const Coords& b) {
            return a.x + a.y > b.x + b.y;
            });
        break;
    }


    return coords;
}

std::vector<Coords> game::orderPoint(const std::vector<Coords>& coords, const Coords& Cf)
{
    std::vector<Coords> newcoords = coords;
    std::sort(newcoords.begin(), newcoords.end(), [&](const Coords& a, const Coords& b) {
        int distanceA = distancePoint(a, Cf);
        int distanceB = distancePoint(b, Cf);
        return distanceA < distanceB;
        });
    return newcoords;
}

void game::fillPopup()
{
    std::vector<std::string> discpopup = { disconnected };
    std::vector<std::string> blockpopup = { busy2,busy,reconnect };
    for (std::string discstr : discpopup) {
        Popup P(discstr, state::disconnect);
        listPopup.push_back(P);
    }
    for (std::string blockstr : blockpopup) {
        Popup P(blockstr, state::block);
        listPopup.push_back(P);
    }
}



bool game::fcA(const std::string& imgtemplate, unsigned int delayMilliseconds) {
    return fA(imgtemplate, delayMilliseconds, true);
}

bool game::fA(const std::string& imgtemplate, unsigned int delayMilliseconds, bool willInteract) {
    bool found = false;
    resetCount();
    Template Mat = getTemplate(imgtemplate);
    loopPopUp(Mat.type);
    if (op.cvmtfTemplate(Mat, background, C))found = true;
    return templateFound(found, willInteract, delayMilliseconds);
}

bool game::fcpopupA()
{
    Template bmat(backg, Gray);
    for (int i = 0; i < listPopup.size(); ++i) {
        if (op.cvmtfTemplate(listPopup.at(i).T, bmat, C)) {
            state cond = listPopup.at(i).cond;
            switch (cond) {
            case state::block:
                adb.touch(C.x, C.y);
                wait(2500);
                return true;
                break;

            case state::disconnect:
                restartMacro = true;
                throw 20;
                break;
            }
        }

    }
    return false;
}

void game::loopPopUp(typeMat color)
{
    do {
        adb.screenshot();
        background.mat = op.CreateMat(backg, Color);
        background.graymat = op.CreateMat(backg, Gray);
        background.type = color;
    } while (fcpopupA());
}


bool game::fcOneTemplateMultipleTemplateA(const std::string& imgtemplate, pos direction, int order, unsigned int delayMilliseconds) {
    return fOneTemplateMultipleTemplateA(imgtemplate, direction, order, delayMilliseconds, true);
}

bool game::fOneTemplateMultipleTemplateA(const std::string& imgtemplate, pos direction, int order, unsigned int delayMilliseconds, bool willInteract) {

    bool found = false;
    resetCount();
    std::vector<Coords>list;
    Template Mat = getTemplate(imgtemplate);
    loopPopUp(Mat.type);
    if (op.cvmtfMultipleTemplate(Mat, background, list)) {
        found = true;
        list = orderCoords(list, direction);
        if (order < 0)order = 0;
        if (order >= list.size())order = list.size() - 1;
        C = list.at(order);
    }
    return templateFound(found, willInteract, delayMilliseconds);
}

bool game::fnbTemplateA(const std::string& imgtemplate, int& nb, bool willInteract)
{
    bool found = false;
    resetCount();
    std::vector<Coords>list;
    nb = 0;
    Template Mat = getTemplate(imgtemplate);
    if (op.cvmtfMultipleTemplate(Mat, background, list)) {
        found = true;
        nb = list.size();
    }
    return templateFound(found, willInteract, DEFAULTDELAY);
}

bool game::fnbTemplateZoneA(const std::string& imgtemplate, int& nb, Zone Z, bool willInteract)
{
    bool found = false;
    resetCount();
    std::vector<Coords>list;
    Template Mat = getTemplate(imgtemplate);
    nb = 0;
    if (op.cvmtfMultipleTemplateZone(Mat, background, list, Z)) {
        nb = list.size();
        return true;
    }
    return templateFound(found, willInteract, DEFAULTDELAY);
}

bool game::fcCompareA(const std::string& goodTemplate, std::string similartemplate)
{
    return fCompareA(goodTemplate, similartemplate, true);
}

bool game::fCompareA(const std::string& goodTemplate, std::string similartemplate, bool willInteract)
{
    bool found = false;
    resetCount();
    Template goodmat = getTemplate(goodTemplate, Color);
    Template smat = getTemplate(similartemplate, Color);
    loopPopUp(goodmat.type);
    if (op.cvmtfCompareTemplate(goodmat, background, smat, C))found = true;
    return templateFound(found, willInteract, DEFAULTDELAY);
}

bool game::fCompareZoneA(const std::string& goodTemplate, std::string similartemplate, Zone Z, bool willInteract)
{
    bool found = false;
    resetCount();
    Template goodmat = getTemplate(goodTemplate, Color);
    Template smat = getTemplate(similartemplate, Color);
    loopPopUp(goodmat.type);
    if (op.cvmtfCompareTemplateZone(goodmat, background, smat, C, Z))found = true;
    return templateFound(found, willInteract, DEFAULTDELAY);
}

bool game::fcCompareMultipleTemplateA(const std::string& goodTemplate, std::vector<std::string> similartemplates)
{
    return fCompareMultipleTemplateA(goodTemplate, similartemplates, true);
}

bool game::fCompareMultipleTemplateA(const std::string& goodTemplate, std::vector<std::string> similartemplates, bool willInteract)
{
    bool found = false;
    resetCount();

    Template goodmat = getTemplate(goodTemplate, Color);
    std::vector<Template>simMats;
    for (std::string smat : similartemplates) {
        Template simMat = getTemplate(goodTemplate, Color);
        simMats.push_back(simMat);
    }

    loopPopUp(goodmat.type);
    if (op.cvmtfCompareMultipleTemplate(goodmat, background, simMats, C))found = true;
    return templateFound(found, willInteract, DEFAULTDELAY);
}

bool game::fCompareMultipleTemplateZoneA(const std::string& goodTemplate, std::vector<std::string> similartemplates, Zone Z, bool willInteract)
{
    bool found = false;
    resetCount();

    Template goodmat = getTemplate(goodTemplate, Color);
    std::vector<Template>simMats;
    for (std::string smat : similartemplates) {
        Template simMat = getTemplate(goodTemplate, Color);
        simMats.push_back(simMat);
    }
    loopPopUp(goodmat.type);
    if (op.cvmtfCompareMultipleTemplateZone(goodmat, background, simMats, C, Z))found = true;
    return templateFound(found, willInteract, DEFAULTDELAY);
}

bool game::fcCompareMultipleTemplateZoneA(const std::string& goodTemplate, std::vector<std::string> similartemplates, Zone Z)
{
    return fCompareMultipleTemplateZoneA(goodTemplate, similartemplates, Z, true);

}

bool game::fMultipleCompareMultipleTemplateA(const std::string& goodTemplate, std::vector<std::string> similartemplates, bool willInteract)
{
    bool found = false;
    resetCount();
    Template goodmat = getTemplate(goodTemplate, Color);
    std::vector<Template>simMats;
    for (std::string smat : similartemplates) {
        Template simMat = getTemplate(goodTemplate, Color);
        simMats.push_back(simMat);
    }
    loopPopUp(goodmat.type);

    if (op.cvmtfMultipleTemplateCompareMultipleTemplate(goodmat, background, simMats, listcoords))found = true;
    return templateFound(found, willInteract, DEFAULTDELAY);
}


bool game::templateFound(bool found, bool willInteract, unsigned int delayMilliseconds)
{
    if (found) {
        rebootCount = 0;
        if (willInteract) {
            adb.touch(C.x, C.y);
        }
        if (delayMilliseconds == DEFAULTDELAY) {
            wait(waitfound);
        }
        else wait(delayMilliseconds);
    }
    else {
        rebootCount++;
        if (delayMilliseconds == DEFAULTDELAY) {
            wait(waitnotfound);
        }
        else wait(delayMilliseconds);
    }
    return found;
}

void game::resetCount() {
    if (rebootCount >= 25) {
        std::cout << "Rebooting\n" << std::endl;
        restartMacro = true;
        throw RebootException();
    }
}


bool game::templateFound(bool found, bool willInteract, Action act, Coords coord, unsigned int delayMilliseconds)
{
    if (found) {
        rebootCount = 0;
        if (willInteract) {
            switch (act) {
            case Action::Click:
                adb.touch(C.x, C.y);
                break;
            case Action::Swipe:
                adb.swipe(C.x, C.y, coord.x, coord.y, 500);
                break;
            }
        }
        if (delayMilliseconds == DEFAULTDELAY) {
            wait(waitfound);
        }
        else wait(delayMilliseconds);
    }
    else {
        rebootCount++;
        if (delayMilliseconds == DEFAULTDELAY) {
            wait(waitnotfound);
        }
        else wait(delayMilliseconds);
    }
    return found;
}

bool game::fcOneTemplateA(std::vector<std::string> allTempl, std::string& foundTempl, unsigned int delayMilliseconds)
{
    return fOneTemplateA(allTempl, foundTempl, delayMilliseconds, true);
}


bool game::fOneTemplateA(std::vector<std::string> allTempl, std::string& foundTempl, unsigned int delayMilliseconds, bool willInteract)
{
    bool found = false;
    resetCount();
    std::vector<Template>allMats;
    for (std::string& mat : allTempl) {
        Template Mat = getTemplate(mat);
        allMats.push_back(Mat);
    }
    Template foundTemplate;
    loopPopUp(Gray);
    if (op.cvmtfOneTemplate(allMats, background, foundTemplate, C)) {
        found = true;
        foundTempl = foundTemplate.id;
    }
    return templateFound(found, willInteract, delayMilliseconds);
}

bool game::fcOneTemplateA(std::vector<std::string> allTempl, unsigned int delayMilliseconds)
{
    return fOneTemplateA(allTempl, delayMilliseconds, true);
}


bool game::fOneTemplateA(std::vector<std::string> allTempl, unsigned int delayMilliseconds, bool willInteract)
{
    bool found = false;
    resetCount();

    std::vector<Template>allMats;
    for (std::string& mat : allTempl) {
        Template Mat = getTemplate(mat);
        allMats.push_back(Mat);
    }
    Template foundTemplate;
    loopPopUp(Gray);

    if (op.cvmtfOneTemplate(allMats, background, C))found = true;
    return templateFound(found, willInteract, delayMilliseconds);
}


bool game::fOneMultipleTemplateA(std::vector<std::vector<std::string>> allTempl, bool willInteract)
{
    bool found = false;
    resetCount();

    std::vector<Template>listMat;
    std::vector<std::vector<Template>>allMats;
    for (int i = 0; i < allTempl.size(); ++i) {
        for (int j = 0; j < allTempl.at(i).size(); ++j) {
            Template Mat = getTemplate(allTempl.at(i).at(j));
            listMat.push_back(Mat);
        }
        allMats.push_back(listMat);
        listMat.clear();
    }

    loopPopUp(Gray);

    if (op.cvmtfOneMultipleTemplate(allMats, background, listcoords))found = true;
    return templateFound(found, willInteract, DEFAULTDELAY);
}

bool game::fSwipeA(std::string imgtemplate, Coords Cresult, bool willInteract)
{
    bool found = false;
    resetCount();
    Template Mat = getTemplate(imgtemplate);
    loopPopUp(Gray);

    if (op.cvmtfTemplate(Mat, background, C))found = true;
    return templateFound(found, willInteract, Swipe, Cresult);
}

bool game::fSwipeA(std::string imgtemplate, poswipe endx, poswipe endy, bool willInteract)
{
    bool found = false;
    resetCount();
    Coords Cend;
    Template Mat = getTemplate(imgtemplate);

    loopPopUp(Gray);
    if (op.cvmtfTemplate(Mat, background, C)) {
        found = true;
        switch (endx) {
        case samex:
            Cend.x = C.x;
            break;
        case rightx:
            Cend.x = dimX;
            break;
        case leftx:
            Cend.x = 0;
            break;
        default:
            Cend.x = 0;
            break;
        }
        switch (endy) {
        case samey:
            Cend.y = C.y;
            break;
        case upy:
            Cend.y = 0;
            break;
        case downy:
            Cend.y = dimY;
            break;
        default:
            Cend.y = 0;
            break;
        }
    }
    return templateFound(found, willInteract, Swipe, Cend);
}

bool game::fcZoneA(const std::string& imgtemplate, Zone Z) {
    return fZoneA(imgtemplate, Z, true);
}

bool game::fZoneA(const std::string& imgtemplate, Zone Z, bool willInteract) {
    bool found = false;
    resetCount();
    Template Mat = getTemplate(imgtemplate);

    loopPopUp(Gray);

    if (op.cvmtfZone(Mat, background, C, Z))found = true;
    return templateFound(found, willInteract, DEFAULTDELAY);
}

bool game::fMultipleDigitsA(int nb, std::vector<std::string>figures, Zone Z) {
    std::string imagetofind;
    switch (nb) {
    case 0:
        imagetofind = figures.at(0);
        break;
    case 1:
        imagetofind = figures.at(1);
        break;
    case 2:
        imagetofind = figures.at(2);
        break;
    case 3:
        imagetofind = figures.at(3);
        break;
    case 4:
        imagetofind = figures.at(4);
        break;
    case 5:
        imagetofind = figures.at(5);
        break;
    case 6:
        imagetofind = figures.at(6);
        break;
    case 7:
        imagetofind = figures.at(7);
        break;
    case 8:
        imagetofind = figures.at(8);
        break;
    case 9:
        imagetofind = figures.at(9);
        break;
    }
    Template Tdigit = getTemplate(imagetofind);
    Template Tbackg(backg, Color);
    std::vector<Template>Tdigits;
    for (std::string dig : figures) {
        Template t = getTemplate(dig, Color);
        Tdigits.push_back(t);
    }
    return op.cvmtfMultipleTemplateCompareMultipleTemplateZone(Tdigit, Tbackg, Tdigits, listcoords, Z);
}

Number game::fNumberIntegerA(std::vector<std::string>figures, std::vector<Unit>Units, Zone Z) {
    adb.screenshot();
    Number Ntemp;
    Digit Dtemp;
    for (int i = 0; i < 10; ++i) {
        listcoords.clear();
        if (fMultipleDigitsA(i, figures, Z)) {
            for (int j = 0; j < listcoords.size(); ++j) {
                Dtemp.Cnb = listcoords.at(j);
                Dtemp.nb = i;
                Ntemp.digits.push_back(Dtemp);
            }
        }
    }
    std::vector<std::string>allsameImages;
    for (std::string image : figures) {
        allsameImages.push_back(image);
    }
    for (Unit image : Units) {
        allsameImages.push_back(image.nameunit);
    }
    orderDigits(Ntemp.digits);
    for (int l = 0; l < Ntemp.digits.size(); ++l) {
        Ntemp.nb += Ntemp.digits.at(l).nb * pow(10, Ntemp.digits.size() - l - 1);
    }
    std::cout << Ntemp.nb << std::endl;
    for (Unit u : Units) {
        switch (u.Ord) {

        case Orders::noOrd:
            break;
        case Orders::K:
            if (fCompareMultipleTemplateZoneA(u.nameunit, allsameImages, Z)) {
                Ntemp.K = true;
                Ntemp.nb *= pow(10, 3);
                std::cout << Ntemp.nb << std::endl;
                return Ntemp;
            }
            break;
        case Orders::M:
            if (fCompareMultipleTemplateZoneA(u.nameunit, allsameImages, Z)) {
                Ntemp.M = true;
                Ntemp.nb *= pow(10, 6);
                std::cout << Ntemp.nb << std::endl;
                return Ntemp;
            }
            break;
        case Orders::B:
            if (fCompareMultipleTemplateZoneA(u.nameunit, allsameImages, Z)) {
                Ntemp.B = true;
                Ntemp.nb *= pow(10, 9);
                std::cout << Ntemp.nb << std::endl;
                return Ntemp;
            }
            break;
        case Orders::T:
            if (fCompareMultipleTemplateZoneA(u.nameunit, allsameImages, Z)) {
                Ntemp.T = true;
                Ntemp.nb *= pow(10, 12);
                std::cout << Ntemp.nb << std::endl;
                return Ntemp;
            }
            break;
        }

    }
    std::cout << Ntemp.nb << std::endl;
    return Ntemp;
}

Number game::fNumberIntegerA(std::vector<std::string>digits, Zone Z) {
    adb.screenshot();
    Number Ntemp;
    Digit Dtemp;
    for (int i = 0; i < 10; ++i) {
        listcoords.clear();
        if (fMultipleDigitsA(i, digits, Z)) {
            for (int j = 0; j < listcoords.size(); ++j) {
                Dtemp.Cnb = listcoords.at(j);
                Dtemp.nb = i;
                Ntemp.digits.push_back(Dtemp);
            }
        }
    }
    std::vector<std::string>allsameImages;
    for (std::string image : digits) {
        allsameImages.push_back(image);
    }
    orderDigits(Ntemp.digits);
    for (int l = 0; l < Ntemp.digits.size(); ++l) {
        Ntemp.nb += Ntemp.digits.at(l).nb * pow(10, Ntemp.digits.size() - l - 1);
    }
    std::cout << Ntemp.nb << std::endl;
    return Ntemp;
}

Number game::fNumberDecimalA(std::vector<std::string>digits, std::vector<Unit>Units, std::string dot, Zone Z) {
    adb.screenshot();
    Number Ntemp;
    Digit Dtemp;
    for (int i = 0; i < 10; ++i) {
        listcoords.clear();
        if (fMultipleDigitsA(i, digits, Z)) {
            for (int j = 0; j < listcoords.size(); ++j) {
                Dtemp.Cnb = listcoords.at(j);
                Dtemp.nb = i;
                Ntemp.digits.push_back(Dtemp);
            }
        }
    }

    std::vector<std::string>allsameImages;
    for (std::string image : digits) {
        allsameImages.push_back(image);
    }
    for (Unit image : Units) {
        allsameImages.push_back(image.nameunit);
    }
    Coords Cdot;
    if (fCompareMultipleTemplateZoneA(dot, allsameImages, Z)) {
        Ntemp.decimal = true;
        Cdot = C;
        std::cout << "DECIMAL NUMBER" << std::endl;
    }
    orderDigits(Ntemp.digits);
    for (int l = 0; l < Ntemp.digits.size(); ++l) {
        Ntemp.nb += Ntemp.digits.at(l).nb * pow(10, Ntemp.digits.size() - l - 1);
    }
    std::cout << Ntemp.nb << std::endl;
    if (Ntemp.decimal == true) {
        for (int i = 0; i < Ntemp.digits.size(); i++) {
            if (Cdot.x < Ntemp.digits.at(i).Cnb.x) {
                Ntemp.dotposition = i;
                Ntemp.nb /= pow(10, Ntemp.digits.size() - i);
                std::cout << "Dot position:" << i << std::endl;
                break;
            }
        }
    }
    std::cout << Ntemp.nb << std::endl;
    for (Unit u : Units) {
        switch (u.Ord) {

        case Orders::noOrd:

            break;
        case Orders::K:
            if (fCompareMultipleTemplateZoneA(u.nameunit, allsameImages, Z)) {
                Ntemp.K = true;
                Ntemp.nb *= pow(10, 3);
                std::cout << Ntemp.nb << std::endl;
                return Ntemp;
            }
            break;
        case Orders::M:
            if (fCompareMultipleTemplateZoneA(u.nameunit, allsameImages, Z)) {
                Ntemp.M = true;
                Ntemp.nb *= pow(10, 6);
                std::cout << Ntemp.nb << std::endl;
                return Ntemp;
            }
            break;
        case Orders::B:
            if (fCompareMultipleTemplateZoneA(u.nameunit, allsameImages, Z)) {
                Ntemp.B = true;
                Ntemp.nb *= pow(10, 9);
                std::cout << Ntemp.nb << std::endl;
                return Ntemp;
            }
            break;
        case Orders::T:
            if (fCompareMultipleTemplateZoneA(u.nameunit, allsameImages, Z)) {
                Ntemp.T = true;
                Ntemp.nb *= pow(10, 12);
                std::cout << Ntemp.nb << std::endl;
                return Ntemp;
            }
            break;
        }
    }
    std::cout << Ntemp.nb << std::endl;
    return Ntemp;
}

Number game::fNumberDecimalA(std::vector<std::string>digits, std::string dot, Zone Z) {
    adb.screenshot();
    Number Ntemp;
    Digit Dtemp;
    for (int i = 0; i < 10; ++i) {
        listcoords.clear();
        if (fMultipleDigitsA(i, digits, Z)) {
            for (int j = 0; j < listcoords.size(); ++j) {
                Dtemp.Cnb = listcoords.at(j);
                Dtemp.nb = i;
                Ntemp.digits.push_back(Dtemp);
            }
        }
    }

    std::vector<std::string>allsameImages;
    for (std::string image : digits) {
        allsameImages.push_back(image);
    }
    Coords Cdot;
    if (fCompareMultipleTemplateZoneA(dot, allsameImages, Z)) {
        Ntemp.decimal = true;
        Cdot = C;
        std::cout << "DECIMAL NUMBER" << std::endl;
    }
    orderDigits(Ntemp.digits);
    for (int l = 0; l < Ntemp.digits.size(); ++l) {
        Ntemp.nb += Ntemp.digits.at(l).nb * pow(10, Ntemp.digits.size() - l - 1);
    }
    std::cout << Ntemp.nb << std::endl;
    if (Ntemp.decimal == true) {
        for (int i = 0; i < Ntemp.digits.size(); i++) {
            if (Cdot.x < Ntemp.digits.at(i).Cnb.x) {
                Ntemp.dotposition = i;
                Ntemp.nb /= pow(10, Ntemp.digits.size() - i);
                std::cout << "Dot position:" << i << std::endl;
                break;
            }
        }
    }
    std::cout << Ntemp.nb << std::endl;
    return Ntemp;
}








