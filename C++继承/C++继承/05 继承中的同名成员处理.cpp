#include<iostream>
using namespace std;

//�̳���ͬ����Ա����
class Base5
{
public:
	Base5()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base - func() ��������" << endl;
	}
	void func(int a)
	{
		cout << "Base - func(int a) ��������" << endl;
	}
	int m_A;
};

class Son5 :public Base5
{
public:
	Son5()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son - func() ��������" << endl;
	}
	int m_A;
};
//ͬ����Ա���Դ���
void test015()
{
	Son5 s;
	cout << "Son  �� m_A = " << s.m_A << endl;
	//���ͨ��������� ���ʵ�������ͬ����Ա ��Ҫ��������
	cout << "Base �� m_A = " << s.Base5::m_A << endl;
}
//ͬ����Ա��������
void test025()
{
	Son5 s;
	s.func();//ֱ�ӵ��� ���õ��������е�ͬ����Ա

	//��ε��õ�������ͬ����Ա����
	s.Base5::func();

	//��������г��ֺ͸���ͬ���ĳ�Ա���� �����ͬ����Ա�����ص�����������ͬ����Ա����
	//�������ʸ����б����ص�ͬ����Ա���� ��Ҫ��������
	s.Base5::func(100);
}
int main5()

{
	//test015();
	test025();
	system("pause");

	return 0;
}