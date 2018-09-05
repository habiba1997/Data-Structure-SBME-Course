#ifndef MEMBER5_HPP
#define MEMBER5_HPP
#include<iostream>
namespace CharStll
{
struct CharNode
{
    char data;
    CharNode *next;
};
struct CharStackLL
{
    CharNode *front = nullptr;
};
int size(CharStackLL &stack)
{
    CharStackLL temp = stack;
    int i = 0;
    while (temp.front != nullptr)
    {
        ++i;
        temp.front = temp.front->next;
    }
    return i;
}
bool isEmpty(CharStackLL &stack)
{
    return stack.front == nullptr;
}
void push(CharStackLL &stack, char data)
{
    CharNode *newNode = new CharNode{data, stack.front};
    stack.front = newNode;
}
char pop(CharStackLL &stack)
{
    if (stack.front)
    {
        char lifo = stack.front->data;
        CharNode *oldFront = stack.front;
        stack.front = stack.front->next;
        delete oldFront;
        return lifo;
    }
    else
    {
        exit(1);
    }
}
char front(CharStackLL &stack)
{
    return stack.front->data;
}
void clear(CharStackLL &stack)
{
    stack.front = nullptr;
}
}
namespace IntegerStLL
{
struct IntNode
{
    int data;
    IntNode *next;
};
struct IntStackLL
{
    IntNode *front = nullptr;
};
int size(IntStackLL &stack)
{
    IntStackLL temp = stack;
    int i = 0;
    while (temp.front != nullptr)
    {
        ++i;
        temp.front = temp.front->next;
    }
    return i;
}
bool isEmpty(IntStackLL &stack)
{
    return stack.front == nullptr;
}
void push(IntStackLL &stack, int data)
{
    IntNode *newNode = new IntNode{data, stack.front};
    stack.front = newNode;
}
int pop(IntStackLL &stack)
{
    if (stack.front)
    {
        char lifo = stack.front->data;
        IntNode *oldFront = stack.front;
        stack.front = stack.front->next;
        delete oldFront;
        return lifo;
    }
    else
    {
        exit(1);
    }
}
int front(IntStackLL &stack)
{
    return stack.front->data;
}
void clear(IntStackLL &stack)
{
    stack.front = nullptr;
}
}
#endif // MEMBER5_HPP
