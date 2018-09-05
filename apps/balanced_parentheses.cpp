#include <iostream>
#include "M5.hpp"
#include <algorithm>
#include <string>
struct chararray
{
    char *base;
    int size;
};
void CheckBalancedParentheses(chararray pa)
{
    CharStll::CharStackLL LS;
    for (int i = 0; i < pa.size; ++i)
    {
        if (pa.base[i] == '(')
        {
            CharStll::push(LS, pa.base[i]);
        }
        else if (pa.base[i] == ')')
        {
            if (!(CharStll::isEmpty(LS)))
            {
                CharStll::pop(LS);
            }
        }
    }
    if (CharStll::isEmpty(LS))
    {
        std::cout << "balanced" << std::endl;
    }
    else
        std::cout << "unbalanced" << std::endl;
}
//main will be edited soon
int main(/*int argc, char **argv*/)
{
    char ar[]={'(',')','(','(','(',')'};
    chararray arr{&ar[0],6};
    CheckBalancedParentheses(arr);
    return 0;
}

