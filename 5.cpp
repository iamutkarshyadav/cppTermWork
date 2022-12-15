#include <iostream>

class TollBooth {
private:
  // Private data members to hold the total number of cars and the total amount of money collected
  int total_cars;
  double total_money;

public:
  // Constructor to initialize the data members to 0
  TollBooth() : total_cars(0), total_money(0) {}

  // Member function to increment the total number of cars and add 0.5 to the total amount of money
  void payingCar() {
    total_cars++;
    total_money += 0.5;
  }

  // Member function to increment the total number of cars but add nothing to the total amount of money
  void nonPayCar() {
    total_cars++;
  }

  // Member function to display the total number of cars and the total amount of money
  void display() {
    std::cout << "Total cars: " << total_cars << std::endl;
    std::cout << "Total money: " << total_money << std::endl;
  }
};
int main() {
  // Create a TollBooth object
  TollBooth tb;

  std::cout << "Press 'P' to count a paying car, 'N' to count a non-paying car, and 'E' to exit." << std::endl;

  // Continuously prompt the user to enter a key
  while (true) {
    char key;
    std::cin >> key;

    // If the user presses the 'P' key, count a paying car
    if (key == 'P') {
      tb.payingCar();
    }
    // If the user presses the 'N' key, count a non-paying car
    else if (key == 'N') {
      tb.nonPayCar();
    }
    // If the user presses the 'E' key, exit the program and display the totals
    else if (key == 'E') {
      tb.display();
      break;
    }
  }

  return 0;
}

