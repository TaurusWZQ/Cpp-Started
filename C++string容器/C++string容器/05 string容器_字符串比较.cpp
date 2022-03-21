#include<iostream>
using namespace std;

//string字符串比较

void test015()
{
	string str1 = "hello";
	string str2 = "xello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1等于str2" << endl;
	}
	else if (str1.compare(str2)>0)
	{
		cout << "str1大于str2" << endl;
	}
	else
	{
		cout << "str1小于str2" << endl;
	}
}


int main5()

{
	test015();
	system("pause");

	return 0;
}