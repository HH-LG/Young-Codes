#include<iostream>
#include<fstream>
using namespace std;

class Student
{
	long num;
	char name[20];
	char sex;
	int age;
	float math,comp,eng;
public:
	Student();
	void keyBoardIn();
	void writeToDisk();
	bool readFromDisk(long num0);
	bool readFromDisk(char*name0);
	void calcu();
	void display();
	friend ostream& operator<<(ostream &out,Student& stu);
};

Student::Student()
{
	ofstream ofs("Students_List.bin", ios::binary|ios::_Noreplace);
	ofs.close();
}

void Student::keyBoardIn()
{
	cin>>num>>name>>sex>>age>>math>>comp>>eng;
}

void Student::writeToDisk()
{
	long offs=sizeof(Student)*(num-1);
	ofstream ofs("Students_List.bin", ios::binary|ios::ate); 
	ofs.seekp(offs);
	ofs.write((char*)this,sizeof(*this));
	ofs.close();
}

bool Student::readFromDisk(long num0)
{
	ifstream ifs("Students_List.bin", ios::binary);
	ifs.seekg(ios::end);
	if (ifs.tellg() < (num0 - 1) * sizeof(Student))
	{
		ifs.close();
		return false;
	}
	else
	{
		ifs.seekg((num0 - 1) * sizeof(Student));
		ifs.read((char*)this,sizeof(Student));
		ifs.close();
		return true;
	}
}

bool Student::readFromDisk(char* name0)
{
	Student ss;
	ifstream ifs("Students_List.bin", ios::binary);
	ifs.read((char*)&ss,sizeof(Student));
	int i;
	while (!ifs.eof())
	{
		for (i = 0; ss.name[i] != 0 || name0[i] != 0; i++)
		{
			if (ss.name[i] != name0[i])
			{
				break;
			}
		}
		if (ss.name[i] == 0 && name0[i] == 0)
		{
			ifs.seekg((ss.num - 1) * sizeof(Student));
			ifs.read((char*)this,sizeof(Student));
			return true;
		}
	}
	ifs.close();
	if (ifs.eof())
	{
		return false;
	}
}


void Student::calcu()
{
	cout<<"average score£º"<<(math+eng+comp)/3.0<<endl;
}

void Student::display()
{
	ifstream ifs("Students_List.bin",ios::binary);
	ifs.read((char*)this,sizeof(Student));
	while (!ifs.eof())
	{
		cout<<*this<<endl;
		ifs.read((char*)this, sizeof(Student));
	}
	ifs.close();
}

ostream& operator<<(ostream &out, Student& stu)
{
	out<<"num:\t"<<stu.num<<endl;
	out<<"name:\t"<<stu.name<<endl;
	out<<"sex:\t"<<stu.sex<<endl;
	out<<"math,comp,eng:\t"<<stu.math<<" "<<stu.comp<<" "<<stu.eng;
	return out;
}
int main()
{
	Student ss;
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		ss.keyBoardIn();
		ss.writeToDisk();
	}
	ss.display();
	if (ss.readFromDisk((char*)("hejun")))
	{
		cout<<ss;
		ss.calcu();
	}
	else
	{
		cout<<"hejun?!No such a name!"<<endl;
	}
	if (ss.readFromDisk(2))
	{
		cout<<ss;
	}
	else
	{
		cout<<"2?!No such a num!"<<endl;
	}
}