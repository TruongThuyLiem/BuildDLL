#pragma once
#include <dlib/image_processing/frontal_face_detector.h>
#include <vector>
#include "opencv2/opencv.hpp"

using namespace dlib;

float Euclidean(point A, point B);

cv::Rect RectDlibtCV(dlib::drectangle rect);
dlib::rectangle RectCVtDlib(cv::Rect rect);
void PreprocessingInput(cv::Mat &src, bool v2);
std::string GetLabels(cv::Mat prob);
void print_rect(cv::Rect rect);
std::string type2str(int type);