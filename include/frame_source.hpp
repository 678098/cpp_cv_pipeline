#ifndef INCLUDE_FRAME_SOURCE_HPP_
#define INCLUDE_FRAME_SOURCE_HPP_

#include <frame.hpp>

class FrameSource {
public:
	FrameSource() = default;
	virtual ~FrameSource() = default;

	virtual bool finished() const = 0;
	virtual FramePtr get_frame() = 0;
};
typedef std::shared_ptr<FrameSource> FrameSourcePtr;

#endif /* INCLUDE_FRAME_SOURCE_HPP_ */
