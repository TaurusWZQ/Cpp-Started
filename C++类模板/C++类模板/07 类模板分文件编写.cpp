#include<iostream>
using namespace std;
#include<string>

//��һ�ֽ����ʽ ֱ�Ӱ��� Դ�ļ�
//#include"person.cpp"

//�ڶ��ֽ����ʽ ��.h��.cpp�е�����д��һ�� ����׺����Ϊ.hpp�ļ�
#include"person.hpp"


//��ģ����ļ���д�����Լ����
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//���캯������ʵ��
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
////��Ա��������ʵ��
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "name : " << this->m_Name << " age : " << this->m_Age << endl;
//}

void test017()
{
	Person<string, int>p("����", 30);
	p.showPerson();
}

int main7()

{
	test017();
	system("pause");

	return 0;
}