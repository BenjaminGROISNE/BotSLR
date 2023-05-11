#ifndef SLRD_H
#define SLRD_H

#include <iostream>
#include "fopencv.h"
#include "fadb.h"
#include <thread>
#include <chrono>
#include <atomic>
using namespace std;
namespace fs = filesystem;
class SLRD
{
public:
	SLRD(int dimX,int dimY);
	void startSLRD();
	//Activités
	void HellSlaughter();
	void goHome();
	void doTheater();
	void doIcefire();
	void doMail();
	void getBag();
	void doFriends();
	void doTasks();
	void doShop();
	void doXiao();
	//Outils
	bool findclick(string imgtemplate, string background);
	bool findclick(string imgtemplate);
	bool findclickEvents(string imgtemplate);
	bool find(string imgtemplate);
	bool findEvents(string imgtemplate);
	void swipeleftmenu();
	void swipemiddlemenu();
	void swiperightmenu();
	void CurrentFocus();
	void macroGame();
	void macroLoop();
	void checkExitCondition();
	void recursiveSearch(const fs::path& dirPath, vector<string>& Focus);
	int getCx()const;
	int getCy()const;
	int getEventx()const;
	void setOrder();
	int getEventy()const;
	int getRebootCount();
	void setRebootCount(int nb);
	int rebootCount;
	int Order[20];
	std::atomic<bool> restartMacro;
	std::atomic<bool> waitMacro;

	bool FRIENDS,MAIL,HELL,ICEFIRE,DISPATCH,TOURNAMENT,BAG,HERB,RACE,THEATER,MYSTERY,PAGODA,XIAOWU,ENERGY,TASKS,ABYSS,TYRANT,ELEMENT,TREANT;


	//General
	string General = "./imgObjects/";
	string back = General + "back.png";
	string battle = General + "battle.png";
	string cancel = General + "cancel.png";
	string confirm = General + "confirm.png";
	string xw = General + "xw.png";
	string sweep = General + "sweep.png";
	string claimall = General + "claimall.png";
	string Case = General + "Case.png";
	string BP = General + "BP.png";
	string buy = "buy.png";
	string Casecheck = General + "Casecheck.png";
	string changelineup = General + "changelineup.png";
	string confirmpurchase = General + "confirmpurchase.png";
	string congrats = General + "congrats.png";
	string free = General + "free.png";
	string home = General + "home.png";
	string exchange = General + "exchange.png";
	string max = General + "max.png";
	string plus10 = General + "plus10.png";
	string replace = General + "replace.png";
	string points = General + "points.png";
	string arrow = General + "arrow.png";
	string share = General + "share.png";
	string completeall = General + "completeall.png";
	string crossad = General + "crossad.png";
	string timevoucher = General + "timevoucher.png";
	string start = General + "start.png";
	string autoskills = General + "autoskills.png";
	string speed2 = General + "speed2.png";
	string help = General + "help.png";
	string skip = General + "skip.png";
	string adwatched = General + "adwatched.png";
	string waitconnexion = General + "waitconnexion.png";
	
	//Grandmaster
	string Grandmaster = General + "Grandmaster/";
	string autogm = Grandmaster + "autogm.png";
	string grandmaster = Grandmaster + "grandmaster.png";
		//Pot
	string Pot = General + "Pot/";
	string confirmpot = Pot+ "confirmpot.png";
	string deliver = Pot + "deliver.png";
	string goldyrefresh = Pot + "goldyrefresh.png";
	string herbreward = Pot + "herbreward.png";
	string potchoose = Pot + "potchoose.png";
	string potnotice = Pot + "potnotice.png";
	string shipnow = Pot + "shipnow.png";
	string twopot = Pot + "twopot.png";
		//Race 
	string Race = General + "Race/";
	string claimrace = Race + "claimrace.png";
	string racechoose = Race + "racechoose.png";

	//Energy 
	string Energy = General + "Energy/";
	string breakthrough = Energy+"breakthrough.png";
	string grandmasterchoose = Energy + "grandmasterchoose.png";
	string limitbuyenergy = Energy + "limitbuyenergy.png";
	string oneclick = Energy + "oneclick.png";
	string redplus3 = Energy + "redplus3.png";
	string redplus4 = Energy + "redplus4.png";
	string repereEnergy = Energy + "repereEnergy.png";


	//Sect
	//Bag
	string Bag = General + "Sect/Bag/";
	string diamondbag = Bag + "diamondbag.png";
	string luckybagicon = Bag + "luckybagicon.png";
	string confirmbag = Bag + "confirmbag.png";

	//Dispatch
	string Dispatch = General + "Sect/Dispatch/";
	string claimdispatch = Dispatch + "claimdispatch.png";
	string deploy = Dispatch + "deploy.png";
	string dispatch = Dispatch + "dispatch.png";

