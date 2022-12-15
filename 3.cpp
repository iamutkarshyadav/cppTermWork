#include <iostream>
#include <string>

int main() {
  // Declare a string array to store the input words
  std::string words[5];

  // Prompt the user to enter the words
  std::cout << "Enter five words: ";

  // Read the input words from the console
  for (int i = 0; i < 5; i++) {
    std::cin >> words[i];
  }

  // Loop through the input words
  for (int i = 0; i < 5; i++) {
    // Declare a string to store the result of removing consecutive repeated characters
    std::string result = "";

    // Loop through the characters of the current word
    for (int j = 0; j < words[i].length(); j++) {
      // If the current character is not the same as the previous character, or if it is the first character of the word,
      // append it to the result string
      if (j == 0 || words[i][j] != words[i][j-1]) {
        result += words[i][j];
      }
    }

    // Output the result
    std::cout << result << std::endl;
  }

  return 0;
}
