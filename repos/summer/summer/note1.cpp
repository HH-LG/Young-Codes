/*#include <iostream>
using namespace std;
class Cube
{
private:
	double side;
public:
	Cube(double aSide);
	void TestFunction(Cube aCube);
};
Cube::Cube(double aSide) :side{ aSide }
{
	cout << "Call the constructor to set side to " << aSide << endl;
}
void Cube::TestFunction(Cube aCube)
{
	cout << aCube.side << endl;
}
void main()
{
	Cube c1(7.0);
	Cube c2(3.0);

	c1.TestFunction(Cube(50.0));

	//隐式类型转换
	//相当于c1.TestFunction(Cube(50));
	//从而调用Cube(double aSide);
	//去掉转换机制用explicit

	c1.TestFunction(c2);
}
*/
/*result:
Call the constructor to set side to 7
Call the constructor to set side to 3
Call the constructor to set side to 50
50
3
*/