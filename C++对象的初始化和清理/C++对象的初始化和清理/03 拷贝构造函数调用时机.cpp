#include<iostream>
using namespace std;

class Person03
{
public:
	Person03()
	{
		cout << "Person03 Ĭ�Ϲ��캯���ĵ���" << endl;
	}
	Person03(int a)
	{
		m_age = a;
		cout << "Person03 �вι��캯���ĵ���" << endl;
	}
	Person03(const Person03 &p)
	{
		m_age = p.m_age;
		cout << "Person03 �������캯���ĵ���" << endl;
	}
	~Person03()
	{
		cout << "Person03 ���������ĵ���" << endl;
	}
	int m_age;
};

//�������캯������ʱ��

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test013()
{
	Person03 p1(10);
	Person03 p2(p1);

	cout << "p2������Ϊ��" << p2.m_age << endl;
}


//2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person03 p)
{

}

void test023()
{
	Person03 p;
	doWork(p);
}

//3��ֵ��ʽ���ؾֲ�����

Person03 doWork2()
{
	Person03 p1;
	cout << (long long*)&p1 << endl;
	return p1;
}
void test03()
{
	Person03 p = doWork2();
	cout << (long long*)&p << endl;
}
int main3()

{
	//test01();
	//test02();
	test03();
	system("pause");

	return 0;
}