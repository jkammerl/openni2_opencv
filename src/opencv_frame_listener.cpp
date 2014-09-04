#include <iostream>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

#include "opencv_frame_listener.h"

OpenCVFrameListener::OpenCVFrameListener() {
  cv::namedWindow( "Depth video", cv::WINDOW_AUTOSIZE );
}

OpenCVFrameListener::~OpenCVFrameListener() {
}

void OpenCVFrameListener::onNewCVFrame(const cv::Mat& cv_frame) {
  cv::Mat frame_normalized;
  cv::normalize(cv_frame, frame_normalized, 0, 255, cv::NORM_MINMAX, CV_8UC1);

  std::cout<<"Frame received\n" << cv_frame.cols << "x"<<cv_frame.rows<<std::endl;
  cv::imshow( "Depth video", frame_normalized );
  cv::waitKey(1);
}
