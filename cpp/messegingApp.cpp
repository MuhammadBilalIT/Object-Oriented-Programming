#include <iostream>

class Message {
public:
  virtual void sendMessage() = 0; // Pure virtual function, must be overridden
};

class TextMessage : public Message {
public:
  void sendMessage() override {
    std::cout << "Sending text message" << std::endl;
  }
};

class ImageMessage : public Message {
public:
  void sendMessage() override {
    std::cout << "Sending image message" << std::endl;
  }
};

class VideoMessage : public Message {
public:
  void sendMessage() override {
    std::cout << "Sending video message" << std::endl;
  }
};

void sendMessage(Message& message) {
  message.sendMessage(); // Polymorphic call, actual method depends on object type
}

int main() {
  TextMessage textMessage;
  ImageMessage imageMessage;
  VideoMessage videoMessage;

  sendMessage(textMessage);
  sendMessage(imageMessage);
  sendMessage(videoMessage);

  return 0;
}
