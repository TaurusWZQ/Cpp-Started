#include<iostream>
using namespace std;

//类模板与函数模板区别
template<class NameType,class AgeType=int>
class Person2 
{
public:
	Person2(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	
	void ShowPerson2()
	{
		cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

//1、类模板没有自动类型推导使用方式
void test012()
{
	//Person p("张三", 20); 错误 无法自动类型推导
	Person2<string, int>p("张三", 20);//正确 只能用显示指定类型
	p.ShowPerson2();
}

//2、类模板在模板参数列表中可以有默认参数
void test022()
{
	Person2<string>p("赵四", 30);
	p.ShowPerson2();
}

int main2()

{
	//test012();
	test022();
	system("pause");

	return 0;
}