	//Tournament
	string Tournament = General + "Sect/Tournament/";
	string attacktournament = Tournament + "attacktournament.png";
	string sweepagain = Tournament + "sweepagain.png";
	string sweeptournament = Tournament + "sweeptournament.png";
	string tournament = Tournament + "tournament.png";
	//Tyrant
	string Tyrant = General + "Sect/Tyrant/";
	//Icefire 
	string Icefire = General + "Icefire/";
	string apricot = Icefire+"apricot.png";
	string aromatic = Icefire + "aromatic.png";
	string endicefire = Icefire + "endicefire.png";
	string ginseng = Icefire + "ginseng.png";
	string octagonal = Icefire + "octagonal.png";
	string oneclickroll = Icefire + "oneclickroll.png";
	string orchid = Icefire + "orchid.png";
	string silk = Icefire + "silk.png";
	string sunflower = Icefire + "sunflower.png";
	string velvet = Icefire + "velvet.png";
	string manageherbs = Icefire + "manageherbs.png";

	//Treant
	string Treant = General + "Treant/";
	string attacktreant = Treant + "attacktreant.png";
	string iconelement = Treant + "iconelement.png";
	string icontreant = Treant + "icontreant.png";
	string sweeptreant = Treant + "sweeptreant.png";
	//Launch
	string PSLR = "com.soullandrl.gp";
	string SLR = "com.soullandrl.gp/cc.qidea.jsfb.SplashActivity";
	string Launch=General+"Launch/";
	string croixmenu = Launch+"croixmenu.png";
	string login = Launch + "login.png";
	string server = Launch + "server.png";
	
	//Mystery
	string Mystery = General + "Mystery/";
	string mysteryid = Mystery + "mysteryid.png";
	string watchadmystery = Mystery + "watchadmystery.png";

	//Freebies
	string Freebies = General + "Freebies/";
	string claimfreebies =Freebies+ "claimfreebies.png";
	string dailyfreebies = Freebies + "dailyfreebies.png";
	string freebiesclaimed = Freebies + "freebiesclaimed.png";
	string monthlycard = Freebies + "monthlycard.png";
	string normalmode = Freebies + "normalmode.png";
	string renew = Freebies + "renew.png";
	string claimcard = Freebies + "claimcard.png";
	string sausagenotbought = Freebies + "sausagenotbought.png";
	string staminapurchase = Freebies + "staminapurchase.png";
	string sausagedone = Freebies + "sausagedone.png";
	string normalmodedone = Freebies + "normalmodedone.png";
	
	//Theater
	string Theater = General + "Theater/";
	string theaterchoose = Theater+ "theaterchoose.png";
	string theaterid = Theater + "theaterid.png";
	string watchtheater = Theater + "watchtheater.png";
	
	//Missions 
	string Missions = General + "Missions/";
	string collectmissed = Missions + "collectmissed.png";
	string daily = Missions + "daily.png";
	string weekly = Missions + "weekly.png";

	//menu
	string Menu = General+"Menu/";
	string academy = Menu + "academy.png";
	string arena = Menu + "arena.png";
	string beast = Menu + "beast.png";
	string elite = Menu + "elite.png";
	string friends = Menu + "friends.png";
	string gm = Menu + "gm.png";
	string hall = Menu + "hall.png";
	string hell = Menu + "hell.png";
	string icefire = Menu + "icefire.png";
	string iconad = Menu + "iconad.png";
	string iconadless = Menu + "iconadless.png";
	string invasion = Menu + "invasion.png";
	string mail = Menu + "mail.png";
	string metal = Menu + "metal.png";
	string pot = Menu + "pot.png";
	string ranking = Menu + "ranking.png";
	string rollmenu = Menu + "rollmenu.png";
	string sea = Menu + "sea.png";
	string sect = Menu + "sect.png";
	string shop = Menu + "shop.png";
	string slaughter = Menu + "slaughter.png";
	string sotto = Menu + "sotto.png";
	string soul = Menu + "soul.png";
	string soulforce = Menu + "soulforce.png";
	string story = Menu + "story.png";
	string treant = Menu + "treant.png";
	string trial = Menu + "trial.png";
	string mysterychest = Menu + "mysterychest.png";
	string pass = Menu + "pass.png";
	string secretshop = Menu + "secretshop.png";
	string dailyevents = Menu + "dailyevents.png";
	string monthly = Menu + "monthly.png";
	string store = Menu + "store.png";
	string tasks = Menu + "tasks.png";
	string xiaoassistant = Menu + "xiaoassistant.png";
	string rollmenuopen = Menu + "rollmenuopen.png";
	string bag = Menu + "bag.png";
	string divinetool = Menu + "divinetool.png";
	string hiddenweapon = Menu + "hiddenweapon.png";
	string soulmaster = Menu + "soulmaster.png";
	string spiritsoul = Menu + "spiritsoul.png";
	string whales = Menu + "whales.png";

