#include<iostream>
#include<string>
using namespace std;

int main1()

{
	//�Ӽ��˳�

	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//����������� �����Ȼ�������� С������ȥ��

	int a2 = 10;
	int b2 = 20;

	cout << a2 / b2 << endl;//������Ϊ0 �����������뱣�� С��������ȥ��

	int a3 = 10;
	int b3 = 0;

	//cout << a3 / b3 << endl;//���� ������������������ǲ�����Ϊ0��
	
	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;

	float d3 = 0.5;
	float d4 = 0.22;
	cout << d3 / d4 << endl;
	system("pause");

	return 0;
}