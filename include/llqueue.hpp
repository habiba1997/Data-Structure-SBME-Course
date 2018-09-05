#ifndef MEMBER1_HPP
#define MEMBER1_HPP
#include <iostream>
namespace LLQueues
{
struct DoubleNode
{
	double data;
	DoubleNode *next;
};
struct DoubleQueue
{
	DoubleNode *front = nullptr;
	DoubleNode *rear = nullptr;
};
bool isEmpty(DoubleQueue queue)
{
	return queue.rear == nullptr;
}
void enqueue(DoubleQueue &queue, double data)
{
	if (isEmpty(queue))
	{
		queue.rear= new DoubleNode {data, nullptr};
		queue.front = queue.rear;
	}
	else
	{
		DoubleNode *oldRear = queue.rear;
		DoubleNode *newRear = new DoubleNode{data, oldRear};
		queue.rear = newRear;
	}
}
int size(DoubleQueue queue)
{
	int i=1;
	while (queue.rear->next != nullptr)	
	{
		i++;
		queue.rear=queue.rear->next;
	}
	return i;
}
double dequeue(DoubleQueue &queue)
{
	if (isEmpty(queue))
	{
		std::cout << "Queue is Empty";	
	}
	else
	{
		DoubleNode *oldFront= queue.front;
		queue.front->next=queue.rear;
		for (int i=0;i<size(queue);i++)
		{
			queue.front = queue.front->next;
		}
		return oldFront->data;
		delete oldFront;
	}
}
double front(DoubleQueue &queue)
{
	return queue.front->data;
}
void clearQueue (DoubleQueue &queue)
{
	queue.rear = nullptr;
	queue.front = nullptr;
}
}
#endif // MEMBER1_HPP
