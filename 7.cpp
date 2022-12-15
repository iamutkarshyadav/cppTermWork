#include <iostream>
#include <string>

class ConsDemo {
public:
  // Overloaded SumDemo() function that takes two arguments: an int and a char
  void SumDemo(int n, char c) {
    // If the character is 'p', print the square of the number
    if (c == 'p') {
      std::cout << n * n << std::endl;
    }
    // If the character is not 'p', print the cube of the number
    else {
      std::cout << n * n * n << std::endl;
    }
  }

  // Overloaded SumDemo() function that takes three arguments: two ints and a char
  void SumDemo(int n1, int n2, char c) {
    // If the character is 'a', print the sum of the two numbers
    if (c == 'a') {
      std::cout << n1 + n2 << std::endl;
    }
    // If the character is not 'a', print the ASCII value of the character
    else {
      std::cout << (int)c << std::endl;
    }
  }

  // Overloaded SumDemo() function that takes two arguments: two strings
  void SumDemo(std::string s1, std::string s2) {
    // Check if the two strings are equal and print the result
    if (s1 == s2) {
      std::cout << "The strings are equal." << std::endl;
    } else {
      std::cout << "The strings are not equal." << std::endl;
    }
  }
};
int main() {
  // Create a ConsDemo object
  ConsDemo cd;

  // Call the SumDemo() function that takes two arguments: an int and a char
  cd.SumDemo(2, 'p');
  cd.SumDemo(3, 'x');

  // Call the SumDemo() function that takes three arguments: two ints and a char
  cd.SumDemo(1, 2, 'a');
  cd.SumDemo(3, 4, 'b');

  // Call the SumDemo() function that takes two arguments: two strings
  cd.SumDemo("hello", "world");
  cd.SumDemo("foo", "bar");

  return 0;
}
