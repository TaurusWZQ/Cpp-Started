#include<iostream>
#include<string>
using namespace std;

int main4()


{
	//自写
	//int arr[5] = { 20,4,9,18,47 };
	//int a = 0;
	//for (int i = 0; i <= 2; i++)
	//{
	//	a = arr[i];
	//	arr[i] = arr[5 - i - 1];
	//	arr[5 - i - 1] = a;
	//}
	//for (int j = 0; j < 5; j++)
	//{
	//	cout << arr[j] << endl;
	//}

	// 1、创建数组
	int arr[5] = { 1,3,2,5,4 };
	cout << "数组逆置前: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	// 2、实现逆置
	// 2.1 记录起始下标位置
	// 2.2 记录结束下标位置
	// 2.3 起始下标与结束下标的元素互换
	// 2.4 起始位置++ 结束位置--
	// 2.5 循环执行2.1操作 直到起始位置>=结束位置

	int start = 0;// 起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;// 结束下标

	for (; start < end;)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;//实现元素互换
		start++;
		end--;//下标更新
	}

	cout << "数组逆置前: " << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << arr[j] << endl;
	}

	system("pause");

	return 0;
}