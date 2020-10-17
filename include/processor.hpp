#ifndef INCLUDE_PROCESSOR_HPP_
#define INCLUDE_PROCESSOR_HPP_

#include <frame.hpp>

class Processor {
public:
	Processor() = default;
	virtual ~Processor() = default;

	virtual void process(FramePtr &frame) = 0;
};
typedef std::shared_ptr<Processor> ProcessorPtr;

#endif /* INCLUDE_PROCESSOR_HPP_ */
