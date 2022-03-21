#include<iostream>
using namespace std;

//整型交换函数
void SwapInt1(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
//浮点型交换函数
void SwapDoub1(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}
//函数模板
template<typename T>//声明一个模板 告诉编译器后面代码中紧跟着的T不要报错 T是一个通用数据类型
void MySwap1(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test011()
{
	int a = 10;
	int b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//SwapInt(a, b);
	//两种方式使用函数模板
	//1、自动类型推导
	MySwap1(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 1.1;
	double d = 2.2;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	//SwapDoub(c, d);
	//2、显示指定类型
	MySwap1<double>(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}

int main1 ()

{
	test011();
	system("pause");

	return 0;
}