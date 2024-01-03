This is a graphics Framework made by me.


Here is a sample code from the framework:

#include "vega.hpp"
int main(){
  vega::vegaWindow window(1200, 600, "Vega Framework", vega::vegaColor(0.0f, 2.0f, 2.0f, 1.0f), false, false, true, true);
  while(!window.Should_Close()){
    window.handle_events();
    window.clear_color();
    window.swap_buffers();
    }
  window.Destroy();
  return 0;
}
