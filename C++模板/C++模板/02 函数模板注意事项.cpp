#include<iostream>
using namespace std;

//函数模板注意事项
//1、自动类型推导 必须推导出一致的数据类型T才可以使用
//2、模板必须要确定出T的数据类型 才可以使用

template<class T>//typename 可以替换成 class
void mySwap2(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//1、自动类型推导 必须推导出一致的数据类型T才可以使用
void test012()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//mySwap2(a, b);//正确
	//mySwap2(a, c);//错误 推导不出一致的T类型
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//2、模板必须要确定出T的数据类型 才可以使用
template<class T>
void func2()
{
	cout << "func 调用" << endl;
}

void test022()
{
	func2<int>();
}
int main2()

{
	//test012();
	test022();
	system("pause");

	return 0;
}