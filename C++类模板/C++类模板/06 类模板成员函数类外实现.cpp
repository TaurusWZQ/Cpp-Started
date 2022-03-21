#include<iostream>
using namespace std;
#include<string>

//类模板成员函数类外实现
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

//构造函数类外实现
template<class T1,class T2>
Person6<T1, T2>::Person6(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
//成员函数类外实现
template<class T1, class T2>
void Person6<T1,T2>::showPerson6()
{
	cout << "name : " << this->m_Name << " age : " << this->m_Age << endl;
}

void test016()
{
	Person6<string, int>p("张三", 20);
	p.showPerson6();
}
int main6()

{
	test016();
	system("pause");

	return 0;
}