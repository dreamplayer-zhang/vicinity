#pragma once

#include <string>
#include <opencv2/opencv.hpp>
#include "../../pipeline_core/include/processor_base.hpp"

using std::string;
using cv::ColorConversionCodes;
using vc::core::ProcessorBase;
using vc::core::ProcessorContext;

namespace vc {

namespace extensions {

class ColorConverter : public ProcessorBase {

    ColorConversionCodes conversion_code;

public:

    static const string COLOR_CONVERTER_INPORT;
    static const string COLOR_CONVERTER_OUTPORT;

    explicit ColorConverter(ColorConversionCodes);

private:

    void processor_function(ProcessorContext*) override;

};

};

};