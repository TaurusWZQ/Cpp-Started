#include<iostream>
#include<string>
using namespace std;

int main()

{
	// switch语句
	// 给电影打分
	// 10 ~9 经典
	// 8 ~ 7 佳片
	// 6 ~ 5 一般
	// 5以下 烂片

	//1、提示用户给电影评分
	//2、用户开始进行打分
	int score = 0;
	cout << "请给出您对电影的评分： " << endl;
	cin >> score;
	//3、打印用户的评分
	cout << "您给出的评分为：" << score << endl;

	//4、根据用户输入的分数来提示用户最后的结果

	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl; break;//退出当前分支
	case 9:
		cout << "您认为是经典电影" << endl; break;
	case 8:
		cout << "您认为是佳片" << endl; break;
	case 7:
		cout << "您认为是佳片" << endl; break;
	case 6:
		cout << "您认为影片一般" << endl; break;
	case 5:
		cout << "您认为影片一般" << endl; break;
	default:
		cout << "您认为是烂片" << endl; break;
	}

	// if 和 switch 区别？
	// switch 缺点  判断时候只能是整型或者字符型，不可以是一个区间
	// switch 优点  结构清晰 执行效率高 

	system("pause");

	return 0;
}