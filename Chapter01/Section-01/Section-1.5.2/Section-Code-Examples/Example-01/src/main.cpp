#include "Sales_item.h"
#include <iostream>

int main()
{
  Sales_item item1, item2;
  std::cin >> item1 >> item2;
  // first check that item1 and item 2 represent the same book
  if (item1.isbn() == item2.isbn())
  {
    std::cout << item1 + item2 << std::endl;
    return 0;
  }
  else
  {
    std::cerr << "Data must refere to the same ISBN"
              << std::endl;
    return -1;
  }
}