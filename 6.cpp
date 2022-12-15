#include <iostream>

class Time {
private:
  // Private data members for the hours, minutes, and seconds
  int hours;
  int minutes;
  int seconds;

public:
  // Default constructor to initialize the data members to 0
  Time() : hours(0), minutes(0), seconds(0) {}

  // Constructor to initialize the data members to fixed values
  Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

  // Member function to display the time in 11:59:59 format
  void display() {
    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
  }

  // Member function to add two Time objects and store the result in this object
  void add(Time t1, Time t2) {
    hours = t1.hours + t2.hours;
    minutes = t1.minutes + t2.minutes;
    seconds = t1.seconds + t2.seconds;

    // Adjust the time if the total number of seconds is greater than 60
    if (seconds >= 60) {
      minutes += seconds / 60;
      seconds = seconds % 60;
    }

    // Adjust the time if the total number of minutes is greater than 60
    if (minutes >= 60) {
      hours += minutes / 60;
      minutes = minutes % 60;
    }
  }
};
int main() {
  // Create two Time objects with fixed values
  Time t1(1, 30, 15);
  Time t2(2, 45, 30);

  // Create a third Time object that is initialized to 0
  Time t3;

  // Add the first two Time objects and store the result in the third Time object
  t3.add(t1, t2);

  // Display the result
  std::cout << "The result is: ";
  t3.display();

  return 0;
}
