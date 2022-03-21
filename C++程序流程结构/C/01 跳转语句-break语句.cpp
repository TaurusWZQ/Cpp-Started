#include<iostream>
#include<string>
using namespace std;

int main1()

{
	//break的使用时机

	// 1、出现在switch语句中
	//cout << "请选择副本难度" << endl;
	//cout << "1、简单模式" << endl;
	//cout << "2、正常模式" << endl;
	//cout << "3、困难模式" << endl;

	//int select = 0;//创建选择结果的变量
	//cin >> select;//等待用户输入
	//switch (select)
	//{
	//case 1:
	//	cout << "你选择的是简单模式" << endl;
	//	break;
	//case 2:
	//	cout << "你选择的是正常模式" << endl;
	//	break;
	//case 3:
	//	cout << "你选择的是困难模式" << endl;
	//	break;
	//default:
	//	break;
	//}

	// 2、出现在循环语句中
	//for (int i = 0; i < 10; i++)
	//{
	//	// 如果i等于5 退出循环
	//	cout << i << endl;
	//	if (i == 5)
	//	{
	//		break;
	//	}
	//}

	// 3、出现在嵌套循环语句中

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;// 退出内层循环
			}
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}