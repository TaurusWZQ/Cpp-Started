#include<iostream>
using namespace std;
#include<string>

//string 子串
void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;
}
//实用操作
void test02()
{
	string email = "zhangsan@sina.com";
	//从邮件地址中 获取 用户名信息
	int ret = email.rfind("@");
	string M_id = email.substr(0, ret);
	cout << M_id << endl;
}
int main()

{
	//test01();
	test02();
	system("pause");

	return 0;
}