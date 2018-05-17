#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;

    Sales_data() = default;
    Sales_data(std::string book, unsigned sold, double cost)
        : bookNo{book}, units_sold{sold}, price{cost}, revenue{cost * sold} {}
};

#endif  // !SALES_DATA_H
