#include<iostream>
#include "llqueue.hpp"

int main ()
{
    LLQueues::DoubleQueue Q1;
    LLQueues::enqueue (Q1,5);
    LLQueues::enqueue (Q1,6);
    LLQueues::enqueue (Q1,7);
    LLQueues::enqueue (Q1,8);
    std::cout<<LLQueues::size(Q1)<<std::endl;
    std::cout<<LLQueues::dequeue(Q1)<<std::endl;
    std::cout<<LLQueues::dequeue(Q1)<<std::endl;
    std::cout<<LLQueues::isEmpty(Q1)<<std::endl;
    std::cout<<LLQueues::dequeue(Q1)<<std::endl;
    std::cout<<LLQueues::dequeue(Q1)<<std::endl;
    std::cout<<LLQueues::dequeue(Q1)<<std::endl;
    std::cout<<LLQueues::isEmpty(Q1)<<std::endl;
    std::cout<<LLQueues::front(Q1)<<std::endl;
    return 0;
}