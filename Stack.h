// Stack.h
#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;
class Stack
{
public:
Stack();
Stack(int);
void push(int);
int pop();
bool empty();
bool full();
void print();
int find_max();
private:
int* stack;
int top,max_stack;
};
#endif
