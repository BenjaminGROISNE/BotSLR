
#ifndef FADB_H
#define FADB_H
#include <string>
#include <iostream>
#include <Poco/Process.h>
#include <Poco/PipeStream.h>
#include <filesystem>
#include <iostream>
#include <istream>
#include <string>
#include <time.h>
#include <chrono>
#include <thread>
#include <cstdio>


class fadb
{
  public:

	  fadb();
	  ~fadb();
	std::string runADB(const std::string& command);
	void input(std::string input);
	void touch(int x, int y);
	void swipe(int x1, int y1, int x2, int y2, int delay);
	void setDim(int& DIMX, int& DIMY);
	void launch(std::string namepckg);
	void quit(std::string namepckg);
	void home();
	void back();
	void screenshotEvents();
	void screenshot();
	void connect();
	std::string getPID(std::string package);
	bool onApp(std::string package);
	bool onHome();
	void removeAllFiles(std::string dir_path);
	void wait(int time);
   private:
	
};
#endif

