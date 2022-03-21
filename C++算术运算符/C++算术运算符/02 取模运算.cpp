#include<iostream>
#include<string>
using namespace std;

int main2()

{
	int a1 = 10;
	int b1 = 3;
	cout << a1 % b1 << endl;
	//int c1 = a1 % b1;
	//cout << c1 << endl;

	int a2 = 10;
	int b2 = 20;
	cout << a2 % b2 << endl;

	int a3 = 10;
	int b3 = 0;
	//两个数相除除数不可以为0
	//取模运算依赖于除法运算，所以也做不了取模运算
	//cout << a3 % b3 << endl;

	//两个小数是不可以做取模运算的
	double d1 = 3.14;
	double d2 = 5.20;
	//cout << d1 % d2 << endl;


	system("pause");

	return 0;
}