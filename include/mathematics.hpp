#ifndef MATHEMATICS_HPP
#define MATHEMATICS_HPP
#include <iostream>
#include <cmath> // for std::sqrt

namespace mathematics
{

double careturnlculation(double a, double b, char operation)
{
    switch (operation)
    {
    case '+':
    {
        return a + b;
    }
    break;

    case '-':
    {
        return a - b;
    }
    break;
    case '*':
    {

        return a * b;
    }
    break;
    case '/':
    {
        return a / b;
    }
    break;
    default:
    {
    }
    break;
    }
}

double heron(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    s = s * (s - a) * (s - b) * (s - c);
    if (s < 0)
    {
        std::cout << "error negative under Square Root" << std::endl;
        return -1; // the -1 represent a negative under root which is not possible
    }
    else
    {
        return std::sqrt(s);
    }
}

double square(double a)
{
    return a * a;
}
struct Triangle
{
    double a;
    double b;
    double c;
};
double heron(Triangle t)
{
    return heron(t.a, t.b, t.c);
}
//When I placed the above heron function  ( that take an object of triangle as a parameter ) 1st before calculations an error occured BUT when i placed it at the END the compiler compiled the file normally ; I don't understand why
}

#endif // MATHEMATICS_HPP
