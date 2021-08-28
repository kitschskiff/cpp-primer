// Exercise 1.20: Write a program that reads a set of book sales transactions,
// writing each transaction to the standard input. 
#include <iostream>
#include "Sales_item.h"
int main(){
    Sales_item item1, item2;
    std::cin >> item1 >> item2; // read a pair of transactions
    std::cout << item1 << std::endl; // write item1
    std::cout << item2 << std::endl; // write item2
    return 0;
}