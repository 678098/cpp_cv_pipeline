#include <visualizer.hpp>

#include <opencv2/highgui/highgui.hpp>

void Visualizer::process(FramePtr &frame) {
	cv::imshow("Visualizer", frame->image);
	cv::waitKey(10);
}
