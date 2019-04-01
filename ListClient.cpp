#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 int opt;
 char again;
 int pos, num;
 
 while(again=='y')
 {
	cout << "Menu"<<endl;
	cout<< "Option 1: Insert into list"<<endl;
	cout<< "Option 2: Remove element from list"<<endl;
	cout<< "Option 3: Show element at a location"<<endl;
	cout<< "Option 4: Remove all elements in list"<<endl;
	cout<< "Option 5: Display list"<<endl;
	cout<<"Enter option->";
	cin>>opt;
	
	if (opt==1)
	{
		cout<<"What value and at what position?"<<endl;
		cin>> num >> pos;
		L1.insert(num,pos);
	}
	
	if(opt==2)
	{
		cout<<"What position value do you want to remove"<<endl;
		cin>>pos;
		L1.remove(pos);
	}
	if(opt==3)
	{
		cout<<"What position value would you like to see?"<<endl;
		cin>>pos;
		L1.getAtele(pos);
	}
	if(opt==4)
	{
		L1.wipe();
		cout<<"List has been wiped"<<endl;
	}
	if(opt==5)
	{
		L1.display();
	}
	cout << endl<< endl;
	cout<< "Exit program? ('y' for yes, 'n' for no)"<<endl;
	cin>>again;
		
}
 
}
