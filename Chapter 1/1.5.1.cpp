#include <iostream> // Headers from the standard library are enclosed in angle brackets
#include "Sales_item.h" // Headers that are not part of the library are enclosed in double quotes
int main()
{
    Sales_item book;
    // read ISBN, number of copies sold, and sales price
    std::cin >> book;
    // write ISBN, number of copies sold, total revenue, and average price
    std::cout << book << std::endl;
    return 0;
}