/*#include<iostream>
using namespace std;

const int maxcard = 20;

class Set
{
	int elems[maxcard];
	int card;
public:
	friend Set operator+(Set, Set);				//并集
	friend Set operator-(Set, Set);				//差集
	friend bool operator<(Set, Set);			//真包含于
	friend bool operator<=(Set, Set);			//包含于
	friend bool operator&(Set, int);			//属于
	friend Set operator*(Set, Set);				//交集
	friend bool operator==(Set, Set);			//相等
	friend bool operator!=(Set, Set);			//不相等

	void add(int);
	void remove(int);
	void print();
	void clear_all();

	Set() { card = 0; }
};

bool operator&(Set s, int a)
{
	int i;
	for (i = 0; i < s.card; i++)
		if (a == s.elems[i])
			return true;
	return false;
}

void Set::add(int a)
{
	if (*this&a)
		cout << a << "is already in the set!" << endl;
	else
	{
		if (card != maxcard)
		{
			elems[card] = a;
			card++;
		}
		else
		{
			cout << "The set is overflowed!" << endl;
		}

	}
}

void Set::remove(int a)
{
	for (int i = 0; i < card; i++)
	{
		if (elems[i] == a)
		{
			for (int j = i; j < card - 1; j++)
			{
				elems[j] = elems[j + 1];
			}
			card--;
			return;
		}
	}
}

Set operator+(Set s1, Set s2)
{
	Set tem(s2);
	for (int i = 0; i < s1.card; i++)
	{
		if (!(tem&s1.elems[i]))
			tem.add(s1.elems[i]);
	}
	return tem;

}

Set operator-(Set s1, Set s2)
{
	Set tem(s1);
	for (int i = 0; i < s2.card; i++)
	{
		tem.remove(s2.elems[i]);
	}
	return tem;
}

bool operator<=(Set s1, Set s2)
{
	if (s1.card > s2.card)
		return false;
	for (int i = 0; i < s1.card; i++)
	{
		if (!(s2&s1.elems[i]))
			return false;
	}
	return true;
}

bool operator<(Set s1, Set s2)
{
	if (s1.card == s2.card)
		return false;
	return (s1 <= s2);
}

Set operator*(Set s1, Set s2)
{
	Set tem;
	for (int i = 0; i < s1.card; i++)
		if (s2&s1.elems[i])
			tem.add(s1.elems[i]);
	return tem;
}

void Set::print()
{
	if (card > 0)
		cout << elems[0];
	for (int i = 1; i < card; i++)
		cout << " " << elems[i];
	cout << endl;
}

bool operator==(Set s1, Set s2)
{
	if (s1.card == s2.card)
	{
		if (s1 <= s2)
			return true;
	}
	return false;
}

bool operator!=(Set s1, Set s2)
{
	if (!(s1 == s2))
		return true;
	return false;
}

void Set::clear_all()
{
	card = 0;
}

int main()
{
	Set s1, s2, s;
	for (int i = 0; i < 10; i++)
	{
		s1.add(2 * i);
		s2.add(3 * i - 1);
	}
	cout << "s1:";
	s1.print();
	cout << "s2:";
	s2.print();
	s = s1 - s2;
	cout << "s=s1-s2=";
	s.print();
	s = s1 + s2;
	cout << "s=s1+s2=";
	s.print();
	if (s1 < s2)
		cout << "s1<s2" << endl;
	else
		cout << "s1!<s2" << endl;
	s2.clear_all();
	for (int i = 0; i < 5; i++)
		s2.add(4 * i);
	cout << "s2(now):";
	s2.print();
	if (s2 < s1)
		cout << "s2<s1" << endl;
	else
		cout << "s2!<s1" << endl;
	s = s1 * s2;
	cout << "s=s1*s2=";
	s.print();

	if (s == s2)
		cout << "s==s2" << endl;
	else
		cout << "s!=s2" << endl;
	if (s != s2)
		cout << "s!=s2" << endl;
	else
		cout << "s==s2" << endl;
}*/