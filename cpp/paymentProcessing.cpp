#include <iostream>

class PaymentMethod {
public:
  virtual void processPayment() = 0; // Pure virtual function, must be overridden
};

class CreditCard : public PaymentMethod {
public:
  void processPayment() override {
    std::cout << "Processing payment using credit card" << std::endl;
  }
};

class PayPal : public PaymentMethod {
public:
  void processPayment() override {
    std::cout << "Processing payment using PayPal" << std::endl;
  }
};

class Bitcoin : public PaymentMethod {
public:
  void processPayment() override {
    std::cout << "Processing payment using Bitcoin" << std::endl;
  }
};

int main() {
  CreditCard creditCard;
  PayPal paypal;
  Bitcoin bitcoin;

  // Create a pointer to PaymentMethod
  PaymentMethod* paymentPtr;

  // Assign the pointer to different payment methods for polymorphism
  paymentPtr = &creditCard;
  paymentPtr->processPayment(); // Polymorphic call

  paymentPtr = &paypal;
  paymentPtr->processPayment(); // Polymorphic call

  paymentPtr = &bitcoin;
  paymentPtr->processPayment(); // Polymorphic call

  return 0;
}
