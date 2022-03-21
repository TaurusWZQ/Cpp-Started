#include<iostream>
#include<string>
using namespace std;

int main2()

{
	// 选择结构 - 多行if语句
	// 输入考试分数，如果分数大于600，视为考上一本大学，在屏幕输出
	// 如果没有达到要求，打印未考上一本大

	//1、输入考试分数
	int score = 0;
	cout << "请输入您的分数： " << endl;
	cin >> score;

	//2、提示用户输入的分数
	cout << "您的分数为： " << score << endl;

	//3、判断 如果大于600 打印考上一本 否则打印未考上一本
	if (score > 600)// 大于600分执行下面大括号中的内容
	{
		cout << "恭喜您 考上一本" << endl;
	}
	else//不大于600分，执行else后大括号中的内容
	{
		cout << "胜败乃兵家常事，少侠请重新来过" << endl;
	}

	system("pause");

	return 0;
}