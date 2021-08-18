/* Exercise 1.11: Write a program that prompts the user for two integers. 
 * Print each number in the range specified by those two integers. 
 */
#include <iostream>
int main(){
    int x = 0, y = 0; // integers from client input
    std::cout << "Please provide a minimum and maximum." << std::endl;
    std::cin >> x >> y;
    // get min and max
    int max = std::max(x,y);
    int min = std::min(x,y);
    int val = min;
    
    while (val<=max){
        std::cout << val << std::endl;
        ++val;
    }
    return 0;
}