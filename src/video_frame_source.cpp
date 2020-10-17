#include <video_frame_source.hpp>

VideoFrameSource::VideoFrameSource(const std::string &video_filepath) {
	if (!cap_.open(video_filepath)) {
		throw std::runtime_error("Can't open video filepath " + video_filepath);
	}
}

bool VideoFrameSource::finished() const {
	return finished_;

}

FramePtr VideoFrameSource::get_frame() {
	if (finished()) {
		return FramePtr();
	}

	FramePtr res = std::make_shared<Frame>();
	cap_ >> res->image;
	if (res->image.empty()) {
		finished_ = true;
		return FramePtr();
	}
	res->timestamp = time(NULL);
	return res;
}
