#pragma once
#include <dlib/image_processing/frontal_face_detector.h>
#include <ctime>   
#include <cstdlib>
#include "opencv2/opencv.hpp"
#include <opencv2/highgui/highgui.hpp>

class systemLiveness
{
public:
	int start;
	int end;
	int* actions;
	int current_action;
	int counter;
	int num;
	int n_frame;
	int counter_blinking;
	int counter_smiling;
	int time_stamp;
	std::string instruction;
	systemLiveness();
	void ListActions();
	void RandomNum();
	void DrawFaces(cv::Mat& img, std::vector<dlib::rectangle> faces);
	void DrawTime(cv::Mat& img, int current, int total);
	void GetInstruction();
	bool CheckResult();
	void ResetTime();
	void FinishLiveness();
	void EditTimeStamp(int stamp);
	~systemLiveness();
};

