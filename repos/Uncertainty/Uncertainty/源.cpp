#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
const int MAXSIZE = 10;

class Uncertainty
{
	int count;
	double data[MAXSIZE];
	char name[20];

	int precision;
	double average;
	double Ua, Ub;
	double Ux;
	double tpk;
public:
	Uncertainty() { count = 0; precision = 2; }
	Uncertainty(char str[]) { strcpy_s(name, str); count = 0; precision = 2; }
	void input(int in_cnt);
	void set_precision(int n) { precision = n; }
	void init_average();//顺便输出一下平均数
	void get_Ua();
	void get_Ub(bool change_c = false);
	void get_U(bool change_c = false);
	void init_tpk() {
		double table[10] = { 1.84,1.32,1.20,1.14,1.11,1.09,1.08,1.07,1.06,1.05 }; if (count == 0) { cout << "还没有输入数据" << endl; }
		else if (count > 11) { tpk = 0.96 + 0.83 / (count - 1); }
		else { tpk = table[count - 2]; }cout << name << "数据的tpk为=>" << setprecision(precision) << tpk << endl;
	}
};
void Uncertainty::input(int in_cnt)
{
	if (count + in_cnt > MAXSIZE)
	{
		cout << "超过最大允许数量!" << endl;
		return;
	}
	cout << "为" << name << "输入" << in_cnt << "个数据" << endl;
	for (int i = 0; i < in_cnt; i++)
	{
		cin >> data[count++];
	}
}

void Uncertainty::init_average()
{
	average = 0;
	for (int i = 0; i < count; i++)
	{
		average += data[i];
	}
	average /= count;
	cout << name << "的平均数为=>" << setprecision(precision) << average << endl;
}

void Uncertainty::get_Ua()
{
	init_average();
	init_tpk();
	double sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum += pow((data[i] - average), 2);
	}
	sum = sqrt(sum);
	sum /= (sqrt(count - 1));
	cout << name << "的样本标准偏差为=>" << setprecision(precision) << sum << endl;
	sum /= (sqrt(count));
	cout << name << "的算术平均值的标准偏差式为=>" << setprecision(precision) << sum << endl;
	Ua = sum * tpk;
	cout << name << "的A类不确定度为=>" << setprecision(precision) << Ua << endl;
}

void Uncertainty::get_Ub(bool change_c)
{
	double dx;
	cout << "请输入最大允差" << endl;
	cin >> dx;
	double c = sqrt(3);
	Ub = dx / c;
	cout << name << "的B类不确定度为=>" << setprecision(precision) << Ub << endl;
}

void Uncertainty::get_U(bool change_c)
{
	Uncertainty::get_Ua();
	Uncertainty::get_Ub(change_c);
	Ux = sqrt(pow(Ua, 2) + pow(Ub, 2));
	cout << name << "的总不确定度为=>" << setprecision(precision) << Ux << endl;
}
int main()
{
	cout << "输入物理量名称=>" << endl;
	char name[20];
	cin >> name;
	int n, precision;
	cout << "输入数据数量=>" << endl;
	cin >> n;
	cout << "输入精确度(保留有效数字位数)=>" << endl;
	cin >> precision;
	Uncertainty T((char*)name);
	T.input(n);
	T.set_precision(precision);
	T.get_U();
}
