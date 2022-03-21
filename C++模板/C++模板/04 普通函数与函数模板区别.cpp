#include<iostream>
using namespace std;

//普通函数与函数模板区别

//1、普通函数调用可以发生隐式类型转换
//2、函数模板 用自动类型推导 不可以发生隐式类型转换
//3、函数模板 用显示指定类型 可以发生隐式类型转换

int myAdd014(int a, int b)
{
	return a + b;
}

template<class T>
T myAdd024(T a, T b)
{
	return a + b;
}


void test014()
{
	int a = 10;
	int b = 20;
	char c = 'c';//a - 97  c - 99
	cout << myAdd014(a, c) << endl;
	//自动类型推导
	//cout << myAdd024(a, c) << endl;//2、函数模板 用自动类型推导 不可以发生隐式类型转换

	//显示指定类型 //3、函数模板 用显示指定类型 可以发生隐式类型转换
	cout << myAdd024<int>(a, c) << endl;
}

int main4()

{
	test014();
	system("pause");

	return 0;
}