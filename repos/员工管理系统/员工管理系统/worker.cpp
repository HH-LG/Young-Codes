#include"worker.h"
#include<string>
using namespace std;

void employee::show_worker()
{
	cout<<"员工编号："<<m_id<<"   姓名："<<m_name<<"  职责：接受经理任务"<<endl;
}

void manager::show_worker()
{
	cout << "员工编号：" << m_id << "   姓名：" << m_name << "  职责：接受老板任务，并分发给员工任务" << endl;
}

void boss::show_worker()
{
	cout << "员工编号：" << m_id << "   姓名：" << m_name << "  职责：处理所有任务" << endl;
}