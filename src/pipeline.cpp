#include <pipeline.hpp>

Pipeline::Pipeline(std::vector<ProcessorPtr> pipeline, FrameSourcePtr source) :
		pipeline_(pipeline), source_(source) {

}

void Pipeline::run() {
	while (true) {
		FramePtr frame = source_->get_frame();
		if (source_->finished()) {
			break;
		}

		for (ProcessorPtr &proc : pipeline_) {
			proc->process(frame);
		}
	}
}
