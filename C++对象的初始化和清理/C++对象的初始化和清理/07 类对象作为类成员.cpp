#include<iostream>
using namespace std;
#include<string>

//类对象作为类成员

//手机类
class Phone
{
public:
	Phone(string PName)
	{
		m_PName = PName;
		cout << "Phone 构造函数调用" << endl;
	}
	~Phone()
	{
		cout << "Phone 析构函数调用" << endl;
	}
	string m_PName;//手机品牌
};
//人类
class Person7
{
public:
	//Phone m_Phone = pName 隐式转换法
	Person7(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person 构造函数调用" << endl;
	}
	~Person7()
	{
		cout << "Person 析构函数调用" << endl;
	}

	string m_Name;//姓名
	Phone m_Phone;//手机
};

//当其他类对象作为本类成员，构造时候先构造类对象，再构造自身
//析构顺序与构造相反
void test017()
{
	Person7 p("张三", "苹果11");

	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}
int main7()

{
	test017();
	system("pause");

	return 0;
}