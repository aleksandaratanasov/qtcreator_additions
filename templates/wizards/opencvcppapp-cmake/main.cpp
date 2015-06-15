#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using std::cout;
using std::endl;
using cv::Mat;
using cv::imshow;

int main()
{
  Mat image(320, 240, CV_8UC3, Scalar(0,0,0));
  imshow("Hello OpenCV", image)  
  return 0;
}
