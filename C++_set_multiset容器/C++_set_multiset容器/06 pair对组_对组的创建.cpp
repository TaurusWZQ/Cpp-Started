#include<iostream>
using namespace std;

//pair对组的创建

void test016()
{
	//第一种方式
	pair<string, int> p("Tom", 20);
	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;

	//第二种方式
	pair<string, int> p2 = make_pair("Jerry", 30);
	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
}

int main6()

{
	test016();
	system("pause");

	return 0;
}