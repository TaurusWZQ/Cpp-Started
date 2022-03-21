#include<iostream>
#include<string>
using namespace std;

int main3()

{
	//1、前置递增
	int a = 10;
	++a;//让变量+1
	cout << "a = " << a << endl;

	//2、后置递增
	int b = 10;
	b++;//让变量+1
	cout << "b = " << b << endl;

	//3、前置和后置的区别
	//前置递增 先让变量+1 然后进行表达式运算
	int a2 = 10;
	int b2;
	b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	//后置递增 先进行表达式运算，后让变量+1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;

	//4、前置递减
	int c = 10;
	--c;//让变量-1
	cout << "c = " << c << endl;

	//5、后置递减
	int d = 10;
	d--;//让变量-1
	cout << "d = " << d << endl;

	//6、前置和后置的区别
	int c2 = 10;
	int d2 = --c2 * 10;
	cout << "c2 = " << c2 << endl;
	cout << "d2 = " << d2 << endl;

	int c3 = 10;
	int d3 = c3-- * 10;
	cout << "c3 = " << c3 << endl;
	cout << "d3 = " << d3 << endl;

	//前置递减 先让变量-1，后进行表达式计算
	//后置递减 先进行表达式计算，后变量-1
	system("pause");

	return 0;
}