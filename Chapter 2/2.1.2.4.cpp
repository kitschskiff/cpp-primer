//Expressions involving unsigned types pt.2
#include <iostream>
int main()
{
    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << std::endl; //ok: result is 32
    std::cout << u2 - u1 << std::endl; //ok: but the result will wrap around
    return 0;
}
