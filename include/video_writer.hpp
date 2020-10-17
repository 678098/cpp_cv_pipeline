#ifndef INCLUDE_VIDEO_WRITER_HPP_
#define INCLUDE_VIDEO_WRITER_HPP_

#include <opencv2/videoio.hpp>

#include <processor.hpp>

class VideoWriter: public Processor {
public:
	VideoWriter(const std::string &video_filepath = std::string());

	void process(FramePtr &frame) override;

private:
	std::string video_filepath_;
	cv::VideoWriter writer_;
};


#endif /* INCLUDE_VIDEO_WRITER_HPP_ */
