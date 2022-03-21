#include<iostream>
using namespace std;

//交换函数

//1、值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a = " << a << endl;
	cout << "swap01 b = " << b << endl;
}
//2、地址传递
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3、引用传递
void mySwap03(int& c, int& d)
{
	int temp = c;
	c = d;
	d = temp;
}

int main3()

{
	int a = 10, b = 20;
	//mySwap01(a, b);//值传递 形参修饰不了实参
	//mySwap02(&a, &b);//地址传递  形参能够修饰实参
	mySwap03(a, b);//引用传递 形参会修饰实参
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");

	return 0;
}