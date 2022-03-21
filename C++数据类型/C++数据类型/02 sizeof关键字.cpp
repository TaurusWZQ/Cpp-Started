#include<iostream>
using namespace std;

int main2()

{
	//整型： short (2) int (4) long (4) long long (8)
	//可以利用sizeof求出数据类型占用内存大小
	//语法： sizeof（数据类型 /变量）  

	short num1 = 10;
	cout << "short占用的内存空间为：" << sizeof(num1) << "字节" << endl;

	int num2 = 10;
	cout << "int占用的内存空间为：" << sizeof(int) << "字节" << endl;

	long num3 = 10;
	cout << "long占用的内存空间为：" << sizeof(long) << "字节" << endl;

	long long num4 = 10;
	cout << "long long占用的内存空间为：" << sizeof(long long) << "字节" << endl;
	
	//整型大小比较
	//short < int <= long <= long long
	system("pause");

	return 0;

}