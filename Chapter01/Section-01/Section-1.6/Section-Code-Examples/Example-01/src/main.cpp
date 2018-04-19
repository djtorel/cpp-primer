#include "Sales_item.h"
#include <iostream>

int main()
{
  Sales_item total; // variable to hold data for the next transaction
  if (std::cin >> total)
  {
    Sales_item trans; // variable to hold the running sum
    // read and process the remaining transactions
    while (std::cin >> trans)
    {
      // if we're still processing the same book
      if (total.isbn() == trans.isbn())
      {
        total += trans; // update the running total
      }
      else
      {
        // print results for previous book
        std::cout << total << std::endl;
        total = trans; // total now refers to the next book
      }
    }
    std::cout << total << std::endl; // print the last transaction
  }
  else
  {
    // no input! warn the user
    std::cerr << "No data?!" << std::endl;
    return -1;
  }

  return 0;
}