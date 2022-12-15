#include <iostream>

class Complex {
private:
  // Private data members to hold the real and imaginary parts of a complex number
  int real;
  int img;

public:
  // Constructor to initialize the data members
  Complex(int r, int i) : real(r), img(i) {}

  // Binary operator overloads

  // Overload the binary + operator as a friend function
  friend Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.img + c2.img);
  }

  // Overload the binary + operator as a member function
  Complex operator+(const Complex& c) const {
    return Complex(real + c.real, img + c.img);
  }
};

// Overload the output stream operator to print a Complex object
std::ostream& operator<<(std::ostream& os, const Complex& c) {
  return os << c.real << " + " << c.img << "i";
}
int main() {
  // Create two Complex objects
  Complex c1(1, 2);
  Complex c2(3, 4);

  // Use the binary + operator as a friend function to add the two Complex objects
 

  
