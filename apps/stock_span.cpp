#include "basantmohamed.hpp"
#include <iostream>

int main()
{
    int i;
    int j = 6;
    int arrayp[] = {10, 4, 8, 9, 3, 20}; //contains the daily prices of the stocks
    int arrays[j];                       //store the span of the stock

    intstack spanstock;
    for (int i = 0; i < j; ++i)
    {
        if (isEmptyStack(spanstock) == 1)
        {
            arrays[i] = i + 1;
            push(spanstock, i);
            i++;
        }

        while (arrayp[i] > arrayp[spanstock.top])
        {
            pop(spanstock);
            if (isEmptyStack(spanstock) == 1)
            {
                arrays[i] = i + 1;
                push(spanstock, i);
                i++;
                break;
            }
        }

        if (arrayp[i] < arrayp[spanstock.top])
        {
            arrays[i] = i - spanstock.top;
        }
        push(spanstock, i);
    }

    for (int i = 0; i < j; ++i)
    {
        std::cout << arrays[i] << std::endl;
    }
}
