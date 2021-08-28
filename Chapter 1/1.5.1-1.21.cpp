// Exercise 1.21: Write a program that reads two Sales_item objects that 
// have the same ISBN and produces their sum. 
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item transaction1, transaction2;
    std::cin >> transaction1 >> transaction2; // read both transactions
    if (transaction1.isbn() == transaction2.isbn())
        std::cout << transaction1 + transaction2;
    return 0;
}

