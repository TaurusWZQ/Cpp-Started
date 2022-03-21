#include<iostream>
using namespace std;

int main3()

{
	//1、单精度 float
	//2、双精度 double

	//float f1 = 3.14; 不加f 系统默认3.14为双精度 存在转化过程
	float f1 = 3.14f;

	cout << "f1 = " << f1 << endl;
	//float f1 = 3.1415926f;可以查看输出 输出结果为3.14159
	
	double d1 = 3.14;
	//double d1 = 3.141594;// 输出结果为3.14159
	//double d1 = 1.1415956;//输出结果为1.1416!！
	//double d1 = 0.1415926;//输出结果为0.141593！！产生进位
	
	cout << "d1 = " << d1 << endl;
	//double d1 = 3.1415926;可以查看输出 输出结果为3.14159

	//默认情况下 输出一个小数，会显示出6位有效数字

	//统计float和double占用内存空间大小
	cout << "float 占用的内存空间大小为 " << sizeof(float) << " 字节 " << endl;//4字节

	cout << "double 占用的内存空间大小为 " << sizeof(double) << " 字节 " << endl;//8字节
	
	//科学计数法
	float f2 = 3e2;//3 * 10^2
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;//3 * 0.1^2
	cout << "f3 = " << f3 << endl;
	
	system("pause");

	return 0;

}