#include<iostream>
using namespace std;

//��̳��﷨

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
//���� ��Ҫ�̳�Base01��Base02 
//�﷨��class ���� ���̳з�ʽ ����1 ���̳з�ʽ ����2 ...
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
	//�������г���ͬ����Ա ��Ҫ������������
	cout << "Base01::m_A = " << s.Base017::m_A << endl;
	cout << "Base02::m_A = " << s.Base027::m_A << endl;
}
int main7()

{
	test017();
	system("pause");

	return 0;
}