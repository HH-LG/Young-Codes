#include"Line.h"
#include"Point.h"
	Line::Line(Point &A, Point &B)
	{
		this->A = A;
		this->B = B;
	}
	Line::~Line()
	{
		cout << "Line delete!" << endl;
	}
	double Line::len()
	{
		return A.distance(B);
	}
