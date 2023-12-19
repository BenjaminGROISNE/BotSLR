#ifndef FORB_H
#define FORB_H
#include "fopencv.h"

class forb {
public:
	const int MAX_FEATURES = 500;
	const float GOOD_MATCH_PERCENT = 0.05;
	forb();
	void initOrb();
	void alignImages(cv::Mat& im1, cv::Mat& im2, cv::Mat& im1Reg, cv::Mat& h);
	fopencv op;
	cv::Ptr<cv::ORB> detector;


	//templates
	std::string templates = "./assets/templates/";
	//Abyss
	std::string Abyss = templates + "Abyss/";
	std::string abyss = Abyss + "abyss.png";
	std::string abysschange = Abyss + "abysschange.png";
	std::string abyssdefeat = Abyss + "abyssdefeat.png";
	std::string abyssformation = Abyss + "abyssformation.png";
	std::string abysssquad = Abyss + "abysssquad.png";
	std::string abysssquadarrow = Abyss + "abysssquadarrow.png";
	std::string abyssstar = Abyss + "abyssstar.png";
	std::string abyssteamdetails = Abyss + "abyssteamdetails.png";
	std::string metalshopicon = Abyss + "metalshopicon.png";
	std::string playerdetails = Abyss + "playerdetails.png";
	std::string startexploring = Abyss + "startexploring.png";

	//Battlepass
	std::string Battlepass = templates + "Battlepass/";
	std::string claimbattlepass = Battlepass + "claimbattlepass.png";
	std::string cmissionsbattlepass = Battlepass + "cmissionsbattlepass.png";
	std::string crewardbattlepass = Battlepass + "crewardbattlepass.png";
	std::string ncmissionsbattlepass = Battlepass + "ncmissionsbattlepass.png";
	std::string ncrewardbattlepass = Battlepass + "ncrewardbattlepass.png";

	//Common
	std::string Common = templates + "Common/";
	std::string adjustlineup = Common + "adjustlineup.png";
	std::string autofight = Common + "autofight.png";
	std::string back = Common + "back.png";
	std::string battle = Common + "battle.png";
	std::string confirmendbattle = Common + "confirmendbattle.png";
	std::string congratulations = Common + "congratulations.png";
	std::string cross = Common + "cross.png";
	std::string home = Common + "home.png";
	std::string oneclicksettle = Common + "oneclicksettle.png";
	std::string skipbattle = Common + "skipbattle.png";
	std::string victory = Common + "victory.png";
	std::string busy = Common + "busy.png";
	std::string busy2 = Common + "busy2.png";
	std::string reconnect = Common + "reconnect.png";
	std::string disconnected = Common + "disconnected.png";
	std::string defeat = Common + "defeat.png";

	//Dailies
	std::string Dailies = templates + "Dailies/";
	std::string buydailies = Dailies + "buydailies.png";
	std::string cactivewheel = Dailies + "cactivewheel.png";
	std::string cdailyfreebies = Dailies + "cdailyfreebies.png";
	std::string cdailypacks = Dailies + "cdailypacks.png";
	std::string claimedfreebies = Dailies + "claimedfreebies.png";
	std::string claimedwheelpack = Dailies + "claimedwheelpack.png";
	std::string claimfreebies = Dailies + "claimfreebies.png";
	std::string claimsausages = Dailies + "claimsausages.png";
	std::string claimwheelpack = Dailies + "claimwheelpack.png";
	std::string cnormalmode = Dailies + "cnormalmode.png";
	std::string cstaminapurchase = Dailies + "cstaminapurchase.png";
	std::string dailypackwheel = Dailies + "dailypackwheel.png";
	std::string drawwheel = Dailies + "drawwheel.png";
	std::string godailies = Dailies + "godailies.png";
	std::string ncactivewheel = Dailies + "ncactivewheel.png";
	std::string ncdailyfreebies = Dailies + "ncdailyfreebies.png";
	std::string ncdailypacks = Dailies + "ncdailypacks.png";
	std::string ncnormalmode = Dailies + "ncnormalmode.png";
	std::string ncstaminapurchase = Dailies + "ncstaminapurchase.png";
	std::string notachieved = Dailies + "notachieved.png";
	std::string randomluckybag = Dailies + "randomluckybag.png";
	std::string rewardwheel = Dailies + "rewardwheel.png";
	std::string noticketswheel = Dailies + "noticketswheel.png";
	std::string noluckydrawleft = Dailies + "noluckydrawleft.png";


	//Energy
	std::string Energy = templates + "Energy/";
	std::string buyenergy = Energy + "buyenergy.png";
	std::string goenergy = Energy + "goenergy.png";

	//Forest
	std::string Forest = templates + "Forest/";
	std::string assistallforest = Forest + "assistallforest.png";
	std::string blacktiger = Forest + "blacktiger.png";
	std::string bluetiger = Forest + "bluetiger.png";
	std::string claimallforest = Forest + "claimallforest.png";
	std::string confirmextend = Forest + "confirmextend.png";
	std::string endhunt = Forest + "endhunt.png";
	std::string extendhunt = Forest + "extendhunt.png";
	std::string firewood = Forest + "firewood.png";
	std::string forest = Forest + "forest.png";
	std::string highnest = Forest + "highnest.png";
	std::string inviteassist = Forest + "inviteassist.png";
	std::string invitecaseempty = Forest + "invitecaseempty.png";
	std::string invitecasefull = Forest + "invitecasefull.png";
	std::string invitedforest = Forest + "invitedforest.png";
	std::string invitetoassistforest = Forest + "invitetoassistforest.png";
	std::string nest1 = Forest + "nest1.png";
	std::string nest2 = Forest + "nest2.png";
	std::string oneclickhunt = Forest + "oneclickhunt.png";
	std::string pinksnake = Forest + "pinksnake.png";
	std::string redscorpion = Forest + "redscorpion.png";
	std::string stickmonster = Forest + "stickmonster.png";

