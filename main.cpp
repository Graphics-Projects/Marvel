#include "vega.hpp"
GLfloat vertices[] =
{
    -0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f, // Lower left corner
	0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f, // Lower right corner
	0.0f, 0.5f * float(sqrt(3)) * 2 / 3, 0.0f // Upper corner
};
int main(int argc, const char* argv[]) {
    vega::VEGAWindow window(1200, 600, "VEGA Window", "Assets/icon/OpenGL.jfif", vega::VEGAColor(0.0f, 0.69f, 0.0f), false, false, true, true);
    vega::VEGAShader shader(
        vega::VEGAReadFile("default.vert"),
        vega::VEGAReadFile("default.frag")
    );
    vega::VEGAVertexBuffer vbo()
    while (!window.should_close()) {
        window.handle_events();
        window.clear_color();
        window.check_errors();
        window.swap_buffers();
    }

    return 0;
}
