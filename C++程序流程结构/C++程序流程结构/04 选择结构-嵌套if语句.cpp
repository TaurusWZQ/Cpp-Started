#include<iostream>
#include<string>
using namespace std;

int main4()

{
	/*
      提示用户输入一个高考考试分数，根据分数做如下判断
      分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
      在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。
	*/

	//1、提示输入分数
	int score = 0;
	cout << "请输入您的分数： " << endl;
	cin >> score;
	
	//2、显示输入的分数
	cout << "您输入的分数为： " << score << endl;

	//3、判断
	// 如果大于600  一本
		// 大于700  北大
		// 大于650  清华
		// 其余     人大
	// 如果大于500  二本
	// 如果大于400  三本
	// 其余情况， 未考上本科
	if (score > 600)
	{
		cout << "恭喜您上一本！" << endl;
		if (score > 700)
		{
			cout << "你能考上北大！" << endl;
		}
		else if (score > 650)
		{
			cout << "你能考上清华！" << endl;
		}
		else
		{
			cout << "你能考上人大！" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "恭喜你考上二本" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜你考上三本" << endl;
	}
	else
	{
		cout << "胜败乃兵家常事，少侠请重新来过" << endl;
	}

	system("pause");

	return 0;
}