	//Friends
	std::string Friends = templates + "Friends/";
	std::string claimallfriend = Friends + "claimallfriend.png";
	std::string sendall = Friends + "sendall.png";

	//Grandmaster
	std::string Grandmaster = templates + "Grandmaster/";
	std::string arrowgm = Grandmaster + "arrowgm.png";
	std::string autograndmaster = Grandmaster + "autograndmaster.png";
	std::string billiongm = Grandmaster + "billiongm.png";
	std::string billionpurplegm = Grandmaster + "billionpurplegm.png";
	std::string bpenemygm = Grandmaster + "bpenemygm.png";
	std::string buygrandmaster = Grandmaster + "buygrandmaster.png";
	std::string changegrandmaster = Grandmaster + "changegrandmaster.png";
	std::string chestgrandmaster = Grandmaster + "chestgrandmaster.png";
	std::string claimallgrandmaster = Grandmaster + "claimallgrandmaster.png";
	std::string defeatgrandmaster = Grandmaster + "defeatgrandmaster.png";
	std::string defendingbp = Grandmaster + "defendingbp.png";
	std::string eightgm = Grandmaster + "eightgm.png";
	std::string eightpurplegm = Grandmaster + "eightpurplegm.png";
	std::string eightredgm = Grandmaster + "eightredgm.png";
	std::string enemypointsgm = Grandmaster + "enemypointsgm.png";
	std::string fivegm = Grandmaster + "fivegm.png";
	std::string fivepurplegm = Grandmaster + "fivepurplegm.png";
	std::string fiveredgm = Grandmaster + "fiveredgm.png";
	std::string fourgm = Grandmaster + "fourgm.png";
	std::string fourpurplegm = Grandmaster + "fourpurplegm.png";
	std::string fourredgm = Grandmaster + "fourredgm.png";
	std::string grandmaster = Grandmaster + "grandmaster.png";
	std::string milliongm = Grandmaster + "milliongm.png";
	std::string millionpurplegm = Grandmaster + "millionpurplegm.png";
	std::string ninegm = Grandmaster + "ninegm.png";
	std::string ninepurplegm = Grandmaster + "ninepurplegm.png";
	std::string nineredgm = Grandmaster + "nineredgm.png";
	std::string onegm = Grandmaster + "onegm.png";
	std::string onepurplegm = Grandmaster + "onepurplegm.png";
	std::string oneredgm = Grandmaster + "oneredgm.png";
	std::string pointsgrandmaster = Grandmaster + "pointsgrandmaster.png";
	std::string redbilliongm = Grandmaster + "redbilliongm.png";
	std::string sevengm = Grandmaster + "sevengm.png";
	std::string sevenpurplegm = Grandmaster + "sevenpurplegm.png";
	std::string sevenredgm = Grandmaster + "sevenredgm.png";
	std::string sixgm = Grandmaster + "sixgm.png";
	std::string sixpurplegm = Grandmaster + "sixpurplegm.png";
	std::string sixredgm = Grandmaster + "sixredgm.png";
	std::string sweepgrandmaster = Grandmaster + "sweepgrandmaster.png";
	std::string thousandgm = Grandmaster + "thousandgm.png";
	std::string threegm = Grandmaster + "threegm.png";
	std::string threepurplegm = Grandmaster + "threepurplegm.png";
	std::string threeredgm = Grandmaster + "threeredgm.png";
	std::string twogm = Grandmaster + "twogm.png";
	std::string twopurplegm = Grandmaster + "twopurplegm.png";
	std::string tworedgm = Grandmaster + "tworedgm.png";
	std::string victorygrandmaster = Grandmaster + "victorygrandmaster.png";
	std::string worshipgrandmaster = Grandmaster + "worshipgrandmaster.png";
	std::string zerogm = Grandmaster + "zerogm.png";
	std::string zeropurplegm = Grandmaster + "zeropurplegm.png";
	std::string zeroredgm = Grandmaster + "zeroredgm.png";
	std::string defeatgrandmasterwe = Grandmaster + "defeatgrandmasterwe.png";


	//Hell
	std::string Hell = templates + "Hell/";
	std::string advancehell = Hell + "advancehell.png";
	std::string claimhell = Hell + "claimhell.png";
	std::string confirmoneclickchallenge = Hell + "confirmoneclickchallenge.png";
	std::string cooldown = Hell + "cooldown.png";
	std::string cooldowntext = Hell + "cooldowntext.png";
	std::string endofchallenge = Hell + "endofchallenge.png";
	std::string fightinghell = Hell + "fightinghell.png";
	std::string hell = Hell + "hell.png";
	std::string noundefeated = Hell + "noundefeated.png";
	std::string oneclickchallenge = Hell + "oneclickchallenge.png";
	std::string promotionsuccessful = Hell + "promotionsuccessful.png";
	std::string quickchallenge = Hell + "quickchallenge.png";
	std::string soulbonechesthell = Hell + "soulbonechesthell.png";

	std::string abyssmenu = templates + "abyssmenu.png";
};
#endif