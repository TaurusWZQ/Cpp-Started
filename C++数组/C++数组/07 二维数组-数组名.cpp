#include<iostream>
#include<string>
using namespace std;

int main7()

{
	// ��ά����������;

	// 1�����Բ鿴ռ���ڴ�ռ��С
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6} 
	};

	cout << "�ö�ά������ռ�ڴ�ռ�Ϊ��" << sizeof(arr) << "�ֽ�" << endl;
	cout << "�ö�ά�����һ����ռ�ڴ�ռ�Ϊ��" << sizeof(arr[0]) << "�ֽ�" << endl;
	cout << "�ö�ά�����һ��Ԫ����ռ�ڴ�ռ�Ϊ��" << sizeof(arr[0][0]) << "�ֽ�" << endl;

	cout << "�ö�ά���������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "�ö�ά���������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	// 2�����Բ鿴��ά������׵�ַ

	cout << "�ö�ά������׵�ַΪ��" << (long long)arr << endl;
	cout << "�ö�ά�����һ���׵�ַΪ��" << (long long)arr[0] << endl;
	cout << "�ö�ά����ڶ����׵�ַΪ��" << (long long)arr[1] << endl;

	cout << "�ö�ά�����һ��Ԫ���׵�ַΪ��" << (long long)&arr[0][0] << endl;
	cout << "�ö�ά����ڶ���Ԫ���׵�ַΪ��" << (long long)&arr[0][1] << endl;
	
	// ���Ԫ�صĵ�ַ �μ�ȡַ��

	system("pause");

	return 0;
}