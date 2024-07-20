#include"Stack.h"

template<class T>
Stack<T>::Stack()
{
	top=0;
}

template<class T>
bool Stack<T>::push(T x)
{
	if(full())
		return false;
	data[top++]=x;
	return true;
}

template<class T>
bool Stack<T>::pop()
{
	if(empty())
		return false;
	top--;
	return true;
}

template<class T>
bool Stack<T>::empty()
{
	return top==0;
}

template<class T>
bool Stack<T>::full()
{
	return top==maxsize;
}

template<class T>
T Stack<T>::gtop()
{
	if(empty())
		return 0;
	return data[top-1];
}