#pragma once

#include <opencv2/opencv.hpp>
#include "../../pipeline_core/include/processor_base.hpp"

using namespace vc::core;

namespace vc {

namespace extensions {

using cv::VideoCapture;

class VideoFetcher : public ProcessorBase {

    VideoCapture cap;

public:

    static const string VIDEO_FETCHER_OUTPORT;

    explicit VideoFetcher();

    void run(ProcessorContext*) override;

    ~VideoFetcher();

};

};

};
