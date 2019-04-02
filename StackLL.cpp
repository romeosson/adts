#include "StackLL.h"
#include <iostream>



class Stack::Node
{
	public:
		int data=0;
		Node* link = nullptr;
};
	
int Stack::size()
{
	return num_elements;
}

void Stack::push(int val)
{
	Node* newPtr = new Node{val};
	
	newPtr->link = frontPtr;
	frontPtr = newPtr;
	
	num_elements= num_elements+1;
}

void Stack::pop()
{
	Node* delPtr;
	delPtr = frontPtr;
	frontPtr = frontPtr->link;
	
	delete delPtr;
	num_elements=num_elements-1;
}

int Stack::top()
{
	if(size()>0)
		return frontPtr->data;
	else
		return 0;
}


void Stack::clear()
{
	while(size()!=0)
	{
		pop();
	}
}

Stack::~Stack()
{
	while(size()!=0)
	{
		pop();
	}
}
	
