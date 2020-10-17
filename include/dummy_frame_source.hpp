#ifndef INCLUDE_DUMMY_FRAME_SOURCE_HPP_
#define INCLUDE_DUMMY_FRAME_SOURCE_HPP_

#include <frame_source.hpp>

class DummyFrameSource: public FrameSource {
public:
	bool finished() const override;
	FramePtr get_frame() override;
private:
	int count_ = 0;
};

#endif /* INCLUDE_DUMMY_FRAME_SOURCE_HPP_ */
