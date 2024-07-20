#include<iostream>
#include"workerManager.h"
#include"worker.h"
using namespace std;

int main()
{
	int choice;
	workerManager wm;
	while (1)
	{
		wm.showMenu();
		cout<<"ÇëÊäÈëÄúµÄÑ¡Ôñ£º ";
		cin>>choice;
		switch (choice)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 0:
			wm.exitsystem();
			break;
		default:
			system("cls");
			break;
		}
	}
	system ("pause");
	return 0;
}