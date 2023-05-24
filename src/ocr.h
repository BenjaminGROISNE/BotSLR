#ifndef OCR_H
#define OCR_H
#include "fopencv.h"
#include <string>
#include <fstream>
#include <tesseract/baseapi.h>
#include <iostream>
#include <regex>
using namespace cv;
using namespace std;
using namespace tesseract;
class ocr
{
	public:
        ocr();
        ~ocr();
       bool detectText(string targetWord,int x,int y);
	private:
        string outText, imPath = "./img/screenshot.png";
        Mat im;
        ofstream file;
        tesseract::TessBaseAPI* api;
};
#endif

