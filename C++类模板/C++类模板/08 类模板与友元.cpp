#include<iostream>
using namespace std;
#include<string>

//通过全局函数 打印Person信息

//提前让编译器知道Person类的存在
template<class T1, class T2>
class Person;


template<class T1, class T2>
void printPerson2(Person<T1, T2> p);


template<class T1,class T2>
class Person
{
	//全局函数 类内实现
	friend void printPerson(Person<T1,T2> p)
	{
		cout << "name : " << p.m_Name << " age : " << p.m_Age << endl;
	}

	//全局函数 类外实现
	//加空模板参数列表
	//如果全局函数 是 类外实现 需要让编译器提前知道这个函数的存在
	friend void printPerson2<>(Person<T1, T2> p);
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};
//类外实现
template<class T1,class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "name : " << p.m_Name << " age : " << p.m_Age << endl;
}


void test018()
{
	Person<string, int>p("张三", 30);
	printPerson(p);

}
void test028()
{
	Person<string, int>p("李四", 40);
	printPerson2(p);

}
int main8()

{
	//test018();
	test028();
	system("pause");

	return 0;
}