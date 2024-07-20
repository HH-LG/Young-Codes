#pragma once
#include<iostream>
using namespace std;
class Point
{
	double x;
	double y;
public:
	Point(double x, double y);
	
	Point(void);
	
	~Point();
	
	void setx(double x);
	
	void sety(double y);
	
	double getx();
	
	double gety();
	
	double distance(Point &E);
	
};
