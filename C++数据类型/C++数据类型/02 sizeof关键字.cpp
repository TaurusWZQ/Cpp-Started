#include<iostream>
using namespace std;

int main2()

{
	//���ͣ� short (2) int (4) long (4) long long (8)
	//��������sizeof�����������ռ���ڴ��С
	//�﷨�� sizeof���������� /������  

	short num1 = 10;
	cout << "shortռ�õ��ڴ�ռ�Ϊ��" << sizeof(num1) << "�ֽ�" << endl;

	int num2 = 10;
	cout << "intռ�õ��ڴ�ռ�Ϊ��" << sizeof(int) << "�ֽ�" << endl;

	long num3 = 10;
	cout << "longռ�õ��ڴ�ռ�Ϊ��" << sizeof(long) << "�ֽ�" << endl;

	long long num4 = 10;
	cout << "long longռ�õ��ڴ�ռ�Ϊ��" << sizeof(long long) << "�ֽ�" << endl;
	
	//���ʹ�С�Ƚ�
	//short < int <= long <= long long
	system("pause");

	return 0;

}