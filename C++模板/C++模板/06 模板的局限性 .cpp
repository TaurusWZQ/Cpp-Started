#include<iostream>
using namespace std;
#include<string>

//模板局限性
//模板并不是万能的 有些特定数据类型 需要用具体化方式做特殊实现

class Person6
{
public:
	Person6(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

//对比两个数据是否相等函数
template<class T>
bool myCompare6(T& a, T& b)
{
	if (a == b)
		return true;
	else
	{
		return false;
	}
}

//利用具体化Person的版本实现代码 具体化优先调用
template<> bool myCompare6(Person6& p1, Person6& p2)
{
	if (p1.m_name == p2.m_name && p1.m_age == p2.m_age)
		return true;
	else
	{
		return false;
	}
}

void test016()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare6(a, b);
	if (ret)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}

void test026()
{
	Person6 p1("Tom", 10);
	Person6 p2("Tom", 10);

	bool ret = myCompare6(p1, p2);
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}

int main()

{
	//test016();
	test026();
	system("pause");

	return 0;
}