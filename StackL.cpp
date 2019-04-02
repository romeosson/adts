#include "StackL.h"

int Stack::size()
{
	return data.size();
}

void Stack::push(int val)
{
	
	data.insert(val,1);
}

void Stack::pop()
{
	data.remove(1);
}

int Stack::top()
{
	if (data.size()>0)
		return data.getAtele(1);
	else
		cout << "Stack is empty"<<endl;
}

void Stack::clear()
{
	data.wipe();
}
