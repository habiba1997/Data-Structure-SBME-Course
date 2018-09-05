#ifndef BASANTMOHAMED_HPP
#define BASANTMOHAMED_HPP

struct intstack
{
    int array[10];
    int top =-1;
};
void push(intstack &s, int newelement)
{

    ++s.top;
    s.array[s.top] = newelement;
}

int pop(intstack &s)
{
    int lifo = s.array[s.top--];
    return lifo;
}
int size(intstack &s)
{
    return (s.top + 1);
}
bool isEmptyStack(intstack &s)
{
    return (s.top == -1);
}
void clear(intstack &s)
{
    s.top =-1;
}

int front(intstack &s)
{
    return s.array[s.top];
}
struct charstack
{
    char array[10];
    int top = -1;
};
void push(charstack &s, char newelement)
{
    ++s.top;
    s.array[s.top] = newelement;
}

char pop(charstack &s)
{
    int lifo = s.array[s.top];
   s.top--;
    return lifo;
}
char size(charstack &s)
{
    return (s.top +1);
}
bool isEmptyStack(charstack &s)
{
    return (s.top == -1);
}

void clear(charstack &s)
{
    s.top = -1;
}
char front(charstack &s)
{
    return s.array[s.top];
}
#endif // MEMBER4_HPP