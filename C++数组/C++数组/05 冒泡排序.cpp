#include<iostream>
#include<string>
using namespace std;

int main5()

{
	//������ { 4,2,8,0,5,7,1,3,9 } ������������
	//��д

	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	cout << "ԭ����Ϊ��" << endl;
	for (int i = 0; i <= end; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int j = 0; j < end; j++)// �ܹ���������Ϊ  Ԫ�ظ��� - 1
	{
		for (int i = 0; i < end-j; i++)//�ڲ�ѭ���Ա� ����=Ԫ�ظ���-��ǰ����-1
		{
			if (arr[i] > arr[i+1])//�����һ�����֣��ȵڶ������ִ󣬽�����������
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	cout << "���������Ϊ��" << endl;
	for (int i = 0; i <= end; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");

	return 0;

}