#include<iostream>
#include<string>
using namespace std;

int main()

{
	//二维数组案例-考试成绩统计

	//1、创建二维数组

	int score[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	//2、统计每个人的总合分数
	string name[] = { "张三","李四","王五" };

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
		}
		// cout << "第"<< i + 1 << "个人的总分为：" << sum << endl;// 注意 i + 1
		cout << name[i] << "的总分为：" << sum << endl;
	}


	system("pause");

	return 0;
}