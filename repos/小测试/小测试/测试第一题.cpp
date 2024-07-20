/*#include<iostream>
using namespace std;
class Rational
{
	int above;
	int below;
public:
	bool is_valid();
	Rational() {}
	Rational(int a, int b) { above = a; below = b; }
	friend void simplify_2(Rational &a, Rational &b);
	void simplify();
	void print();
	Rational operator+(Rational b);
	Rational operator-(Rational b);
	Rational operator*(Rational b);
	Rational operator/(Rational b);
	void tong(Rational &b);
	int compare(Rational b);
	void d_out();
	void swap();
};

bool Rational::is_valid()
{
	if (this->below == 0)
	{
		return false;
	}
	return true;
}

void Rational::simplify()
{
	for (int i = 2; i <= above && i <= below; i++)
	{
		if (above%i == 0 && below%i == 0)
		{
			above /= i;
			below /= i;
			simplify();
		}
	}

}
void Rational::d_out()
{
	if (below == 0)
	{
		cout << "分母不能为零！";
		return;
	}
	if (above == 0)
	{
		cout << 0;
		return;
	}
	if (below < 0)
	{
		below *= -1;
		above *= -1;
	}
	if (below == 1)
	{
		cout << above;
		return;
	}
	else
	{
		cout << above << '/' << below;
		return;
	}
}
void Rational::print()
{
	if (below == 0)
	{
		cout << "分母不能为零！";
		return;
	}
	if (above == 0)
	{
		cout << 0;
		return;
	}
	simplify();
	if (below < 0)
	{
		below *= -1;
		above *= -1;
	}
	if (below == 1)
	{
		cout << above;
		return;
	}
	else
	{
		cout << above << '/' << below;
		return;
	}
}

void Rational::tong(Rational &b)
{
	int a_below = below;
	above *= b.below;
	below *= b.below;
	b.above *= a_below;
	b.below *= a_below;
	simplify_2(*this, b);
}

Rational Rational::operator+(Rational b)
{
	Rational temp;
	temp.above = this->above*b.below + b.above*this->below;
	temp.below = this->below*b.below;
	return temp;
}
Rational Rational::operator-(Rational b)
{
	Rational temp;
	temp.above = this->above*b.below - b.above*this->below;
	temp.below = this->below*b.below;
	return temp;
}
Rational Rational::operator*(Rational b)
{
	Rational temp;
	temp.above = this->above*b.above;
	temp.below = this->below*b.below;
	return temp;
}
Rational Rational::operator/(Rational b)
{
	Rational temp;
	temp.above = this->above*b.below;
	temp.below = this->below*b.above;
	return temp;
}
int Rational::compare(Rational b)
{
	if (this->above*b.below < b.above*this->below)
	{
		return 1;
	}
	if (this->above*b.below == b.above*this->below)
	{
		return 2;
	}
	else
	{
		return 3;
	}
}
void Rational::swap()
{
	int temp = this->above;
	this->above = this->below;
	this->below = temp;
}

int main()
{
	int times;
	cin >> times;
	int num[4] = { 0 };
	int cnt = 0;
	char a[20];
	cin >> a;
	int i;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= '0'&&a[i] <= '9')
		{
			num[cnt] = 10 * num[cnt] + a[i] - '0';
		}
		if (a[i] == '/' || a[i] == ' ')
		{
			cnt++;
		}
	}
	cnt++;
	cin >> a;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= '0'&&a[i] <= '9')
		{
			num[cnt] = 10 * num[cnt] + a[i] - '0';
		}
		if (a[i] == '/' || a[i] == ' ')
		{
			cnt++;
		}
	}
	Rational r1(num[0], num[1]);
	Rational r2(num[2], num[3]);
	for (i = 0; i < times; i++)
	{
		Rational res;
		int type;
		cin >> type;
		if (r1.is_valid() && r2.is_valid())
		{
			switch (type)
			{
			case 1:
				res = r1 + r2;
				res.print();
				break;
			case 2:
				res = r1 - r2;
				res.print();
				break;
			case 3:
				res = r1 * r2;
				res.print();
				break;
			case 4:
				res = r1 / r2;
				res.print();
				break;
			case 5:
				r1.tong(r2);
				r1.d_out();
				cout << ' ';
				r2.d_out();
				break;
			case 6:
				if (r1.compare(r2) == 1)
				{
					cout << '<';
					break;
				}
				if (r1.compare(r2) == 2)
				{
					cout << '=';
					break;
				}
				if (r1.compare(r2) == 3)
				{
					cout << '>';
					break;
				}
			case 7:
				r1.print();
				break;
			case 8:
				r1.swap();
				r1.print();
				r1.swap();
				break;
			}
		}
		else

		{
			cout << "分母不能为零！";
		}
		if (i != times - 1)
			cout << endl;

	}

}

void simplify_2(Rational &a, Rational &b)
{
	for (int i = 2; i <= a.above&&i <= a.below; i++)
	{
		if (a.above%i == 0 && a.below%i == 0 && b.above%i == 0 && b.below%i == 0)
		{
			a.above /= i;
			a.below /= i;
			b.above /= i;
			b.below /= i;
			simplify_2(a, b);
		}
	}
}
*/