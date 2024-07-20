/*#include<iostream>
using namespace std;

void infromstr(int &x, int &y, char*a, int &idx)
{
	int i = idx;
	x = 0;
	y = 0;
	for (; a[i] != '/'; i++)
	{
		if (a[i] >= '0'&&a[i] <= '9')
		{
			x = 10 * x + a[i] - '0';
		}
	}
	for (i = i + 1; a[i] != '\0'&&a[i] != ' '; i++)
	{
		if (a[i] >= '0'&&a[i] <= '9')
		{
			y = 10 * y + a[i] - '0';
		}
	}
	idx = i;
}
void R_simplify(int &x, int &y)
{
	if(x<0)
		x=-x;
	int i = 0;
	if (x == 1)
	{
		return;
	}
	for (i = 2; i <= x; i++)
	{
		if (x%i == 0 && y%i == 0)
		{
			x /= i;
			y /= i;
			break;
		}
	}
	if (i == x + 1)
	{
		return;
	}
	R_simplify(x, y);
}
class Rational
{
	int up;
	int down;
public:
	void init(char*a,int idx);
	Rational(int x,int y){up=x;down=y;}
	Rational() {}
	Rational(Rational& x) {this->down=x.down;this->up=x.up;}
	void set(Rational& x){up=x.up;down=x.down;}
	void simplify();
	friend ostream& operator<<(ostream &cout, Rational a);
	Rational operator+(Rational x);
	Rational operator-(Rational x);
	Rational operator*(Rational x);
	Rational operator/(Rational x);
	Rational operator++(int);
	Rational& operator<(Rational x);
};

void Rational::init(char*a,int idx)
{
	infromstr(up,down,a,idx);
}
void Rational::simplify()
{
	bool bisneg=0;
	if(up<0)
		bisneg=1;
	R_simplify(up,down);
	if(bisneg)
		up=-up;
}

ostream& operator<<(ostream &cout, Rational a)
{
	a.simplify();
	if (a.down == 1)
		cout << a.up << endl;
	else
	{
		cout << a.up << '/' << a.down << endl;
	}
	return cout;
}
Rational Rational::operator+(Rational x)
{
	Rational temp;
	temp.down=this->down*x.down;
	temp.up=this->up*x.down+this->down*x.up;
	return temp;
}
Rational& Rational::operator<(Rational x)
{
	this->down=x.up;
	this->up=x.down;
	if (down < 0)
	{
		up=-up;
		down=-down;
	}
	return *this;
}
Rational Rational::operator-(Rational x)
{
	Rational temp;
	temp.down = this->down*x.down;
	temp.up = this->up*x.down - this->down*x.up;
	return temp;
}
Rational Rational::operator*(Rational x)
{
	Rational temp;
	temp.down = this->down*x.down;
	temp.up = this->up*x.up;
	return temp;
}
Rational Rational::operator/(Rational x)
{
	Rational temp;
	temp.down = this->down*x.up;
	temp.up = this->up*x.down;
	return temp;
}
Rational Rational::operator++(int)
{
	Rational temp;
	temp.down = this->down;
	temp.up = this->up+this->down;
	return temp;
}
int main()
{
	Rational res[50];
	int cnt=0;
	int times;
	cin>>times;
	for (int i = 0; i < times; i++)
	{
		int idx=2;
		Rational r1,r2;
		char a,x[10],y[10];
		cin>>a;
		switch (a)
		{
		case '1':
			cin>>x;
			cin>>y;		
			r1.init(x,0);
			r2.init(y,0);
			res[cnt]=r1+r2;
			cnt++;
			break;
		case '2':
			cin >> x;
			cin >> y;
			r1.init(x, 0);
			r2.init(y, 0);
			res[cnt] = r1 - r2;
			cnt++;
			break;
		case '3':
			cin >> x;
			cin >> y;
			r1.init(x, 0);
			r2.init(y, 0);
			res[cnt] = r1 * r2;
			cnt++;
			break;
		case '4':
			cin >> x;
			cin >> y;
			r1.init(x, 0);
			r2.init(y, 0);
			res[cnt] = r1 / r2;
			cnt++;
			break;
		case '5':
			cin >> x;
			r1.init(x, 0);
			res[cnt] = r1 ++;
			cnt++;
			break;
		case '6':
			cin >> x;
			r1.init(x, 0);
			res[cnt] <r1;
			cnt++;
			break;
		}
	}
	for (int i = 0; i < times; i++)
	{
		cout<<res[i];
	}
}*/