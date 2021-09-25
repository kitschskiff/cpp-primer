//Invalid for loop using unsigned
#include <iostream>
int main()
{
    //WRONG: u can never be less than 0 as it is of type unsigned. The condition will always succeed. 
    for (unsigned u = 10; u >= 0; --u)
        std::cout << u << std::endl;
    return 0;
}