#include <iostream>

#include "openni2_frame_listener.h"

OpenNI2FrameListener::OpenNI2FrameListener() {
}

OpenNI2FrameListener::~OpenNI2FrameListener() {
}

void OpenNI2FrameListener::onNewFrame(openni::VideoStream& stream) {
  stream.readFrame(&m_frame);

  if (m_frame.isValid()) {
    int width = m_frame.getWidth();
    int height = m_frame.getHeight();
    std::cout << "Frame (" << width << "x" << height << ")" << std::endl;
    /*  sensor_msgs::ImagePtr image(new sensor_msgs::Image);

    image->width = m_frame.getWidth();
    image->height = m_frame.getHeight();

    std::size_t data_size = m_frame.getDataSize();

    image->data.resize(data_size);
    memcpy(&image->data[0], m_frame.getData(), data_size);

    image->is_bigendian = 0;

    const openni::VideoMode& video_mode = m_frame.getVideoMode();
    switch (video_mode.getPixelFormat()) {
      case openni::PIXEL_FORMAT_DEPTH_1_MM:
        image->encoding = sensor_msgs::image_encodings::TYPE_16UC1;
        image->step = sizeof(unsigned char) * 2 * image->width;
        break;
      case openni::PIXEL_FORMAT_DEPTH_100_UM:
        image->encoding = sensor_msgs::image_encodings::TYPE_16UC1;
        image->step = sizeof(unsigned char) * 2 * image->width;
        break;
      case openni::PIXEL_FORMAT_SHIFT_9_2:
        image->encoding = sensor_msgs::image_encodings::TYPE_16UC1;
        image->step = sizeof(unsigned char) * 2 * image->width;
        break;
      case openni::PIXEL_FORMAT_SHIFT_9_3:
        image->encoding = sensor_msgs::image_encodings::TYPE_16UC1;
        image->step = sizeof(unsigned char) * 2 * image->width;
        break;
      default:
        ROS_ERROR("Invalid image encoding");
        break;
    }
    */
  }
}
