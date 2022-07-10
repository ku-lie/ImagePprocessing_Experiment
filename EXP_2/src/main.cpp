#include <imgproc.hpp>
#include <highgui.hpp>
#include "bilateral_filter.hpp"

using cv::imread;
using cv::resize;
using cv::Scalar;
using cv::Size;
using cv::waitKey;

int main()
{
    Mat out_img;
    Mat src_img = imread("..\\res\\example.jpg", 0); //读取图片并转为单通道，即灰度图
    bilateralFilter(src_img, out_img, 11, 16, 8);    //双边滤波处理
    imshow("Srouce Image", src_img);                 //显示原图(灰度图)
    imshow("Bilateral Filter Image", out_img);       //显示双边滤波后的图
    waitKey(0);
    return 0;
}