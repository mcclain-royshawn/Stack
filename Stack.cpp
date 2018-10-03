//Stack.cpp
#include"Stack.h"

Stack::Stack():top(-1), max_stack(5), stack(new int[5])
{
}
Stack::Stack(int max): max_stack(max),top(-1)
{
stack=new int[max_stack];
}
bool Stack::full()
{
return (top==max_stack-1);
}
void Stack::push(int data)
{
 if(!full())
 {
 top++;
 stack[top]=data;
 }
 else
 {
 cout<<"The Stack is Full!\n";
 system("exit");
 }
return;
}
bool Stack::empty()
{
return (top==-1);
}
int Stack::pop()
{
int get_data;
if(!empty())
{
get_data=stack[top];
top--;
}
else
{
cout<<"The Stack is Empty!\n";
 system("exit");
}
return get_data;
}
void Stack::print()
{
	cout<<"The Items in this Stack are: "<<endl;
	for (int i=top;i>=0;i--)
	{
		cout<<"Item "<<stack[i]<<endl;
	}
}
int Stack::find_max()
{
	//lv
	int i=0;
	int max=stack[i];
	
	for (int i=0;i<max_stack;i++)
	{
		
		if(stack[i]>max)
		{
		max=stack[i];
		
		}
	}
	return max;
}
