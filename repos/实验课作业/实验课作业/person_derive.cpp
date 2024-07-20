/*#include<iostream>
using namespace std;
class person
{
	char name[20];
	char sex;
	int age;
public:
	person(char *s,char sx,int ag){strcpy_s(name,s);sex=sx;age=ag; }
	void display(){cout<<name<<" "<<sex<<" "<<age<<endl; }
};

class student:public person
{
	int index;
	char department[30];
public:
	student(char *s, char sx, int ag,int idx,char*dptmt):person(s,sx,ag){index=idx;strcpy_s(department,dptmt);}
	void display(){person::display();cout<<index<<" "<<department<<endl; }
};

class teacher :public person
{
	char post[30],course[30];
public:
	teacher(char *s, char sx, int ag,char*post,char*course):person(s, sx, ag){strcpy_s(this->post,post);strcpy_s(this->course,course); }
	void display(){person::display();cout<<post<<' '<<course<<endl; }
};

class graduateStudent :public student
{
	char adviser[30];
public:
	graduateStudent(char *s, char sx, int ag, int idx, char*dptmt,char*advser):student(s,sx,ag,idx,dptmt){strcpy_s(adviser,advser); }
	void display(){student::display();cout<<adviser<<endl;}
};



int main()
{
	person per1((char*)("sun"),'M',42);
	student stu1((char*)("guo"),'M',22,1001,(char*)("comp"));
	teacher teach1((char*)"fang",'M',38,(char*)"professor",(char*)"English");
	graduateStudent gStu((char*)"wu",'M',25,1021,(char*)"comp",(char*)"wei");
	per1.display();
	stu1.display();
	teach1.display();
	gStu.display();
}*/