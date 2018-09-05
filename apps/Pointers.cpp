#include <iostream>

int main()
{
    int x=9;
    int *y = &x;
    int *p=y;
    std::cout << x << std::endl;
    std::cout << &x << std::endl;

    std::cout << *p << std::endl;
    std::cout << p << std::endl;
        std::cout << *y << std::endl;
    std::cout << y << std::endl;
} 