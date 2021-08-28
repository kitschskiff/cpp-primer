// Exercise 1.22: Write a program that reads several transactions for the
// same ISBN. Write the sum of all the transactions that were read. 
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item transaction1, transaction2, transaction3;
    // read transactions from console
    std::cin >> transaction1 >> transaction2 >> transaction3;
    if ((transaction1.isbn() == transaction2.isbn())
        && (transaction1.isbn() == transaction3.isbn())){
            std::cout << "Sum of transactions: "
                << transaction1 + transaction2 + transaction3
                << std::endl;
        }
    return 0;
}