// Exercise 1.13: Rewrite the exercises from 1.4.1 using for loops. 
/* Exercise 1.4.2-1.11: Write a program that prompts the user for two integers. 
 * Print each number in the range specified by those two integers. 
 */
#include <iostream>
int main(){
    int x = 0; int y = 0;
    std::cout << "Input two integers: ";
    std::cin >> x >> y;

    for (int i = x; i <= y; ++i)
        std::cout << i << " ";
    
    std::cout << std::endl;
    return 0;
}