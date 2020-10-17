cmake_minimum_required(VERSION 3.5)
project(CVPipiline)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_DEFAULT 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

if(CMAKE_BUILD_TYPE STREQUAL "")
	set(CMAKE_BUILD_TYPE Release)
endif()

find_package(OpenCV REQUIRED)

set(SOURCES
	"src/dummy_frame_source.cpp"
	"src/pipeline.cpp"
	"src/video_frame_source.cpp"
	"src/video_writer.cpp"
	"src/visualizer.cpp"

	"src/main.cpp"
)

add_executable(CVPipeline ${SOURCES})

target_include_directories(CVPipeline
	PRIVATE
		"include/"
)

set(LIBS
	${OpenCV_LIBS}
)

target_link_libraries(CVPipeline ${LIBS})
