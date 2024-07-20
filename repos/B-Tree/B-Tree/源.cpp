#include<iostream>
#include"B_tree.h"
#include"B_tree.cpp"
#include<iomanip>
using namespace std;
template<int M>
void operatate_on_tree(BTree<M, double>* t)
{
	char operation;
	double x;
	cout<<"I: insert; R: remove; MI: muti-insert; MR: muti-remove; q:quit"<<endl;
	while (cin >> operation && operation != 'q')
	{
		switch (operation)
		{
		case 'I':
			cin >> x;
			if (t->insert(x) == sucess)
			{
				cout << "sucessfully insert " << x << endl;
			}
			else
			{
				cout << "Error: find "<<x<<" in tree" << endl;
			}
			break;
		case 'R':
			cin >> x;
			if (t->remove(x) == sucess)
			{
				cout << "sucessfully remove " << x << endl;
			}
			else
			{
				cout << "Error:can't find "<< x << endl;
			}
			break;
		case 'M':
			cin >> operation;
			if (operation == 'I')
			{
				while (cin >> x)
				{
					if (t->insert(x) == sucess)
					{
						cout << "sucessfully insert " << x << endl;
					}
					else
					{
						cout << "Error: find " << x << " in tree" << endl;
					}
				}
			}
			else if (operation == 'R')
			{
				while (cin >> x)
				{
					if (t->remove(x) == sucess)
					{
						cout << "sucessfully remove " << x << endl;
					}
					else
					{
						cout << "Error:can't find " << x << endl;
					}
				}
			}
			cin.clear();
			cin.ignore();
			break;
		case 'S':
			cout<<"------------B-tree------------"<<endl;
			t->print();
			cout<<"------------------------------"<<endl;
			break;
		default:
			cout << "please input a right command!" << endl;
		}

	}

}
int main()
{
	int order;
	cout<<"please input the order of B-tree: "<<endl;
	cin>>order;

	BTree<3, double>* t1 = new BTree<3, double>();
	BTree<4, double>* t2 = new BTree<4, double>();
	BTree<5, double>* t3 = new BTree<5, double>();
	BTree<6, double>* t4 = new BTree<6, double>();
	switch (order)
	{
	case 3:
		operatate_on_tree<3>(t1);
		break;
	case 4:
		operatate_on_tree<4>(t2);
		break;
	case 5:
		operatate_on_tree<5>(t3);
		break;
	case 6:
		operatate_on_tree<6>(t4);
		break;
	default:
		cout<<"阶数过大或过小"<<endl;
		break;
	}
}
