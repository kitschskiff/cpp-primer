// Reading an unknown number of inputs
#include <iostream>
int main(){
    int sum = 0, value = 0;
    // read until end-of-file, calculating a running total of all values read
    while (std::cin >> value)
        sum += value; // equivalent to sum = sum + value
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
// condition expression std::cin >> value returns left operand, std::cin. 
// condition yields false if end-of-file or if input isn't of type integer. 
// entering end-of-file keystroke: ctrl+z enter on windows, ctrl+d return on unix/macosx. 
