
#ifndef FOPENCV_H
#define FOPENCV_H
#include <string>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/photo.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
#include <random>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include "sysCommands.h"


enum typeMat {Color, Gray,notype};

struct Coords {
	int x, y;
	Coords() {
		x = y = 0;
	}
	Coords(int x1, int y1) {
		x = x1;
		y = y1;
	}
	Coords(double x1, double y1) {
		x = (int)x1;
		y = (int)y1;
	}
	Coords(int x1, double y1) {
		x = x1;
		y = (int)y1;
	}
	Coords(double x1, int y1) {
		x = (int)x1;
		y = y1;
	}
	void showCoords() {
		std::cout << "{X: " << x << " Y: " << y << "}" << std::endl;
	}
};

struct Template {
	Coords C;
	cv::Mat mat,graymat;
	typeMat type;
	std::string id;
	float score;
	Template() {
		score = 0;
		C = Coords();
		id.clear();
		type = notype;
		mat = cv::Mat();
	}
	Template(const std::string namemat) {
		*this = Template();
		id = namemat;
		mat = cv::imread(id, cv::IMREAD_COLOR);
		graymat = cv::imread(id, cv::IMREAD_GRAYSCALE);

	}
	Template(const std::string namemat,typeMat type) {
		*this = Template(namemat);
		this->type = type;
	}
	Template(const Template& other) {
		id = other.id;
		this->type = other.type;
		mat = other.mat;
		graymat = other.graymat;
		score = other.score;
		C = other.C;
	}
	void setType(typeMat type) {
		this->type = type;
	}
};

struct Zone {
	Coords C1, C2;
	Zone() {
		C1.x = C1.y = C2.x = C2.y = 0;
	}
	Zone(Coords c1, Coords c2) {
		C1 = c1;
		C2 = c2;
	}
	Zone(Zone& Z) {
		C1 = Z.C1;
		C2 = Z.C2;
	}
	void showZone() {
		std::cout << "C1";
		C1.showCoords();
		std::cout << "C2";
		C2.showCoords();
	}
};


class fopencv
{
public:
	fopencv();
	~fopencv();
	cv::Vec3b getPixel(cv::Mat img, int x, int y);
	cv::Mat CreateMat(const std::string& path, typeMat color);

	void showImg(std::string path);
	void showMat(const cv::Mat& img);
	cv::Mat DetectContours(cv::Mat img);
	void getContours(std::string pathImg);
	void showImgtest(std::string path);

	bool cvmtfTemplate(const Template& tempimg, const Template& backgroundimage, Coords& Cresult);
	bool cvmtfMultipleTemplate(const Template& tempimg, const Template& background, std::vector<Coords>& listcoords);
	bool cvmtfOneTemplate(const std::vector<Template>& allTempl, const Template& background, Coords& Cresult);
	bool cvmtfOneTemplate(const std::vector<Template>& allTempl, const Template& background, Template& foundTemplate, Coords& Cresult);
	bool cvmtfOneMultipleTemplate(const std::vector<std::vector<Template>>& allTempl, const Template& background, std::vector<Coords>& Cresult);
	bool cvmtfAllTemplate(const std::vector<Template>& allTempl, const Template& background, std::vector<Coords>& Cresult);
	bool cvmtfCompareTemplate(const Template& goodTemplate, const Template& background, const Template& similartemplate, Coords& Cresult);
	bool cvmtfCompareTemplateZone(const Template& goodTemplate, Template& background, const Template& similartemplate, Coords& Cresult, Zone Z);
	bool cvmtfCompareMultipleTemplate(const Template& goodTemplate, const Template& background, const std::vector<Template>& similartemplates, Coords& Cresult);
	bool cvmtfCompareMultipleTemplateZone(const Template& goodTemplate, Template& background, const std::vector<Template>& similartemplates, Coords& Cresult, Zone Z);
	bool cvmtfMultipleTemplateCompareMultipleTemplate(const Template& goodTemplate, const Template& background, const std::vector<Template>& similartemplates, std::vector<Coords>& listcoord);
	bool cvmtfZone(const Template& tempimg, Template& background, Coords& Cresult, Zone Z);
	bool cvmtfMultipleTemplateZone(const Template& tempimg, Template& backgroundimage, std::vector<Coords>& listcoords, Zone Z);
	bool cvmtfMultipleTemplateCompareMultipleTemplateZone(const Template& goodTemplate, Template& background, const std::vector<Template>& similartemplates, std::vector<Coords>& listcoord, Zone Z);
	void cvmtfHighestScoreZone(const cv::Mat& templates, const cv::Mat& Background, float& score, Coords& C);
	std::vector<Template> returnMultipleMatchTemplate(const Template& templateImg, const Template& background);
	Template returnOneMatchTemplate(const Template& templateImg, const Template& background);
	cv::Mat extractZone(const cv::Mat& image, Zone Z);


	void performCannyEdgeDetectionFromLiveCamera();
	cv::Mat performCannyEdgeDetectionFromPicture(const std::string& imagePath);
	void CannyEdgeVideo(std::string videoPath);
	void SaveCannyEdgeVideo(const std::string& videoPath, const std::string& outputPath);
	sysCommands sys;
	double precision = 0.8;
private:


};
#endif
