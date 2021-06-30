#include <iostream>
int main() {
    std::cout << "Enter two numbers: ";
    std::cout << std::endl;
    int a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << "The product of ";
    std::cout << a;
    std::cout << " and ";
    std::cout << b;
    std::cout << " is ";
    std::cout << a*b;
    return 0;
}