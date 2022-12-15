#include <iostream>
#include <string>

class Flight {
private:
  // Private data members
  int flight_number;
  std::string destination;
  float distance;
  float fuel;

  // Private member function to calculate the fuel as per the given criteria
  void calFuel() {
    if (distance <= 1000) {
      fuel = 500;
    } else if (distance > 1000 && distance <= 2000) {
      fuel = 1100;
    } else {
      fuel = 2200;
    }
  }

public:
  // Public member function to allow the user to enter values for the flight number, destination, and distance
  // and to calculate the quantity of fuel
  void feedInfo() {
    std::cout << "Enter flight number: ";
    std::cin >> flight_number;

    std::cout << "Enter destination: ";
    std::cin >> destination;

    std::cout << "Enter distance: ";
    std::cin >> distance;

    // Calculate the quantity of fuel
    calFuel();
  }

  // Public member function to allow the user to view the content of all data members
  void showInfo() {
    std::cout << "Flight number: " << flight_number << std::endl;
    std::cout << "Destination: " << destination << std::endl;
    std::cout << "Distance: " << distance << std::endl;
    std::cout << "Fuel: " << fuel << std::endl;
  }
};

int main() {
  // Create a Flight object
  Flight f;

  // Prompt the user to enter flight information and calculate the quantity of fuel
  f.feedInfo();

  // Show the flight information
  f.showInfo();

  return 0;
}
