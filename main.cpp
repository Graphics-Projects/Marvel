#include "vega.hpp"

int main(int argc, const char* argv[]) {
    vega::VEGAWindow window(1200, 600, "VEGA Window", "Assets/icon/OpenGL.jfif", vega::VEGAColor(0.0f, 0.69f, 0.0f), false, false, true, true);
    while (!window.should_close()) {
        window.handle_events();
        window.clear_color();
        window.check_errors();
        window.swap_buffers();
    }
window.Destroy();
    return 0;
}
