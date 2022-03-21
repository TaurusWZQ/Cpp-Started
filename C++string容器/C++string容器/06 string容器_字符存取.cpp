#include<iostream>
using namespace std;
#include<string>

//string 字符存取
void test016()
{
	string str = "hello";

	//1、通过[]访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	//2、通过at方式访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//修改单个字符
	str[0] = 'x';
	cout << "str = " << str << endl;
	str.at(1) = 'x';
	cout << "str = " << str << endl;
}

int main6()

{
	test016();
	system("pause");

	return 0;
}