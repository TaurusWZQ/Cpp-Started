#include<iostream>
#include<string>
using namespace std;

int main2()

{
	// ��������;
	// 1������ͨ��������ͳ����������ռ���ڴ��С
	
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr) << "�ֽ�" << endl;
	cout << "ÿ��Ԫ��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr[0]) << "�ֽ�" << endl;
	cout << "�����е�Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << "��" << endl;
	
	// 2������ͨ���������鿴�����׵�ַ
	cout << "������׵�ַΪ��" << (long long)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (long long) & arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (long long) & arr[1] << endl;

	// �������ǳ����������Խ��и�ֵ����
	//arr = 100;


	system("pause");

	return 0;
}