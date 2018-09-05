#ifndef ARRAYS_HPP
#define ARRAYS_HPP

#include <iostream>
#include "mathematics.hpp"

namespace array
{

int countCharacter(char *basePointer, int size, char query)
{
    int count = 0;
    for (int i = 0; i < size; ++i)
    {
        if (basePointer[i] == query)
        {
            count++; // or count = count +1 ; or count+=1
        }
    }
    return count;
}

void printAll(double *base, int arraySize)
{
    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << base[i] << std ::endl;
    }
}

double maxArray(double *base, int arraySize)
{
    double max = base[0];
    for (int i = 1; i < arraySize; ++i)
    {
        if (max < base[i])
        {
            max = base[i];
        }
    }
    return max;
}

double minArray(double *base, int arraySize)
{
    double min = base[0];
    for (int i = 1; i < arraySize; ++i)
    {
        if (base[i] < min)
        {
            min = base[i];
        }
    }

    return min;
}
double meanArray(double *base, int arraySize)
{
    double sum = 0;
    for (int i = 0; i < arraySize; ++i)
    {
        sum = sum + base[i];
    }
    return sum / arraySize;
}

double varianceArray(double *base, int arraySize)
{
    double mean = meanArray(&base[0], arraySize);
    double sum = 0;
    for (int i = 0; i < arraySize; ++i)
    {
        double derv = mean - base[i];
        sum = sum + mathematics::square(derv);
    }
    return sum / arraySize;
}
struct DoubleArray
{
    double *base; //the base pointer
    int size;     //the size of Double array.
};
struct CharacterArray
{
    char *base; //the base pointer
    int size;   //the size of Character array.
};

void printAll(DoubleArray array)
{
    printAll(&array.base[0], array.size);
}

double maxArray(DoubleArray array)
{
    return maxArray(&array.base[0], array.size);
}

double minArray(DoubleArray array)
{
    return minArray(&array.base[0], array.size);
}

double meanArray(DoubleArray array)
{
    return meanArray(&array.base[0], array.size);
}

double varianceArray(DoubleArray array)
{
    return varianceArray(&array.base[0], array.size);
}
}
#endif // ARRAYS_HPP
