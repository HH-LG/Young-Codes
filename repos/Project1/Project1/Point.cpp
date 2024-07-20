#include"Point.h"
Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}
Point::Point(void)
{
	this->x = 0;
	this->y = 0;
}
Point::~Point()
{
	cout << "Point delete!" << endl;
}
void Point::setx(double x)
{
	this->x = x;
}
void Point::sety(double y)
{
	this->y = y;
}
double Point::getx()
{
	return x;
}
double Point::gety()
{
	return y;
}
double Point::distance(Point &E)
{
	return sqrt((E.getx() - this->getx())*(E.getx() - this->getx()) + (E.gety() - this->gety())*(E.gety() - this->gety()));
}