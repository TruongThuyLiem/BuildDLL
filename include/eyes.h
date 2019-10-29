// eyes.h - Contains declarations of math functions
#pragma once

#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_processing.h>
#include <vector>
#include <dlib/opencv.h>
#include <dlib/gui_widgets.h>
#include "compute.h"
using namespace dlib;

float EyeAspectRadio(std::vector<point> full_eye);
class eyes {
public:
	float earL;
	float earR;
	float ear;
	int counter;
	int total;
	bool blinking;
	frontal_face_detector detector;
	shape_predictor model;
	std::vector<point> full_eye_L;
	std::vector<point> full_eye_R;
	full_object_detection d;
	std::vector<image_window::overlay_line> lines;
	eyes(std::string model_path);

	void Reset();

	void Update(cv::Mat img, cv::Rect face);

	void Update(cv::Mat img, dlib::rectangle face);

	void Setting(full_object_detection& dets);

	void GetFullEye();

	void BlinkingDetection();

    void DrawEyes(cv::Mat& img);

	void Show();
	~eyes() {
		if (!full_eye_L.empty()) full_eye_L.clear();
		if (!full_eye_R.empty()) full_eye_R.clear();
		if (!lines.empty()) lines.clear();
	}
};
