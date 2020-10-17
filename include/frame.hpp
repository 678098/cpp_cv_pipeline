#ifndef INCLUDE_FRAME_HPP_
#define INCLUDE_FRAME_HPP_

#include <memory>

#include <opencv2/core.hpp>

const uint64_t UNDEFINED_TIMESTAMP = 0;

class Frame {
public:
	Frame() = default;
	virtual ~Frame() = default;

	cv::Mat image;
	unsigned long long timestamp = UNDEFINED_TIMESTAMP;
};
typedef std::shared_ptr<Frame> FramePtr;

#endif /* INCLUDE_FRAME_HPP_ */
