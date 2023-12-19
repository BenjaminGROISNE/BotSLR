#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <array>
#include <memory>
#include <ctime>
#include <filesystem>
#include <atomic>
#include <chrono>
#include <thread>
#include <stdexcept>
#include <cstdio>
#include <functional>
#include <algorithm>
#include "fopencv.h"
#include "fadb.h"
#include "sysCommands.h"
#include "fsfml.h"
#include "macroConfig.h"
#include "paths.h"

enum poswipe { samex, samey, rightx, leftx, upy, downy };
enum pos { N, S, W, E, NW, NE, SW, SE };
enum state { disconnect, block, wait };
enum Orders { noOrd, K, M, B, T };
enum day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
enum Action { Click, Swipe };

struct RebootException : public std::exception {};


struct Digit {
	int nb;
	Coords Cnb;
	Digit() {
		nb = 0;
		Cnb.x = Cnb.y = 0;
	}
};

struct Unit {
	std::string nameunit;
	Orders Ord;
	Unit() {
		nameunit.clear();
		Ord = Orders::noOrd;
	}
	Unit(std::string name, Orders ord) {
		nameunit = name;
		Ord = ord;
	}
};

struct Number {
	Unit U;
	long double nb;
	bool integer, decimal;
	bool T, B, M, K;
	std::vector<Digit> digits;
	int dotposition;
	Number() {
		nb = dotposition = 0;
		T = B = M = K = integer = decimal = false;
		digits.clear();
	}
};

struct CustomNumber {
	Number number;
	int pos;
	CustomNumber() {
		number.digits.clear();
		pos = 0;
	}
};

struct Popup {
	Template T;
	state cond;
	Popup() {
		T = Template();
		cond = state::wait;
	}
	Popup(Template T) {
		this->T = T;
		cond = state::wait;
	}
	Popup(std::string pop) {
		T = Template(pop, Gray);
		cond = state::wait;
	}
	Popup(std::string pop, state c) {
		T = Template(pop, typeMat::Gray);
		cond = c;
	}
	Popup(std::string pop, state c, typeMat t) {
		T = Template(pop, t);
		cond = c;
	}
};

class game
{
public:
	game();
	void startGame();
	void launchGame();
	//Activités
	void doHell();
	void goHome();
	bool goHomeFirstBoot();
	void doTheater();
	void doIcefire();
	void doMail();
	void doBag();
	void doFriends();
	void doTasks();
	void doXiao();
	void doHerb();
	void doRace();
	void doMystery();
	void doDailies();
	void doHunting();
	void doCheckin();
	void doPeak();
	void doSecretShop();
	void doSectwar();
	void doSilverweiss();
	void doSotto();
	void doTree();
	void doWhales();
	void doTrial();
	void doTreant();
	void doElement();
	void doTournament();
	void doTyrant();
	void doAbyss();
	void doForest();
	void doGrandmaster();
	void doZhuqing();
	void doBattlepass();
	void doSoulascension();
	void doRanking();

	//Outils


	bool fcA(const std::string& imgtemplate, unsigned int delayMilliseconds = DEFAULTDELAY);
	bool fA(const std::string& imgtemplate, unsigned int delayMilliseconds = DEFAULTDELAY, bool willInteract = false);
	bool fcpopupA();
	void loopPopUp(typeMat color);
	void fillPopup();
	bool fcZoneA(const std::string& imgtemplate, Zone Z);
	bool fZoneA(const std::string& imgtemplate, Zone Z, bool willInteract = false);
	bool fcOneTemplateMultipleTemplateA(const std::string& imgtemplate, pos direction, int order, unsigned int delayMilliseconds = DEFAULTDELAY);
	bool fOneTemplateMultipleTemplateA(const std::string& imgtemplate, pos direction, int order, unsigned int delayMilliseconds = DEFAULTDELAY, bool willInteract = false);
	bool fOneMultipleTemplateA(std::vector<std::vector<std::string>> allTempl, bool willInteract = false);
	bool fcOneTemplateA(std::vector<std::string>allTempl, std::string& foundTempl, unsigned int delayMilliseconds = DEFAULTDELAY);
	bool fOneTemplateA(std::vector<std::string> allTempl, std::string& foundTempl, unsigned int delayMilliseconds = DEFAULTDELAY, bool willInteract = false);
	bool fcOneTemplateA(std::vector<std::string>allTempl, unsigned int delayMilliseconds = DEFAULTDELAY);
	bool fOneTemplateA(std::vector<std::string> allTempl, unsigned int delayMilliseconds = DEFAULTDELAY, bool willInteract = false);
	bool fnbTemplateA(const std::string& imgtemplate, int& nb, bool willInteract = false);
	bool fnbTemplateZoneA(const std::string& imgtemplate, int& nb, Zone Z, bool willInteract = false);
	bool fcCompareA(const std::string& goodTemplate, std::string similartemplate);
	bool fCompareA(const std::string& goodTemplate, std::string similartemplate, bool willInteract = false);
	bool fCompareZoneA(const std::string& goodTemplate, std::string similartemplate, Zone Z, bool willInteract = false);
	bool fcCompareMultipleTemplateA(const std::string& goodTemplate, std::vector<std::string> similartemplates);
	bool fCompareMultipleTemplateA(const std::string& goodTemplate, std::vector<std::string> similartemplates, bool willInteract = false);
	bool fCompareMultipleTemplateZoneA(const std::string& goodTemplate, std::vector<std::string> similartemplates, Zone Z, bool willInteract = false);
	bool fcCompareMultipleTemplateZoneA(const std::string& goodTemplate, std::vector<std::string> similartemplates, Zone Z);
	bool fMultipleCompareMultipleTemplateA(const std::string& goodTemplate, std::vector<std::string> similartemplates, bool willInteract = false);

