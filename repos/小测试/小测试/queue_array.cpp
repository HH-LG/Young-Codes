/*#include<iostream>
#include<time.h>
using namespace std;

const int maxsize=10; 

class queue
{
	float data[maxsize];
	int front;
	int rear;
	int num;
public:
	queue();
	~queue();
	bool empty();
	bool full();
	void Add(float);
	float bring();

};

queue::queue()
{
	front=rear=0;
}

 bool queue::empty()
{
	 return num==0;
}

 bool queue::full()
 {
	 return num==maxsize;
 }

 void queue::Add(float a)
 {
	 if (full())
	 {
		 cout<<"the queue is full!"<<endl;
		 return;
	 }
	 cout<<a<<endl;
	 rear++;
	 rear=rear%maxsize;
	 data[rear]=a;
	 num++;
 }

 float queue::bring()
 {
	 if (empty())
	 {
		 cout<<"the queue is empty"<<endl;
		 return -1;
	 }
	 front++;
	 front%=maxsize;
	 num--;
	 return data[front];
 }

 queue::~queue()
 {
	 cout<<"the queue is destructing"<<endl;
 }

int main()
{
	queue q1;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < maxsize; i++)
	{
		q1.Add(rand()%20);
	}

	for (int i = 0; i < maxsize; i++)
	{
		cout<<q1.bring()<<endl;
	}
}*/