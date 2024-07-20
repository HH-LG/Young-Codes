/*#include<iostream>
#include<math.h>
using namespace std;


template <typename T>
class point
{
	T x,y;
public:
	point(T x,T y):x(x),y(y){}
	T getx(){return x;}
	T gety(){return y;}
	template <class T> friend double m_abs(point<T> a);
};
template<class T>
double m_abs(point<T> a)
{
	return sqrt(a.getx()*a.getx()+a.gety()*a.gety());
}

int main()
{
	point<int> a(3,4);
	point<double> b(5.2,8.6);
	point<float> c(float(5.2),float(8.6));
	cout<<a.getx()<<endl<<b.gety()<<endl<<endl<<m_abs(c)<<endl;
}
*/