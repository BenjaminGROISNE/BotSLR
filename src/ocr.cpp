#include "ocr.h"

ocr::ocr() {
	api = new tesseract::TessBaseAPI();
}
void ocr::detectText() {
    im = imread(imPath, IMREAD_COLOR);
    api->Init(NULL, "eng", tesseract::OEM_TESSERACT_LSTM_COMBINED);
    api->SetPageSegMode(tesseract::PSM_SINGLE_BLOCK);
    api->SetVariable("tessedit_char_whitelist", "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"); // Set character whitelist for improved accuracy
    cvtColor(im, im, cv::COLOR_BGR2GRAY);
   // GaussianBlur(im, im, cv::Size(5,5),0);
    namedWindow("test", 0);
    imshow("test", im);
    waitKey(4000);

    api->SetImage(im.data, im.cols, im.rows, 1, im.step);
    outText = api->GetUTF8Text();
    cout << outText;
}
ocr::~ocr() {
	delete api;
}