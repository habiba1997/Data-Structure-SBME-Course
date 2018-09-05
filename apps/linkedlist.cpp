#include <iostream>

struct Node
{
    char data;
    Node *next = nullptr;
};

struct CharLinkedList
{
    Node *front = nullptr;
    Node *back = nullptr;
};

void printLL(Node *front)
{
    Node *current = front; //so no changes would occur in front
    while (current != nullptr) //because current in this case equal current .next
    {   
        std::cout << current->data << std::endl;
        current = current->next;
    }
}

/*If we only have an access to the head of the LL, or in other words, if we don’t have a tail, 
    and need to insert an element to the back, then we have to start iterating from the front until 
    we reach the last element in the LL */

void insertToList(CharLinkedList &list, char newElement)
{
    Node *pon = new Node;
    pon->data = newElement;
    pon->next = nullptr;

    if (list.front == nullptr)
    {
        list.front=pon;
        list.back = list.front;
    }
    else
    {    
        while (list.back->next != nullptr)
        {
            list.back = list.back->next;
        }
    list.back->next = pon;
    }
}

int main()
{
    CharLinkedList ll;
    insertToList(ll, 'h');
    insertToList(ll, 'a');
    insertToList(ll, 'b');
     insertToList(ll,'i');
    insertToList(ll, 'b');
    insertToList(ll, 'a');
    printLL(ll.front);
}
