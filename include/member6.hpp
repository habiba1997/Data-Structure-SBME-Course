#ifndef MEMBER6_HPP
#define MEMBER6_HPP
#include<iostream>
namespace
{
struct Node
{
    double data;
    Node* next;
};
struct DoubleStack
{
    Node stack;
    int *top = nullptr;
};
bool isEmpty( DoubleStack &stack )
{
    return stack.top == nullptr;
}
void push( DoubleStack &stack , double data )
{
    if(isEmpty)
    {
        Node *newTop = new Node {data,nullptr};
        stack.top = newTop;
    }
    else
    {
        Node *oldTop = stack.top;
        Node *newTop = new Node {data,nullptr};
        //stack.top->next=newTop;
        oldTop.top->next=newTop;
        stack.top=newTop;
    }
}
/*double pop( DoubleStack &stack );*/
double front( DoubleStack &stack )
{
    return stack.stack->data;
}
/*bool isEmpty( DoubleStack &stack );
int size( DoubleStack &stack );*/
void clear( DoubleStack &stack )
{
    stack.top=nullptr;
}
}
#endif  MEMBER6_HPP
int main()
{
    DoubleStack S ;
    std::cout<<isEmpty(S);
    std::cout<<S.top<<std::endl;
    std::cout<<S.top->next<<std::endl;
    push(S,8) ;
    std::cout<<S.top<<std::endl;
    std::cout<<S.top->next<<std::endl;
}