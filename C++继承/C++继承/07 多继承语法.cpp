#include<iostream>
using namespace std;

//多继承语法

class Base017
{
public:
	Base017()
	{
		m_A = 100;
	}
	int m_A;
};

class Base027
{
public:
	Base027()
	{
		m_A = 200;
	}
	int m_A;
};
//子类 需要继承Base01和Base02 
//语法：class 子类 ：继承方式 父类1 ，继承方式 父类2 ...
class Son :public Base017, public Base027
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test017()
{
	Son s;

	cout << "sizeof Son = " << sizeof(s) << endl;
	//当父类中出现同名成员 需要加作用域区分
	cout << "Base01::m_A = " << s.Base017::m_A << endl;
	cout << "Base02::m_A = " << s.Base027::m_A << endl;
}
int main7()

{
	test017();
	system("pause");

	return 0;
}