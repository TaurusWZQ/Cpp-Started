#include<iostream>
using namespace std;

//ð��������  ����1  ������׵�ַ   ����2  ���鳤��
void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			//���j > j+1 ��ֵ  ��������
			if (arr[j + 1] < arr[j])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

//��ӡ����
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()

{
	//1���ȴ�������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	//���鳤��
	int len = sizeof(arr) / sizeof(arr[0]);

	//2������������ʵ��ð������
	bubbleSort(arr, len);

	//3����ӡ����������
	printArray(arr, len);
	system("pause");

	return 0;
}