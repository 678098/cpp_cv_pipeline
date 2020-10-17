#ifndef INCLUDE_PIPELINE_HPP_
#define INCLUDE_PIPELINE_HPP_

#include <vector>

#include <frame_source.hpp>
#include <processor.hpp>

class Pipeline {
public:
	Pipeline(std::vector<ProcessorPtr> pipeline, FrameSourcePtr source);
	virtual ~Pipeline() = default;

	void run();

private:
	std::vector<ProcessorPtr> pipeline_;
	FrameSourcePtr source_;
};
typedef std::shared_ptr<Pipeline> PipelinePtr;


#endif /* INCLUDE_PIPELINE_HPP_ */
