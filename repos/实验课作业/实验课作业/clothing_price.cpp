/*#include<iostream>
using namespace std;

class Base
{
	double price;
	char place[20];
public:
	void display()
	{
		cout<<"\t"<<price<<"\t"<<place;
	}
	void input()
	{
		cin>>price>>place;
	}
	double get_price(){return price;}
};

class shirt :public Base
{
	char material[20];
public:
	void display()
	{
		Base::display();
		cout<<"\t"<<material<<endl;
	}
	char *get_material()
	{
		return material;
	}
	void input()
	{
		Base::input();
		cin>>material;
	}

};

class cap :public shirt
{
	char style;
public:
	void display()
	{
		Base::display();
		cout << "\t" << get_material()<< "\t"<<style<<endl;
	}
	void input()
	{
		shirt::input();
		cin >> style;
	}
};

class wardrobe :public Base
{
	char material[20];
	char color[20];
public:
	void display()
	{
		Base::display();
		cout << "\t" << material << "\t"<<color<<endl;
	}
	void input()
	{
		Base::input();
		cin >> material>>color;
	}
};

const int MAXSIZE=100;

class shirt_storage
{
	int count;
	shirt shelf[MAXSIZE];
public:
	shirt_storage(){count=0;}
	void display()
	{
		for (int i = 0; i < count; i++)
		{
			shelf[i].display();
		}
	}
	void in_something(int add_cnt)
	{
		cout<<add_cnt<<"*shirt data in:price/place/material=>";
		shelf[count++].input();
		for (int i = 1; i < add_cnt; i++)
		{
			shelf[count++]=shelf[count-1];
		}
	}
	void out_something(int del_cnt)
	{
		count-=del_cnt;
	}
	double total_price()
	{
		double sum=0;
		for (int i = 0; i < count; i++)
		{
			sum+=shelf[i].get_price();
		}
		return sum;
	}
};

class cap_storage
{
	int count;
	cap shelf[MAXSIZE];
public:
	cap_storage() { count = 0; }
	void display()
	{
		for (int i = 0; i < count; i++)
		{
			shelf[i].display();
		}
	}
	void in_something(int add_cnt)
	{
		cout << add_cnt << "*cap data in:price/place/material/style=>";
		shelf[count++].input();
		for (int i = 1; i < add_cnt; i++)
		{
			shelf[count++] = shelf[count - 1];
		}
	}
	void out_something(int del_cnt)
	{
		count -= del_cnt;
	}
	double total_price()
	{
		double sum=0;
		for (int i = 0; i < count; i++)
		{
			sum += shelf[i].get_price();
		}
		return sum;
	}

};

class wardrobe_storage
{
	int count;
	wardrobe shelf[MAXSIZE];
public:
	wardrobe_storage() { count = 0; }
	void display()
	{
		for (int i = 0; i < count; i++)
		{
			shelf[i].display();
		}
	}
	void in_something(int add_cnt)
	{
		cout << add_cnt << "*wardrobe data in:price/place/material/color=>";
		shelf[count++].input();
		for (int i = 1; i < add_cnt; i++)
		{
			shelf[count++] = shelf[count - 1];
		}
	}
	void out_something(int del_cnt)
	{
		count -= del_cnt;
	}
	double total_price()
	{
		double sum=0;
		for (int i = 0; i < count; i++)
		{
			sum += shelf[i].get_price();
		}
		return sum;
	}
};

int main()
{
	cap_storage capSto;
	capSto.in_something(3);
	capSto.in_something(2);
	capSto.display();
	cout<<"capSto.total_price()="<<capSto.total_price()<<endl;

	capSto.out_something(4);
	capSto.display();
	cout<<"capSto.total_price()=" << capSto.total_price() << endl;

	wardrobe_storage warSto;
	warSto.in_something(2);
	warSto.in_something(2);
	warSto.display();
	cout << "warSto.total_price()=" << warSto.total_price() << endl;

	warSto.out_something(2);
	warSto.display();
	cout << "warSto.total_price()=" << warSto.total_price() << endl;
}*/