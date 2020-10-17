#include <dummy_frame_source.hpp>

#include <opencv2/imgproc.hpp>

bool DummyFrameSource::finished() const {
	return count_ > 1024;

}

FramePtr DummyFrameSource::get_frame() {
	if (finished()) {
		return FramePtr();
	}
	count_++;

	FramePtr res = std::make_shared<Frame>();
	res->image = cv::Mat::zeros(cv::Size(512, 512), CV_8UC3);
	cv::putText(res->image, std::to_string(count_), cv::Point(128, 128),
			cv::FONT_HERSHEY_SIMPLEX, 2, cv::Scalar(200, 100, 100), 2);
	res->timestamp = time(NULL);
	return res;
}
