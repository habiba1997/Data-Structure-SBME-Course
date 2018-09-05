#ifndef MEMBER1_HPP
#define MEMBER1_HPP
#include <iostream>
namespace DoubleQ
{
struct DoubleNode
{
    double data;
    DoubleNode *next;
};
struct DoubleQueueLL
{
    DoubleNode *front = nullptr;
    DoubleNode *back = nullptr;
};
bool isEmpty(DoubleQueueLL queue)
{
    return queue.back == nullptr;
}
void enqueue(DoubleQueueLL &queue, double newSample)
{
    if (isEmpty(queue))
    {
        queue.back = new DoubleNode{newSample, nullptr};
        queue.front = queue.back;
    }
    else
    {
        DoubleNode *newBack = new DoubleNode{newSample, nullptr};
        queue.back->next = newBack;
        queue.back = newBack;
    }
}
double dequeue(DoubleQueueLL &queue)
{
    if (!(isEmpty(queue)))
    {
        DoubleNode *oldFront = queue.front;
        double fifo = oldFront->data;
        queue.front = queue.front->next;
        delete oldFront;
        return fifo;
    }
    else
        std::cout << "enqueue first";
}
int size(DoubleQueueLL &queue)
{
    DoubleQueueLL temp = queue;
    int i = 0;
    while (temp.front != nullptr)
    {
        ++i;
        temp.front = temp.front->next;
    }
    return i;
}
double front(DoubleQueueLL &queue)
{
    return queue.front->data;
}
void clearQueue(DoubleQueueLL &queue)
{
    queue.back = nullptr;
    queue.front = nullptr;
}
}
namespace CharQ
{
struct CharNode
{
    char data;
    CharNode *next;
};
struct CharQueueLL
{
    CharNode *front = nullptr;
    CharNode *back = nullptr;
};
bool isEmpty(CharQueueLL queue)
{
    return queue.back == nullptr;
}
void enqueue(CharQueueLL &queue, char newSample)
{
    if (isEmpty(queue))
    {
        queue.back = new CharNode{newSample, nullptr};
        queue.front = queue.back;
    }
    else
    {
        CharNode *newBack = new CharNode{newSample, nullptr};
        queue.back->next = newBack;
        queue.back = newBack;
    }
}
char dequeue(CharQueueLL &queue)
{
    if (!(isEmpty(queue)))
    {
        CharNode *oldFront = queue.front;
        char fifo = oldFront->data;
        queue.front = queue.front->next;
        delete oldFront;
        return fifo;
    }
    else
        std::cout << "enqueue first";
}
int size(CharQueueLL &queue)
{
    CharQueueLL temp = queue;
    int i = 0;
    while (temp.front != nullptr)
    {
        ++i;
        temp.front = temp.front->next;
    }
    return i;
}
char front(CharQueueLL &queue)
{
    return queue.front->data;
}
void clearQueue(CharQueueLL &queue)
{
    queue.back = nullptr;
    queue.front = nullptr;
}
}
namespace IntQ
{
struct IntNode
{
    int data;
    IntNode *next;
};
struct IntQueueLL
{
    IntNode *front = nullptr;
    IntNode *back = nullptr;
};
bool isEmpty(IntQueueLL queue)
{
    return queue.back == nullptr;
}
void enqueue(IntQueueLL &queue, int newSample)
{
    if (isEmpty(queue))
    {
        queue.back = new IntNode{newSample, nullptr};
        queue.front = queue.back;
    }
    else
    {
        IntNode *newBack = new IntNode{newSample, nullptr};
        queue.back->next = newBack;
        queue.back = newBack;
    }
}
int dequeue(IntQueueLL &queue)
{
    if (!(isEmpty(queue)))
    {
        IntNode *oldFront = queue.front;
        int fifo = oldFront->data;
        queue.front = queue.front->next;
        delete oldFront;
        return fifo;
    }
    else
        std::cout << "enqueue first";
}
int size(IntQueueLL &queue)
{
    IntQueueLL temp = queue;
    int i = 0;
    while (temp.front != nullptr)
    {
        ++i;
        temp.front = temp.front->next;
    }
    return i;
}
int front(IntQueueLL &queue)
{
    return queue.front->data;
}
void clearQueue(IntQueueLL &queue)
{
    queue.back = nullptr;
    queue.front = nullptr;
}
}
#endif // MEMBER1_HPP
