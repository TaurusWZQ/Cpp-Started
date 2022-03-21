#include<iostream>
#include<string>
using namespace std;

int main1()

{
	// while 循环
	// 在屏幕中打印0~9 这10个数字
	// 注意事项： 在写循环一定要避免死循环的出现
	int num = 0;
	while (num < 10)
	{
		cout << num << endl;
		num++;
	}
	system("pause");

	return 0;
}