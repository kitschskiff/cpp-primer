// Exercise 1.19: Revise the program you wrote for the exercises in 1.4.1 that printed a range of numbers
// so that it handles input in which the first number is smaller than the second. 
#include <iostream>
int main()
{ // introduction of new style... function block statement opening curly brace placed on new line after function declaration. 
    int sum = 0, val = 0; // define sum and val
    int min = 0, max = 0; // define min and max
    
    std::cout << "Input min and max for range sum (order not necessary)." << std::endl;;
    std::cin >> min >> max; // get min and max from player input
    if (min>max){ // if min is greater than max
        std::swap(min, max); // then swap variables min and max
    }
    val = min; // set val to min value
    while (val <= max){ // while min is less than or equal to max
        sum += val; // add val to sum
        ++val;      // add one to val
    }
    std::cout << "The sum of " << min << " to " << max
            << " inclusive is " << sum;
    return 0;
}