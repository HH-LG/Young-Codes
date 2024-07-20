/*#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

template<typename T>
void sort(T* a, int size)
{
	for(int i=0;i<size-1;i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				T temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

class complex
{
	double real;
	double imag;
public:
	complex(double r=0,double i=0):real(r),imag(i){}
	bool operator<(complex a){return (real*real+imag*imag)<(a.real*a.real+a.imag*a.imag);}
	bool operator>(complex a){return (real*real + imag * imag) > (a.real*a.real + a.imag*a.imag);}
	friend ostream& operator<<(ostream& out,complex a){cout<<"("<<a.real<<","<<a.imag<<")" ;return out;}
	double abs(){return sqrt(real*real + imag * imag);}
	void set(double r,double i){real=r;imag=i;}
};

int main()
{
	srand(unsigned(time(NULL)));
	complex a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i].set(rand()%200/10.0-10, rand() % 200 / 10.0 - 10);
	}
	sort(a,10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << "\t" << a[i].abs() << endl;
	}
}*/