	bool templateFound(bool found, bool willInteract = false, Action act = Action::Click, Coords coord = Coords(), unsigned int delayMilliseconds = DEFAULTDELAY);
	bool templateFound(bool found, bool willInteract = false, unsigned int delayMilliseconds = DEFAULTDELAY);
	void resetCount();


	bool fSwipeA(std::string imgtemplate, Coords Cresult, bool willInteract = false);
	bool fSwipeA(std::string imgtemplate, poswipe endx, poswipe endy, bool willInteract = false);
	bool fMultipleDigitsA(int nb, std::vector<std::string>Nb, Zone Z);
	Number fNumberIntegerA(std::vector<std::string>Nb, std::vector<Unit>Units, Zone Z);
	Number fNumberIntegerA(std::vector<std::string>figures, Zone Z);
	Number fNumberDecimalA(std::vector<std::string>figures, std::vector<Unit>Units, std::string dot, Zone Z);
	Number fNumberDecimalA(std::vector<std::string>figures, std::string dot, Zone Z);
	int getMatWidth(const std::string& name);
	int getMatHeight(const std::string& name);
	void swipeX(int x1, int x2, int millitime);
	void swipeY(int y1, int y2, int millitime);
	void swipe(int x1, int y1, int x2, int y2, int millitime);
	void wait(int milliSeconds);
	void orderDigits(std::vector<Digit>& digit);
	std::vector<Coords>orderCoords(const std::vector<Coords>& coords, pos range);
	std::vector<Coords> orderPoint(const std::vector<Coords>& coord, const Coords& Cf);
	int distancePoint(const Coords& fixpt, const Coords& pt);
	int getYear();
	int getMonth();
	int getDay();
	int getHour();
	int getMinute();
	int getSecond();
	day getUTCDay();
	int getUTCHour();
	std::tuple<bool*, std::string> getActivity(char key, bool& present);
	void setActivity(char key, bool activate);
	void setActivity(std::tuple<bool*, std::string> tuple, bool activate);
	void loadTemplate(std::string image);
	void loadAllTemplates();
	void getFilesPath(std::vector<std::string>& tab, std::filesystem::directory_iterator path);
	void showVector(std::vector<std::string>vect);
	Template getTemplate(std::string image, typeMat type = Gray);
	int getCx()const;
	int getCy()const;
	void setDimX(int dimx);
	void setDimY(int dimY);
	int getRebootCount();
	void setRebootCount(int nb);
	const static int waitnotfound = 1000;
	const static int waitfound = 2000;
	const static int DEFAULTDELAY = waitfound;
	void startMacro();
	void initActivities();
	void macroLoop();
	bool macroEnd();

	void setPort(int port);
	void selectActivity();
	int getDimX();
	int getDimY();
	void setAdb(fadb adb);
	void setSys(sysCommands sys);

	int rebootCount;
	bool restartMacro;
	bool firstboot;
	bool endmacro;
	Template background;
	std::map<std::string, Template> allTemplates;
	std::map<char,std::tuple<bool*,std::string>> allActivities;
	bool TRIAL, FRIENDS, MAIL, HELL, ICEFIRE, TOURNAMENT, BAG, HERB, RACE, THEATER, MYSTERY, XIAOWU, TASKS, ABYSS, TYRANT, ELEMENT, TREANT, FOREST, GRANDMASTER,BATTLEPASS,SECRETSHOP,ZHUQING,WHALES,DAILIES,HUNTING,CHECKIN,SECTWAR,SILVERWEISS,SOTTO,TREE,PEAK,SOULASCENSION,RANKING;
	std::string package;
	std::string activity;
	std::vector<Popup>listPopup;
	std::vector<Coords>listcoords;
	int dimX, dimY;
	Coords C;
	fopencv op;
	fadb adb;
	fsfml ml;
	sysCommands sys;
	macroConfig mac;
};






#endif
