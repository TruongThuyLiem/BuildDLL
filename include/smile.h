#pragma once
#include "opencv2/opencv.hpp"
#include <vector>
#include "compute.h"

class smile {
public:
	cv::Mat face;
	int smile_frame;
	bool smiling;
	int total;
	int counter;
	int no_counter;
	std::string label;
	cv::Mat blob_image;
	cv::dnn::Net net;
	smile(cv::String& emotion_model_path);
	void Reset();
	void Edit_Smile_frame(int frame);
	static cv::Rect ApplyOffsets(cv::Rect& face_coord, int w, int h);
	void UpdateFace(cv::Rect rect, cv::Mat& gray);
	void UpdateFace(dlib::rectangle rect, cv::Mat& gray);
	bool Detection();
	~smile();
};