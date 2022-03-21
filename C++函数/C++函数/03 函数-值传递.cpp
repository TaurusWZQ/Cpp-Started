#include<iostream>
#include<string>
using namespace std;


//值传递
//定义函数，实现两个数字进行交换函数

//如果函数不需要返回值，声明的时候可以写void

void swap1(int num1,int num2)
{
	cout << "交换前:" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后:" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	//return;返回值不需要的时候，可以不写return
}
int main3()

{
	int a = 10;
	int b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//当我们做值传递的时候，函数的形参发生改变，并不会影响实参

	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}