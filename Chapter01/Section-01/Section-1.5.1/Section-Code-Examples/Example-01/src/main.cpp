#include "Sales_item.h"
#include <iostream>

// int main() {
//   Sales_item book;
//   // read ISBN, number of copies sold, and sales price
//   std::cin >> book;
//   // write ISBN, number of copies sold, total revenue, and average price
//   std::cout << book << std::endl;
//   return 0;
// }

int main()
{
  Sales_item item1, item2;
  std::cin >> item1 >> item2;
  std::cout << item1 + item2 << std::endl;
  return 0;
}