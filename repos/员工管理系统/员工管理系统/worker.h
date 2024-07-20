#pragma once
#include<iostream>
#include<string>
using namespace std;

class worker
{
public:
	virtual void show_worker()=0;
	int m_id;
	string m_name;
	int m_departmentId;
};

class employee: public worker
{
	void show_worker();
};

class manager : public worker
{
	void show_worker();
};

class boss : public worker
{
	void show_worker();
};