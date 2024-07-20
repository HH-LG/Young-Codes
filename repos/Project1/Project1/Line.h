#pragma once
#include<iostream>
#include"Point.h"
using namespace std;
class Line
{
	Point A;
	Point B;
public:
	Line(Point &A, Point &B);
	
	~Line();
	
	double len();
	
};