	//XiaoWu
	string XiaoWu = General + "XiaoWu/";
	string confirmxiao =XiaoWu+ "confirmxiao.png";
	string dailies= XiaoWu + "dailies.png";
	string gameplay = XiaoWu + "gameplay.png";
	string gameplaynotice = XiaoWu + "gameplaynotice.png";
	string ondailies = XiaoWu + "ondailies.png";
	string ongameplay = XiaoWu + "ongameplay.png";
	string onrankingxiao = XiaoWu + "onrankingxiao.png";
	string onsectxiao = XiaoWu + "onsectxiao.png";
	string onshopxiao = XiaoWu + "onshopxiao.png";
	string rankingxiao = XiaoWu + "rankingxiao.png";
	string sectxiao = XiaoWu + "sectxiao.png";
	string shopxiao = XiaoWu + "shopxiao.png";

	//Pagoda
	string Pagoda = General + "Pagoda/";
	string battlepagoda = Pagoda + "battlepagoda.png";
	string createpagoda = Pagoda + "createpagoda.png";
	string fullpagoda = Pagoda + "fullpagoda.png";
	string pagodachoice = Pagoda + "pagodachoice.png";
	string pagodalevels = Pagoda + "pagodalevels.png";
	string pagodapin = Pagoda + "pagodapin.png";
	string refreshpagoda20 = Pagoda + "refreshpagoda20.png";
	string victorypagoda = Pagoda + "victorypagoda.png";
	string clashpagoda = Pagoda + "clashpagoda.png";
	string busy = Pagoda + "busy.png";
	string gonow = Pagoda + "gonow.png";

	//Hell
	string Hell = General+"Hell/";
	string bphell =Hell+ "bphell.png";
	string confirmhell = Hell + "confirmhell.png";
	string endclickhell = Hell + "endclickhell.png";
	string endofchallengehell= Hell + "endofchallengehell.png";
	string oneclickhell = Hell + "oneclickhell.png";
	string shophell = Hell + "shophell.png";
	string shopiconhell = Hell + "shopiconhell.png";
	string teamfillhell = Hell + "teamfillhell.png";
	string oneclicknotavailable = Hell + "oneclicknotavailable.png";
	string advance = Hell + "advance.png";
	
	//Silverweiss
	string Silverweiss = General + "Silverweiss/";
	string changesilverweiss = Silverweiss+"changesilverweiss.png";
	string chooseenemy = Silverweiss + "chooseenemy.png";
	string formparty = Silverweiss + "formparty.png";
	string registerapplications = Silverweiss + "registerapplications.png";
	string registerpartysilverweiss = Silverweiss + "registerpartysilverweiss.png";
	string silverweisschoose = Silverweiss + "silverweisschoose.png";
	string startbattlesilverweiss = Silverweiss + "startbattlesilverweiss.png";
	string victorysilverweiss = "victorysilverweiss.png";

	//Mail
	string Mail = General + "Mail/";
	string newmail = Mail + "newmail.png";

	//Friend 
	string Friends = General + "Friend/";
	string sendall = Friends + "sendall.png";
	string claimallfriends = Friends + "claimallfriends.png";

	//Abyss
	string Abyss = General + "Abyss/";
	string abysschoose = Abyss+"abysschoose.png";
	string abyssiconshop = Abyss + "abyssiconshop.png";
	string changeabyss = Abyss + "changeabyss.png";
	string continueabyss = Abyss + "continueabyss.png";
	string DefeatAbyss = Abyss + "DefeatAbyss.png";
	string finalchestabyss = Abyss + "finalchestabyss.png";
	string rewardchestabyss = Abyss + "rewardchestabyss.png";
	string starsabyss = Abyss + "starsabyss.png";
	string starabyss = Abyss + "startabyss.png";
	string team1 = Abyss + "team1.png";
	string team2 = Abyss + "team2.png";
	string team3 = Abyss + "team3.png";
	string tokenshop = Abyss + "tokenshop.png";
	string victoryabyss = Abyss + "victoryabyss.png";
	
	//Shop
	string Shop = General + "Shop";
	string gold = Shop + "gold.png";
	string shopdiamond = Shop + "shopdiamond.png";
	string shoprefresh = Shop + "shoprefresh.png";
	string sold = Shop + "sold.png";

	//Whales
	string Whales = General + "Whales/";
	string autowhale =Whales+ "autowhale.png";
	string killrewardwhale = Whales + "killrewardwhale.png";
	string secthonorwhale = Whales + "secthonorwhale.png";
	string solohonorwhale = Whales + "solohonorwhale.png";
	string whaleid = Whales + "whaleid.png";

	
	vector<string>Focus;
	string backg = "./img/screenshot.png";
	string imgevents = "./img/screenshotEvents.png"
		;
private:
	string currentfocus;
	int cx, cy,dimX,dimY,eventx,eventy;
	fopencv op;
	fadb adb;
};
#endif
