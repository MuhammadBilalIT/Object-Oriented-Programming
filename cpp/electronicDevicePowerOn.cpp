#include <iostream>

class ElectronicDevice {
public:
  virtual void powerOn() = 0; // Pure virtual function, must be overridden
};

class Laptop : public ElectronicDevice {
public:
  void powerOn() override {
    std::cout << "Laptop powering on... Welcome to Bilal's PC." << std::endl;
  }
};

class Smartphone : public ElectronicDevice {
public:
  void powerOn() override {
    std::cout << "Smartphone powering on... Unlocking screen." << std::endl;
  }
};

class Tablet : public ElectronicDevice {
public:
  void powerOn() override {
    std::cout << "Tablet powering on... Welcome" << std::endl;
  }
};

int main() {
  Laptop laptop;
  Smartphone smartphone;
  Tablet tablet;

  // Create a pointer to ElectronicDevice
  ElectronicDevice* device;

  // Assign the pointer to different devices to demonstrate polymorphism
  device = &laptop;
  device->powerOn(); // Polymorphic call

  device = &smartphone;
  device->powerOn(); // Polymorphic call

  device = &tablet;
  device->powerOn(); // Polymorphic call

  return 0;
}
