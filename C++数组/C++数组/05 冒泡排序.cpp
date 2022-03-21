#include<iostream>
#include<string>
using namespace std;

int main5()

{
	//将数组 { 4,2,8,0,5,7,1,3,9 } 进行升序排序
	//自写

	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	cout << "原数组为：" << endl;
	for (int i = 0; i <= end; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int j = 0; j < end; j++)// 总共排序轮数为  元素个数 - 1
	{
		for (int i = 0; i < end-j; i++)//内层循环对比 次数=元素个数-当前轮数-1
		{
			if (arr[i] > arr[i+1])//如果第一个数字，比第二个数字大，交换两个数字
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	cout << "排序后数组为：" << endl;
	for (int i = 0; i <= end; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");

	return 0;

}