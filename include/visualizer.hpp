#ifndef INCLUDE_VISUALIZER_HPP_
#define INCLUDE_VISUALIZER_HPP_

#include <processor.hpp>

class Visualizer: public Processor {
public:
	void process(FramePtr &frame) override;
};

#endif /* INCLUDE_VISUALIZER_HPP_ */
