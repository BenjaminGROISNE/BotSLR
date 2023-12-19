#include "forb.h"

forb::forb() {
	detector = cv::ORB::create();
}

void forb::initOrb()
{

}



void forb::alignImages(cv::Mat& im1, cv::Mat& im2, cv::Mat& im1Reg, cv::Mat& h)
{
	// Convert images to grayscale
	cv::Mat im1Gray, im2Gray;
	cvtColor(im1, im1Gray, cv::COLOR_BGR2GRAY);
	cvtColor(im2, im2Gray, cv::COLOR_BGR2GRAY);

	// Variables to store keypoints and descriptors
	std::vector<cv::KeyPoint> keypoints1, keypoints2;
	cv::Mat descriptors1, descriptors2;

	// Detect ORB features and compute descriptors.
	cv::Ptr<cv::Feature2D> orb = cv::ORB::create(MAX_FEATURES);
	orb->detectAndCompute(im1Gray,cv::Mat(), keypoints1, descriptors1);
	orb->detectAndCompute(im2Gray, cv::Mat(), keypoints2, descriptors2);

	// Match features.
	std::vector<cv::DMatch> matches;
	cv::Ptr<cv::DescriptorMatcher> matcher = cv::DescriptorMatcher::create("BruteForce-Hamming");
	matcher->match(descriptors1, descriptors2, matches, cv::Mat());

	// Sort matches by score
	std::sort(matches.begin(), matches.end());

	// Remove not so good matches
	const int numGoodMatches = matches.size() * GOOD_MATCH_PERCENT;
	matches.erase(matches.begin() + numGoodMatches, matches.end());

	// Draw top matches
	cv::Mat imMatches;
	drawMatches(im1, keypoints1, im2, keypoints2, matches, imMatches);
	imwrite("matches.jpg", imMatches);
	op.showMat(imMatches);
	cv::waitKey(0);
	// Extract location of good matches
	std::vector<cv::Point2f> points1, points2;

	for (size_t i = 0; i < matches.size(); i++)
	{
		points1.push_back(keypoints1[matches[i].queryIdx].pt);
		points2.push_back(keypoints2[matches[i].trainIdx].pt);
	}

	// Find homography
	h = findHomography(points1, points2, cv::RANSAC);

	// Use homography to warp image
	warpPerspective(im1, im1Reg, h, im2.size());
}

