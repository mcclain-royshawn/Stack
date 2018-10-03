#include"Stack.h"

int main()
{
	//local variables:
	Stack stack1(3);
	int val_1,val_2,val_3;
	
	//code:
	cout<<"Enter the first value for the stack: ";
	cin>>val_1;
	stack1.push(val_1);	
	cout<<"Enter the second value for the stack: ";
	cin>>val_2;
	stack1.push(val_2);
	cout<<"Enter the third value for the stack: ";
	cin>>val_3;
	stack1.push(val_3);
	stack1.print();
	system("pause");
	cout<<"The Max in this stack is: "<<stack1.find_max()<<endl;
	stack1.print();
	system("pause");
	stack1.pop();
	stack1.print();
	
	return 0;
}
