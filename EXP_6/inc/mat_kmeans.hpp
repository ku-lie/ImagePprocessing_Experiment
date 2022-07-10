#pragma once
#include <core\mat.hpp>

using cv::Mat;
using std::vector;
void imageKMeans(Mat src_img, Mat &out_img, int k = 2);