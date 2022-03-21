#include<iostream>
#include<string>
using namespace std;

int main1()

{
	//加减乘除

	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数相除 结果依然还是整数 小数部分去除

	int a2 = 10;
	int b2 = 20;

	cout << a2 / b2 << endl;//输出结果为0 不是四舍五入保留 小数部分是去除

	int a3 = 10;
	int b3 = 0;

	//cout << a3 / b3 << endl;//错误 ！两个数相除，除数是不可以为0的
	
	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;

	float d3 = 0.5;
	float d4 = 0.22;
	cout << d3 / d4 << endl;
	system("pause");

	return 0;
}