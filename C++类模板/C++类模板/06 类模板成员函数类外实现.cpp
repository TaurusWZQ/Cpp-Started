#include<iostream>
using namespace std;
#include<string>

//��ģ���Ա��������ʵ��
template<class T1,class T2>
class Person6
{
public:
	Person6(T1 name, T2 age);
	//{
	//	this->m_Name = name;
	//	this->m_Age = age;
	//}

	void showPerson6();
	//{
	//	cout << "name : " << this->m_Name << " age : " << this->m_Age << endl;
	//}

	T1 m_Name;
	T2 m_Age; 
};

//���캯������ʵ��
template<class T1,class T2>
Person6<T1, T2>::Person6(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
//��Ա��������ʵ��
template<class T1, class T2>
void Person6<T1,T2>::showPerson6()
{
	cout << "name : " << this->m_Name << " age : " << this->m_Age << endl;
}

void test016()
{
	Person6<string, int>p("����", 20);
	p.showPerson6();
}
int main6()

{
	test016();
	system("pause");

	return 0;
}