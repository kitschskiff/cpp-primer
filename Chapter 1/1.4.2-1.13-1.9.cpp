// Exercise 1.13: Rewrite the exercises from 1.4.1 using for loops. 
// Exercise 1.4.2-1.9: Write a program that uses a >for< to sum the numbers from 50 to 100. 
#include <iostream>
int main(){
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
        sum += i;
    std::cout << "Sum of the numbers from 50 to 100 inclusive is " << sum << std::endl;
    return 0;
}
