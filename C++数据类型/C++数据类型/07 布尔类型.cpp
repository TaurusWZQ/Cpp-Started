#include<iostream>
#include<string>
using namespace std;

int main7()

{
	//1、创建bool数据类型
	bool flag = true;//true代表真
	cout << flag << endl;

	flag = false;
	cout << flag << endl;//false代表假

	//本质上 1代表真 0代表假


	//2、查看bool类型所占内存空间

	cout << "bool类型所占内存空间为：" << sizeof(bool) << "字节" << endl;

	system("pause");

	return 0;
}