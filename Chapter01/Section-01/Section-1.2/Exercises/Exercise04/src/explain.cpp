// explain.cpp
/**
 * Explain whether the following code is legal:
 */
// std::cout << "The sum of " << v1;
//           << " and " << v2;
//           << " is " << v1 + v2 << std::endl;

/**
 * It is not legal, because it ends the cout statement on the first line
 * making the following lines not have an ostream object to pass information to
 */

// Fixed below:
#include <iostream>

int main() {
  int v1 = 23, v2 = 19;
  std::cout << "The sum of " << v1
          << " and " << v2
          << " is " << v1 + v2 << std::endl;
}