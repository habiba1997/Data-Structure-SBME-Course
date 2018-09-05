#include "mathematics.hpp" // for mathematics::heron
#include <iostream>        // for std::cout
#include <algorithm>       // for std::atof
#include <cstdlib>

double calculation(double a, double b, char operation);
double heron(double a, double b, double c);

int main(int argc, char **argv)
{
    double aa = std ::atof(argv[1]);
    double bb = std ::atof(argv[2]);
    double cc = std ::atof(argv[3]);
    std::cout << mathematics::heron(aa, bb, cc) << std::endl;

    mathematics::Triangle t = {0, 0, 0};
    // I don't understand why in the assignment did we initialize a = b = c = 0 ?? asthe line above

    t = {.a = aa, .b = bb, .c = cc}; // my way of initializing struct with arguments taken from user while running file ( much easier way that std::cin)

    std::cout << mathematics::heron(t) << std::endl;
}