#include<iostream>
using namespace std;

//1、解决名称冲突

//2、返回对象本身用*this

class Person2
{
public:
	Person2(int age)
	{
		//this指针指向  被调用的成员函数  所属的对象
		this->age = age;
	}
	Person2& PersonAddAge(Person2 &p)
	{
		this->age += p.age;
		//this 指向p2的指针，而*this指向的就是p2
		return *this;
	}
	int age;
};

void test012()
{
	Person2 p1(18);
	cout << "p1的年龄为：" << p1.age << endl;

}
void test022()
{
	Person2 p1(10);

	Person2 p2(10);

	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2的年龄为：" << p2.age << endl;
}

int main2()

{
	//test01();
	test022();
	system("pause");

	return 0;
}