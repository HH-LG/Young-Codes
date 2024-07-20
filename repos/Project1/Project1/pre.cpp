#include<iostream>
#include<math.h>
#include"Line.h"
#include"Point.h"
using namespace std;
int main()
{
	Point A,B(3.0,4.0);
	cout<<"distance between A and B :"<<A.distance(B)<<endl;
	Line AB(A,B);
	cout<<"len of AB:"<<AB.len()<<endl;
}