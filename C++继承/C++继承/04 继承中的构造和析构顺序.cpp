#include<iostream>
using namespace std;

//继承中构造和析构顺序
class Base4
{
public:
	Base4()
	{
		cout << "Base构造函数" << endl;
	}
	~Base4()
	{
		cout << "Base析构函数" << endl;
	}
};

class Son4 :public Base4
{
public:
	Son4()
	{
		cout << "Son构造函数" << endl;
	}
	~Son4()
	{
		cout << "Son析构函数" << endl;
	}
};

void test014()
{
	//Base b;

	//继承中的构造和析构顺序如下：
	//先构造父类 再构造子类 析构的顺序与析构的顺序相反

	Son4 s;
}
int main4()

{
	test014();
	system("pause");

	return 0;
}