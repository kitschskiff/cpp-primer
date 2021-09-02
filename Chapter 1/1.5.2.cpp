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
// in item1.isbn(), isbn is a member of object item1.
// dot operator applies only to objects of class type. 
// the result of the dot operator is the member named by the right-hand
// operand (an indexing of sorts)
// the call operator (the () operator)) that encloses a (possibly empty)
// list of arguments. 
// the right-hand operand of the equality operator tests if the return
// value of the isbn member function for both class objects are
// equivalent. If the ISBNs are the same, the condition is true
// otherwise, it is false. 
