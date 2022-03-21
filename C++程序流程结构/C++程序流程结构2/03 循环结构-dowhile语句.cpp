#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main3()

{
	//srand((unsigned int)time(NULL));

	//int num = rand() % 100;
	//cout << num << endl;

	//do...while语句
	//在屏幕中输出 0 到 9 这10个数字

	int num = 0;
	do {
		cout << num << endl;
		num++;
	} while (num < 10);

	//do...while和while循环的区别  do...while会先执行一次循环语句

	system("pause");

	return 0;
}