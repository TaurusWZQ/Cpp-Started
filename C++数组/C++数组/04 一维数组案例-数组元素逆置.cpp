#include<iostream>
#include<string>
using namespace std;

int main4()


{
	//��д
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

	// 1����������
	int arr[5] = { 1,3,2,5,4 };
	cout << "��������ǰ: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	// 2��ʵ������
	// 2.1 ��¼��ʼ�±�λ��
	// 2.2 ��¼�����±�λ��
	// 2.3 ��ʼ�±�������±��Ԫ�ػ���
	// 2.4 ��ʼλ��++ ����λ��--
	// 2.5 ѭ��ִ��2.1���� ֱ����ʼλ��>=����λ��

	int start = 0;// ��ʼ�±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1;// �����±�

	for (; start < end;)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;//ʵ��Ԫ�ػ���
		start++;
		end--;//�±����
	}

	cout << "��������ǰ: " << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << arr[j] << endl;
	}

	system("pause");

	return 0;
}