#include<iostream>
using namespace std;

class Person03
{
public:
	Person03()
	{
		cout << "Person03 默认构造函数的调用" << endl;
	}
	Person03(int a)
	{
		m_age = a;
		cout << "Person03 有参构造函数的调用" << endl;
	}
	Person03(const Person03 &p)
	{
		m_age = p.m_age;
		cout << "Person03 拷贝构造函数的调用" << endl;
	}
	~Person03()
	{
		cout << "Person03 析构函数的调用" << endl;
	}
	int m_age;
};

//拷贝构造函数调用时机

//1、使用一个已经创建完毕的对象来初始化一个新对象
void test013()
{
	Person03 p1(10);
	Person03 p2(p1);

	cout << "p2的年龄为：" << p2.m_age << endl;
}


//2、值传递的方式给函数参数传值
void doWork(Person03 p)
{

}

void test023()
{
	Person03 p;
	doWork(p);
}

//3、值方式返回局部对象

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