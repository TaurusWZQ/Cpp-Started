#include<iostream>
using namespace std;

//string�ַ����Ƚ�

void test015()
{
	string str1 = "hello";
	string str2 = "xello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1����str2" << endl;
	}
	else if (str1.compare(str2)>0)
	{
		cout << "str1����str2" << endl;
	}
	else
	{
		cout << "str1С��str2" << endl;
	}
}


int main5()

{
	test015();
	system("pause");

	return 0;
}