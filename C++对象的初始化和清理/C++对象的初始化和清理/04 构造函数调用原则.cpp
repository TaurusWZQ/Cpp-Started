#include<iostream>
using namespace std;

//���캯���ĵ��ù���
//1������һ���࣬C++���������ÿ���඼�������3������
//Ĭ�Ϲ��� (��ʵ��)
//�������� (��ʵ��)
//�������� (ֵ����)

//2��
//�������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������
//�������д�˿������캯�����������Ͳ����ṩ������ͨ���캯����
class Person04 
{
public:
	//Person()
	//{
	//	cout << "Person��Ĭ�Ϲ��캯������" << endl;
	//}
	//Person(int a)
	//{
	//	m_Age = a;
	//	cout << "Person���вι��캯������" << endl;
	//}
	Person04(const Person04 &p)
	{
		m_Age = p.m_Age;
		cout << "Person�Ŀ������캯������" << endl;
	}
	~Person04()
	{
		cout << "Person��������������" << endl;
	}
	int m_Age;
};

//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//}

//void test02()
//{
//	Person p(28);
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//}
int main4()

{
	//test01();
	//test02();
	system("pause");

	return 0;
}