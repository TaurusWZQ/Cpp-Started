#include<iostream>
#include<string>
using namespace std;

int main3()

{
	//在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};
	//找出并打印最重的小猪体重。

	//自写
	int arr[5] = { 300,350,200,400,250 };
	int max = 0;
	int a = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			a = i+1;//第一次出错了
		}
	}
	cout << "第"<<a<<"只小猪最重"<<" "<<"最重小猪体重为：" << max << endl;
	system("pause");

	return 0;
}