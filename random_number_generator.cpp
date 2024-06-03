#include <iostream>
#include <ctime>

// Define constants for the LCG algorithm
const unsigned int a = 1103515245;
const unsigned int c = 12345;
const unsigned int m = (1 << 31) - 1; // Assuming 32-bit unsigned integer

// Function to generate a random number
unsigned int my_random() {
  static unsigned int seed = std::time(0); // Seed with the current time, Seed value (can be changed)
  seed = (a * seed + c) % m;
  return seed;
}

int main() {
  // Generate 10 random numbers
  for (int i = 0; i < 50; ++i) {
    // Scale the random number to a specific range (optional)
    int random_number = my_random() % 100; // Example: range 0 to 99
    std::cout << random_number << " ";
  }
  std::cout << std::endl;

  return 0;
}
