#include <pipeline.hpp>
#include <dummy_frame_source.hpp>
#include <video_writer.hpp>
#include <visualizer.hpp>

int main(int argc, char **argv) {
	FrameSourcePtr source = std::make_shared<DummyFrameSource>();
	std::vector<ProcessorPtr> processors = { std::make_shared<Visualizer>(), std::make_shared<VideoWriter>() };

	PipelinePtr pipeline = std::make_shared<Pipeline>(processors, source);
	pipeline->run();

	return 0;
}
