#include<iostream>
using namespace std;
#include<functional>
//内建函数对象 算术仿函数

//negate 一元仿函数 取反仿函数
void test014()
{
	negate<int> n;
	cout << n(50) << endl;
}
//plus 二元仿函数 加法
void test024()
{
	plus<int> p;
	cout << p(10, 20) << endl;
}
int main4()

{
	//test014();
	test024();
	system("pause");

	return 0;
}