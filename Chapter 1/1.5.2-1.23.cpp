// Exercise 1.23: Write a program that reads several transactions and
// counts how many transactions occur for each ISBN. 
#include <iostream>
#include "Sales_item.h"
int main()
{
    // declare count int for counting same transactions
    int count = 0;
    Sales_item currentItem;
    // check if transaction
    if (std::cin >> currentItem){
        count += 1;
        // next transaction
        Sales_item transaction;
        while (std::cin >> transaction){
            // if item has the same isbn
            if (currentItem.isbn() == transaction.isbn()){
                count += 1;
            } else{
                // write previous isbn count to console
                std::cout << "#transactions of isbn " 
                    << currentItem.isbn() << ": " << count << std::endl;
                // reset tracker variables
                count = 1;
                currentItem = transaction;
            }
        }
        // final transaction item
        std::cout << "#transactions of isbn "
            << currentItem.isbn() << ": " << count << std::endl;
    }
    return 0;
}