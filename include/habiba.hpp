#ifndef HABIBA_HPP
#define HABIBA_HPP
#include <iostream>
/*
void insertFront(intLL &list, int newElement); //done
void insertBack(intLL &list, int newElement);  //done
void removeFront(intLL  &list); //done
void removeBack(intLL &list); //done
void removeAt(intLL &list, int index); //done
int front(intLL &list); //done
int back(intLL &list); //done
int getAt(intLL &list, int index); //done
bool isEmpty(intLL &list);  //done
int size(intLL &list);      //done
void printAll(intLL &list); //done
void clear(intLL &list);    //done
*/
namespace habiba
{
struct intNode
{
    int data;
    intNode *next;
};

struct intLL
{
    intNode *front = nullptr;
};

/*int endlist (intLL &list , beba::intNode current) 
{
    while (current->next != nullptr) //loop to reach last element
        {
            current = current->next;
        }
    return current;
} 
I tried to do a function that loop and return end node of linked list because i called it many times 
yet i haven't reached to the right way of writing it
*/

void insertFront(intLL &list, int newElement)
{
    intNode *current = list.front; //front position never changes it always point to 1st element

    if (current == nullptr)
    {
        current = new intNode{newElement, nullptr};
        list.front = current; //why didn't it change as it took address so its supposed to be
        //changed by pointer
    }
    else
    {

        current = new intNode{newElement, list.front};
        list.front = current;
    }
}

void insertBack(intLL &list, int newElement) //Note to self : take care of what is in what
{

    intNode *current = list.front; //front position never changes it always point to 1st element

    if (current == nullptr)
    {
        current = new intNode{newElement, nullptr};
        list.front = current; //why didn't it change as it took address so its supposed to be
        //changed by pointer
    }
    else
    {
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = new intNode{newElement, nullptr};
    }
}

bool isEmpty(intLL &list)
{
    return (list.front-> next == nullptr);
}

void clear(intLL &list) 
{
    intNode* current = list.front;
    intNode* temp;
    while (current->next != nullptr) //because current in this case equal current .next
    {
        temp = current;
        current = current->next;
        delete temp;
    } 
    list.front-> next =nullptr;
   // it still doesn't want to clear elements when declaring at end list.front->nullptr; 
}

int size(intLL &list)
{
    int i = 0;
    for (intNode *current = list.front; current != nullptr; current = current->next)
    {
        ++i;
    }

    return i;
}

void printAll(intLL &list)
{
    intNode *current = list.front;   //so no changes would occur in front
    while (current->next != nullptr) //because current in this case equal current .next
    {
        std::cout << current->data << std::endl;
        current = current->next;
    }
    std::cout << current->data << std::endl;
    std::cout << "done" << std::endl;
}

int front(intLL &list)
{
    return list.front->data;
}

int back(intLL &list)
{
    intNode *previous;
    intNode *current = list.front;
    while (current != nullptr) //because current in this case equal current .next
    {
        previous = current;
        current = current->next;
    }
    return previous->data;
}

int getAt(intLL &list, int k)
{
    int i = 1;
    intNode *current = list.front;
    while (k != i) //because current in this case equal current .next
    {
        current = current->next;
        ++i;
    }
    return current->data;
}

void removeFront(intLL &list)
{
    intNode *current = list.front;
    list.front = list.front->next;
    delete current;
}

void removeBack(intLL &list)
{
    intNode *current = list.front;
    while (current != nullptr) //because current in this case equal current .next
    {
        current = current->next;
    }
    delete current;
}

void removeAt(intLL &list, int index)
{
    int i = 1;
    intNode *previous;
    intNode *current = list.front;
    while (index != i) //because current in this case equal current .next
    {
        previous = current;
        current = current->next;
        i++;
    }
    previous->next = current->next;
    delete current;
}
}

