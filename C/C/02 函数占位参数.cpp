#include<iostream>
using namespace std;

//占位参数
//返回值类型 函数名（数据类型）{}
//占位参数 还可以有默认参数

void func(int a,int =10)
{
	cout << "this is a func" << endl;
}
int main2()

{
	func(10);
	system("pause");

	return 0;
}