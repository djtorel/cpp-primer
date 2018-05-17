#include <iostream>
#include "Sales_data.h"

// Helper functions
// Create new Sales_data object from cin (istream) object
Sales_data new_sales_data() {
    std::string bookNo{};
    unsigned units_sold{};
    double price{};
    std::cout
        << "Enter ISBN number, units sold, and price (separated by spaces): ";
    std::cin >> bookNo >> units_sold >> price;

    return Sales_data{bookNo, units_sold, price};
}

int main() {
    Sales_data data1 = new_sales_data();
    std::cout << data1.bookNo << ", " << data1.units_sold << ", "
              << data1.revenue << std::endl;
    return 0;
}
