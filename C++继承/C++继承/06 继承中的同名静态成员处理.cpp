#include<iostream>
using namespace std;

//�̳��е�ͬ����̬��Ա����ʽ

class Base6
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base - static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base - static void func(int a)" << endl;
	}
};
int Base6::m_A = 100;

class Son6 :public Base6
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son - static void func()" << endl;
	}
};
int Son6::m_A = 200;

//ͬ����̬��Ա����
void test016()
{
	//1��ͨ���������
	Son6 s;
	cout << "ͨ��������ʣ�" << endl;
	cout << "Son  �� m_A = " << s.m_A << endl;
	cout << "Base �� m_A = " << s.Base6::m_A << endl;

	//2��ͨ����������
	cout << "ͨ���������ʣ�" << endl;
	cout << "Son  �� m_A = " << Son6::m_A << endl;
	//��һ��::����ͨ��������ʽ���� �ڶ���::������ʸ����������� 
	cout << "Base �� m_A = " << Son6::Base6::m_A << endl;
}

//ͬ����̬��Ա����

void test026()
{
	//1��ͨ���������
	cout << "ͨ��������ʣ�" << endl;
	Son6 s;
	s.func();
	s.Base6::func();
	//2��ͨ����������
	cout << "ͨ���������ʣ�" << endl;
	Son6::func();
	Son6::Base6::func();

	//������ֺ͸���ͬ����̬��Ա���� Ҳ�����ظ���������ͬ����Ա����
	//�������ʸ����б�����ͬ����Ա ��Ҫ��������
	Son6::Base6::func(100);

}
int main6()

{
	//test016();
	test026();
	system("pause");

	return 0;
}