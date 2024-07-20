/*#include<iostream>
using namespace std;

//约分，同分，加，减，乘，除，比较<>=,赋值（=）
//1.输入1，意味着要将分数a和分数b相加，并且输出二者之和 
//2.输入2，a - b
//3.输入3，输出二者之积
//4.输入4，输出a / b的结果
//5.输入5，a和b通分后的结果
//6.输入6，比较分数a和分数b，并且输出比较结果（ > , < , =） 
//7.输入7，分数a进行约分，并且输出约分后的结果 
//8.输入8，求分数a的倒数，并且输出结果
class Rational
{
	int up;
	int down;
public:
	bool vaild(){return down;}
	Rational() {};
	Rational(int a,int b):up(a),down(b){}
	void simplify();
	void simplify(Rational&);
	void tong(Rational&);
	Rational operator+(Rational);
	Rational operator-(Rational);
	Rational operator*(Rational);
	Rational operator/(Rational);
	Rational operator~();
	bool operator<(Rational);
	bool operator>(Rational);
	bool operator==(Rational);
	Rational operator=(Rational);
	friend ostream& operator<<(ostream &,Rational);
	void d_out();
};

void Rational::simplify()
{
	if (this->up == 0 || this->down == 0)
	{
		return;
	}
	int a=abs(up)>abs(down)? abs(down) : abs(up);
	for (int i = 2; i <= a; i++)
	{
		if (up%i == 0 && down%i == 0)
		{
			up/=i;down/=i;
			simplify();
		}
	}
	return;

}
void Rational::simplify(Rational& a)
{
	if (this->up == 0 || this->down == 0 || a.up == 0 || a.down == 0)
	{
		return;
	}
	int mi1 = abs(up) > abs(down) ? abs(down) : abs(up);
	int mi2= abs(a.up) > abs(a.down) ? abs(a.down) : abs(a.up);
	int mi=mi1>mi2?mi2:mi1;
	for (int i = 2; i <= mi; i++)
	{
		if (up%i == 0 && down%i == 0&& a.up%i == 0 && a.down%i == 0)
		{
			up /= i; down /= i; a.up /= i; a.down /= i;
			simplify(a);
		}
	}
	return;
}
void Rational::tong(Rational& a)
{
	if (this->up == 0 || this->down == 0 || a.up == 0 || a.down == 0)
	{
		return;
	}
	this->up*=a.down;
	a.up*=this->down;
	a.down*=this->down;
	this->down=a.down;
	simplify(a);
}
Rational Rational:: operator+(Rational a)
{
	return Rational(a.up*this->down+a.down*this->up,a.down*this->down);
}
Rational Rational:: operator-(Rational a)
{
	return Rational(a.down*this->up - a.up*this->down, a.down*this->down);
}
Rational Rational:: operator*(Rational a)
{
	return Rational(a.up*this->up, a.down*this->down);
}
Rational Rational:: operator/(Rational a)
{
	if(a.down==0)
		return Rational(1,0);
	return Rational(a.down*this->up, a.up*this->down);
}
bool Rational::operator<(Rational a)
{
	return ((double)(this->up)/ (double)this->down)<((double)(a.up)/ (double)a.down);
}
bool Rational::operator>(Rational a)
{
	return ((double)(this->up) / (double)this->down) > ((double)(a.up) / (double)a.down);
}
bool Rational::operator==(Rational a)
{
	return ((double)(this->up) / (double)this->down) == ((double)(a.up) / (double)a.down);
}
Rational Rational::operator=(Rational a)
{
	up=a.up;
	down=a.down;
	return a;
}
ostream& operator<<(ostream &out,Rational a)
{
	a.simplify();
	if (a.down == 0)
	{
		out<<"分母不能为零！";
		return out;
	}
	if (a.up == 0)
	{
		out<<0;
		return out;
	}
	if (a.down == 1)
	{
		out<<a.up;
		return out;
	}
	out<<a.up<<'/'<<a.down;
	return out;
}
void Rational::d_out()
{
	if (down == 0)
	{
		cout << "分母不能为零！";
		return;
	}
	if (up == 0)
	{
		cout << 0;
		return;
	}
	if (up*down < 0)
	{
		down = abs(down);
		up = -abs(up);
	}
	if (down == 1)
	{
		cout << up;
		return;
	}
	cout << up << '/' << down;
	return;
}
Rational Rational:: operator~()
{
	if (down == 0)
	{
		return *this;
	}
	return Rational(down,up);
}
int main()
{
	int a,b,c,d;
	char op1,op2;
	int n;
	cin>>n>>a>>op1>>b>>c>>op2>>d;
	Rational r1(a,b),r2(c,d);
	for (int i = 0; i < n; i++)
	{
		int type;
		Rational t1=r1,t2=r2;
		cin>>type;
		switch (type)
		{
		case 1:
			cout<<r1+r2;
			break;
		case 2:
			cout << r1 - r2;
			break;
		case 3:
			cout << r1 * r2;
			break;
		case 4:
			cout << r1 / r2;
			break;
		case 5:
			if (r1.vaild() && r2.vaild()) {
				t1.tong(t2);
				t1.d_out(); cout << ' '; t2.d_out();
			}
			else
				cout << "分母不能为零！";
			break;
		case 6:
			if (r1.vaild() && r2.vaild()) {
				if (r1 > r2)
				{
					cout << '>';
				}
				else if (r1 < r2)
				{
					cout << '<';
				}
				else
				{
					cout << '=';
				}
			}
			else 
				cout<< "分母不能为零！";
			break;
		case 7:
			t1.simplify();
			cout<<t1;
			break;
		case 8:
			cout<<(~r1);
			break;
		}
		if(i<n-1)
		cout<<endl;
	}
}*/