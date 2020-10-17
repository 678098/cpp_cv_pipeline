#include <video_writer.hpp>

#include <opencv2/highgui/highgui.hpp>

VideoWriter::VideoWriter(const std::string &video_filepath) {
	if (video_filepath.empty()) {
		video_filepath_ = "video_writer_" + std::to_string(time(NULL)) + ".avi";
	} else {
		video_filepath_ = video_filepath;
	}
}

void VideoWriter::process(FramePtr &frame) {
	const cv::Mat &image = frame->image;

	if (!writer_.isOpened()) {
		std::string fourcc = "MJPG";
		writer_.open(video_filepath_,
				CV_FOURCC(fourcc.at(0), fourcc.at(1), fourcc.at(2),
						fourcc.at(3)), 10, image.size(), image.channels() == 3);
	}

	writer_ << image;
}
