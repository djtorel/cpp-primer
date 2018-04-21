#include <iostream>

int main() {
  int ival = 1024;
  int *pi = &ival; // pi points to an int
  int **ppi = &pi; // ppi points to a pointer to an int

  std::cout << "The value of ival\n"
            << "direct value: " << ival << "\n"
            << "indirect value: " << *pi << "\n"
            << "coubly indirect value: " << **ppi << std::endl;

  int i = 42;
  int *p;      // p is a pointer to int
  int *&r = p; // r is a reference to the pointer p
  r = &i;      //  r refers to a pointer; assigning &i to r makes p point to i
  *r = 0; //  dereferencing r yields i, the object to which p points; changes i
          //  to 0
}