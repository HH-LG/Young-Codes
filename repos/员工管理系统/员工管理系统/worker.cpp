#include"worker.h"
#include<string>
using namespace std;

void employee::show_worker()
{
	cout<<"Ա����ţ�"<<m_id<<"   ������"<<m_name<<"  ְ�𣺽��ܾ�������"<<endl;
}

void manager::show_worker()
{
	cout << "Ա����ţ�" << m_id << "   ������" << m_name << "  ְ�𣺽����ϰ����񣬲��ַ���Ա������" << endl;
}

void boss::show_worker()
{
	cout << "Ա����ţ�" << m_id << "   ������" << m_name << "  ְ�𣺴�����������" << endl;
}