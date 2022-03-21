#include<iostream>
using namespace std;
#include<string>

//string 字符串查找与替换

//1、查找
void test014()
{
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	cout << pos << endl;
	//rfind与find区别
	//rfind从右往左查找 find从左往右查找
	cout << (int)str1.rfind("de") << endl;
}

//2、替换
void test024()
{
	string str1 = "abcdefg";
	//从1号位置起 3个字符替换成“1111”
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;
}

int main4()

{
	//test014();
	test024();
	system("pause");

	return 0;
}