#include<iostream>
#include<string>
using namespace std;

int main7()

{
	// 二维数组名称用途

	// 1、可以查看占用内存空间大小
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6} 
	};

	cout << "该二维数组所占内存空间为：" << sizeof(arr) << "字节" << endl;
	cout << "该二维数组第一行所占内存空间为：" << sizeof(arr[0]) << "字节" << endl;
	cout << "该二维数组第一个元素所占内存空间为：" << sizeof(arr[0][0]) << "字节" << endl;

	cout << "该二维数组的行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "该二维数组的列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	// 2、可以查看二维数组的首地址

	cout << "该二维数组的首地址为：" << (long long)arr << endl;
	cout << "该二维数组第一行首地址为：" << (long long)arr[0] << endl;
	cout << "该二维数组第二行首地址为：" << (long long)arr[1] << endl;

	cout << "该二维数组第一个元素首地址为：" << (long long)&arr[0][0] << endl;
	cout << "该二维数组第二个元素首地址为：" << (long long)&arr[0][1] << endl;
	
	// 针对元素的地址 牢记取址符

	system("pause");

	return 0;
}