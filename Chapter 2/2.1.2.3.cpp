//Expressions involving unsigned types
#include <iostream>
int main()
{
    unsigned u = 10;
    int i = -42;
    std::cout << i + i << std::endl; //prints -84
    std::cout << u + i << std::endl; //if 32-bit ints, prints 4294967264
    std::cout << i + u << std::endl; //does order of operands matter in arithmetic type conversion?
    //Answer: No. Both operands are converted to type unsigned. 
    return 0;
}