#include <iostream>

struct CharStack1000
{
    int buffer[1000];
    int top = -1;
    // Default value of top is -1 when declaring the stack.
    // -1 means our stack is empty
};

void push(CharStack1000 &stack, int newElement)
{
    ++stack.top;
    stack.buffer[stack.top] = newElement;
}

char pop(CharStack1000 &stack) //Pop method return the popped value
{
    int lifo = stack.buffer[stack.top];
    --stack.top;
    return lifo;
}

int size(CharStack1000 &stack) //top + 1 cuz top is equal to -1 as a start
{
    return (stack.top + 1); // simple
}

bool isEmptyStack(CharStack1000 &stack) // this is a great and faster way to implememnt stack
{
    return (stack.top == -1);
}

int main()
{
    CharStack1000 first;
    for (int i = 0; i < 15; ++i)
    {
        push(first, i);
        // std::cout << size(first) << std::endl;
    }
    int y = 90 ;
    std::cout << size (first) << std::endl;

    push(first, 20);
    push(first, 10);
    push(first, y);

    std::cout << size (first) << std::endl;

    for (int i = 0; i < 18 ; ++i) // take care change i condition when u push variables cuz stack beacame larger by 1 
    {
        std::cout << first.buffer[i] << std::endl;
    }
    int x = pop(first);
    std::cout << x << std::endl;

    std::cout << size (first) << std::endl;
    
}
