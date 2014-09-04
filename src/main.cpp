#include "openni2_wrapper.h"
#include "openni2_frame_listener.h"

int main(int argc, char **argv){

  OpenNI2Wrapper openni_wrapper;
  OpenNI2FrameListener frame_listener;

  openni_wrapper.SetFrameListener(&frame_listener);

  openni_wrapper.StartDepthStream();

  while (true) {
    sleep(100);
  }

  openni_wrapper.StopDepthStream();
  return 0;
}
