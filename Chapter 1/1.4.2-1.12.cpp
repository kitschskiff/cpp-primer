// Exercise 1.12: What does the following for loop do? What is the final value of sum?
#include <iostream>
int main(){
    int sum = 0;
    for (int i = 100; i <= 100; ++i)
        sum += i;
    std::cout << sum << std::endl;
    return 0;
}
/* The above for loop defines sum is equal to zero.
 * It then defines i as equal to 100, and for i is less than or equal to 100, increment i positively by one.
 * The loop will break after the first execution of the for's body, as the header only allows for one possible execution. 
 * sum should total 100. 
 */