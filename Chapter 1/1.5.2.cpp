// 1.5.2. A first look at Member Functions
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    // first check that item1 and item2 represent the same book
    if (item1.isbn() == item2.isbn()){ // isbn is a member function
        std::cout << item1 + item2 << std::endl;
        return 0; // indicate success
    } else{
        std::cerr << "Data must refer to the same ISBN"
            << std::endl;
        return -1; // indicate failure
    }
}
// A member function is a function that is defined as part of a class. 
// AKA(also known as) methods. 