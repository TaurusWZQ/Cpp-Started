#include<iostream>
using namespace std;

//实现两个数字进行交换
void swap01(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main7()

{
	//指针和函数

	//1、值传递
	int a = 10, b = 20;
	//swap01(a, b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;


	//2、地址传递 
	//如果是地址传递，可以修饰实参
	swap02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");

	return 0;
}