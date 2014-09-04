#ifndef OPENNI2_FRAME_LISTENER_H_
#define OPENNI2_FRAME_LISTENER_H_

#include "OpenNI.h"

class OpenNI2FrameListener : public openni::VideoStream::NewFrameListener {
 public:
  OpenNI2FrameListener();
  virtual ~OpenNI2FrameListener();

  void onNewFrame(openni::VideoStream& stream);

 private:
  openni::VideoFrameRef m_frame;
};


#endif
