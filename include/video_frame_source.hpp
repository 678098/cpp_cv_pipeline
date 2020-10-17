#ifndef INCLUDE_VIDEO_FRAME_SOURCE_HPP_
#define INCLUDE_VIDEO_FRAME_SOURCE_HPP_

#include <opencv2/videoio.hpp>

#include <frame_source.hpp>

class VideoFrameSource : public FrameSource {
public:
	VideoFrameSource(const std::string &video_filepath);

	bool finished() const override;
	FramePtr get_frame() override;

private:
	cv::VideoCapture cap_;
	bool finished_ = false;
};


#endif /* INCLUDE_VIDEO_FRAME_SOURCE_HPP_ */
