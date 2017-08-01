/**
 * Indicate which, if any of the following output statements are legal
 * 
 * 
*/
#include <iostream>

int main() {
  std::cout << "/*";
  std::cout << "*/";
  // std::cout << /* "*/" */; // Illegal, because */ terminates comment even though in quotes
  std::cout << /*  "*/" /* "/*"  */; //Ahh this is legal because although the */ closes the comment
            // The   ^ and ^ quotes line up, then a new comment starts, this compiles
  return 0;
}
