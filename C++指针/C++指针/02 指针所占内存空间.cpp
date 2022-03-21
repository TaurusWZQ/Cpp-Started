#include<iostream>
using namespace std;

int main2()

{
	//指针所占内存空间
	int a = 10;
	int * p = &a;

	// 在32位操作系统下，指针是占4个字节空间大小，不管是什么数据类型
	// 在64位操作系统下，指针是占8个字节空间大小
	cout << "指针p所占内存空间为：" << sizeof(p) << "字节" << endl;
	cout << "sizeof(int *) = " << sizeof(int *) << "字节" << endl;
	cout << "sizeof(float *) = " << sizeof(float *) << "字节" << endl;
	cout << "sizeof(double *) = " << sizeof(double *) << "字节" << endl;
	cout << "sizeof(char *) = " << sizeof(char *) << "字节" << endl;


	system("pause");

	return 0;
}