namespace Character
{

struct charNode
{
    char data;
    charNode *next;
};

struct charLL
{
    charNode *front = nullptr;
};

void insertFront(charLL &list, char newElement)
{
    charNode *current = list.front;

    if (current == nullptr)
    {
        current = new charNode{newElement, nullptr};
        list.front = current;
    }
    else
    {
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = new charNode{newElement, nullptr};
    }
}

void insertBack(charLL &list, char newElement)
{
    charNode *current = new charNode{newElement, list.front};
    list.front = current;
}

bool isEmpty(charLL &list)
{
    return (list.front == nullptr);
}

void clear(charLL &list)
{
    charNode *current = list.front;
    charNode *temp;
    while (current != nullptr)
    {
        temp = current;
        current = current->next;
        delete temp;
    }
    list.front = nullptr;
}

char size(charLL &list)
{
    int i = 0;
    for (charNode *current = list.front; current != nullptr; current = current->next)
    {
        ++i;
    }

    return i;
}

void printAll(charLL &list)
{
    charNode *current = list.front;
    while (current != nullptr)
    {
        std::cout << current->data << std::endl;
        current = current->next;
    }
    std::cout << "done" << std::endl;
}

char front(charLL &list)
{
    return list.front->data;
}

char back(charLL &list)
{
    charNode *previous;
    charNode *current = list.front;
    while (current != nullptr)
    {
        previous = current;
        current = current->next;
    }
    return previous->data;
}

char getAt(charLL &list, int k)
{
    int i = 1;
    charNode* current = list.front;
    while (k != i) //because current in this case equal current .next
    {
        current = current->next;
        ++i;
    }
    return current->data;
}

void removeFront(charLL &list)
{
    charNode *current = list.front;
    list.front = list.front->next;
    delete current;
}

void removeBack(charLL &list)
{
    charNode *current = list.front;
    while (current != nullptr)
    {
        current = current->next;
    }
    delete current;
}

void removeAt(charLL &list, int index)
{
    int i = 1;
    charNode *previous;
    charNode *current = list.front;
    while (index != i)
    {
        previous = current;
        current = current->next;
        i++;
    }
    previous->next = current->next;
    delete current;
}
}

namespace Double
{

struct doubleNode
{
    double data;
    doubleNode *next;
};

struct doubleLL
{
    doubleNode *front = nullptr;
};

void insertFront(doubleLL &list, double newElement)
{
    doubleNode *current = list.front;

    if (current == nullptr)
    {
        current = new doubleNode{newElement, nullptr};
        list.front = current;
    }
    else
    {
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = new doubleNode{newElement, nullptr};
    }
}

void insertBack(doubleLL &list, double newElement) //Note to self : take care of what is in what
{
    doubleNode *current = new doubleNode{newElement, list.front};
    list.front = current;
}

bool isEmpty(doubleLL &list)
{
    return (list.front == nullptr);
}

void clear(doubleLL &list)
{
    doubleNode *current = list.front;
    doubleNode *temp;
    while (current != nullptr) //because current in this case equal current .next
    {
        temp = current;
        current = current->next;
        delete temp;
    }
    list.front = nullptr;
}

double size(doubleLL &list)
{
    int i = 0;
    for (doubleNode *current = list.front; current != nullptr; current = current->next)
    {
        ++i;
    }

    return i;
}

void printAll(doubleLL &list)
{
    doubleNode *current = list.front; //so no changes would occur in front
    while (current != nullptr)        //because current in this case equal current .next
    {
        std::cout << current->data << std::endl;
        current = current->next;
    }
    std::cout << "done" << std::endl;
}

double front(doubleLL &list)
{
    return list.front->data;
}

double back(doubleLL &list)
{
    doubleNode *previous;
    doubleNode *current = list.front;
    while (current != nullptr) //because current in this case equal current .next
    {
        previous = current;
        current = current->next;
    }
    return previous->data;
}

double getAt(doubleLL &list, int k)
{
    int i = 1;
    doubleNode *current = list.front;
    while (k != i) //because current in this case equal current .next
    {
        current = current->next;
        ++i;
    }
    return current->data;
}

void removeFront(doubleLL &list)
{
    doubleNode *current = list.front;
    list.front = list.front->next;
    delete current;
}

void removeBack(doubleLL &list)
{
    doubleNode *current = list.front;
    while (current != nullptr) //because current in this case equal current .next
    {
        current = current->next;
    }
    delete current;
}

void removeAt(doubleLL &list, int index)
{
    int i = 1;
    doubleNode *previous;
    doubleNode *current = list.front;
    while (index != i) //because current in this case equal current .next
    {
        previous = current;
        current = current->next;
        i++;
    }
    previous->next = current->next;
    delete current;
}
}

#endif