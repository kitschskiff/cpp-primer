// Exercise 1.16: Write your own version of a program that prints the sum of a set of integers read from cin. 
#include <iostream>
int main(){
    std::cout << "Cashier auto-receipt... Input cost of each item individually." << std::endl; // #immersion!
    int sum = 0, value = 0;
    while (std::cin >> value){
        sum += value; // adds value to sum. 
        std::cout << "Added item of cost $" << value << ". Current total: " << sum << std::endl; // Prints current sum to console. 
    }
    std::cout << "Sum total: " << sum << std::endl;
    return 0;
}