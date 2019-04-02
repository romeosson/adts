#include "StackV.h"
#include <iostream>

int Stack::size()
{
	return data.size();
}

void Stack::push(int val)
{
	data.push_back(val);
}

void Stack::pop()
{
	data.pop_back();
}

int Stack::top()
{
	if(data.size()>0)
		return data.back();
	else
	cout<<"Empty stack"<<endl;
}

void Stack::clear()
{
	for (int i=0; i<=data.size();i++)
	{
		data.pop_back();
	}
}
