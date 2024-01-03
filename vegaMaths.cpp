#include "vegaMaths.hpp"

namespace vega {
    float VEGALerp(float a, float b, float value) {
        return a + (b - a) * value;
    }
}