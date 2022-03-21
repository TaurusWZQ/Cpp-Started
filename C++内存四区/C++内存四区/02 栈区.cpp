#include<iostream>
using namespace std;

//栈区数据注意事项  ---  不要返回局部变量的地址
//栈区的数据由编译器开辟和释放

int* func1()//形参数据也会放在栈区
{
	int a = 10;//局部变量  存放在栈区，栈区的数据在函数执行完成后自动释放
	return &a;//返回局部变量的地址
}
int main2()

{
	//接收func函数的返回值
	int* p = func1();
	cout << *p << endl;
	cout << *p << endl;
	system("pause");

	return 0;
}