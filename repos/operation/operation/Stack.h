#pragma once
const int maxsize=20;
template<class T>
class Stack
{
	T data[maxsize];
	int top;
public:
	Stack();
	bool push(T);
	bool pop();
	T gtop();
	bool full();
	bool empty();
};