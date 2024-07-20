//以下是失败的编程。。。

/*#include<iostream>
using namespace std;
class Matrix
{
public:
	int r;
	int c;
	double **p;
public:
	Matrix (int row,int column,double**p1):r(row),c(column){
		p = new double*[row];
		int i,j;
		for (i = 0; i < row; i++)
		{
			p[i] = new double[column];
		}
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < column; j++)
			{
				p[i][j] = p1[i][j];
			}
		}
	}
	Matrix (){r=0;c=0;**p=NULL;}
	~Matrix(){ for (int i = 0; i < r; i++)delete[]p[i];delete[]p; }
	Matrix operator+(Matrix a);
	Matrix operator-(Matrix a);
	Matrix operator*(Matrix a);
	Matrix operator~();
	void display();
};
Matrix Matrix::operator+(Matrix a)
{
	if (a.r != r || a.c != c)
	{
		cout<<"error!"<<endl;
		return *this;
	}
	int i,j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			this->p[i][j]+=a.p[i][j];
		}
	}
	return *this;
}
Matrix Matrix::operator-(Matrix a)
{
	if (a.r != r || a.c != c)
	{
		cout << "error!" << endl;
		return *this;
	}
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			this->p[i][j] -= a.p[i][j];
		}
	}
	return *this;
}
Matrix Matrix::operator*(Matrix a)
{
	if (this->c != a.r)
	{
		cout << "error!" << endl;
		return *this;
	}
	double**p = new double*[r];
	Matrix res(r, a.c, p);
	int i, j,k;
	for (i = 0; i < r; i++)
		p[r] = new double[a.c];
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < a.c; j++)
		{
			for (k = 0; k < c; k++)
			{
				p[i][j]+=this->p[i][k]*a.p[k][j];
			}
		}
	}
	return res;
}
Matrix Matrix::operator~()
{
	int temp;
	temp=this->r;
	this->r=this->c;
	this->c=temp;
	int i,j;
	double**p=new double*[r];
	for (i = 0; i < r; i++)
	{
		p[i]=new double[c];
	}
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			p[i][j]= this->p[j][i];
		}
	}
	for(i=0;i<c;i++)
		delete []this->p[i];
	delete []p;
	this->p=p;
	return *this;
}
void Matrix::display()
{
	int i,j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			cout<<this->p[i][j]<<"  ";
		}
		cout<<endl;
	}
}
int main()
{
	double a[3][2] ={ { 1,2 }, { 3, 4 }, { 5, 6 }};
	double**p = new double*[3];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		p[i] = new double[2];
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			p[i][j] = a[i][j];
		}
	}
	Matrix m(3,2,p);
	m.display();
}*/