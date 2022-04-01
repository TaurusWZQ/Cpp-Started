#include<iostream>
using namespace std;

//函数对象（仿函数）
/*
* 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
* 函数对象超出普通函数的概念，函数对象可以有自己的状态
* 函数对象可以作为参数传递
*/


class MyAdd1
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//1、函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
void test011()
{
	MyAdd1 myadd;
	cout << myadd(10, 10) << endl;
}

//2、函数对象超出普通函数的概念，函数对象可以有自己的状态
class MyPrint1
{
public:
	MyPrint1()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	int count;//内部自己状态
};
void test021()
{
	MyPrint1 myprint;
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	cout << "myprint调用次数：" << myprint.count << endl;
}

//3、函数对象可以作为参数传递
void doPrint1(MyPrint1& mp, string test)
{
	mp(test);
}
void test031()
{
	MyPrint1 myprint;
	doPrint1(myprint, "hello cpp");
}
int main1()

{
	//test011();
	//test021();
	test031();
	system("pause");

	return 0;
}