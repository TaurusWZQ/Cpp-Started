#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ������

//1����ͨ�������ÿ��Է�����ʽ����ת��
//2������ģ�� ���Զ������Ƶ� �����Է�����ʽ����ת��
//3������ģ�� ����ʾָ������ ���Է�����ʽ����ת��

int myAdd014(int a, int b)
{
	return a + b;
}

template<class T>
T myAdd024(T a, T b)
{
	return a + b;
}


void test014()
{
	int a = 10;
	int b = 20;
	char c = 'c';//a - 97  c - 99
	cout << myAdd014(a, c) << endl;
	//�Զ������Ƶ�
	//cout << myAdd024(a, c) << endl;//2������ģ�� ���Զ������Ƶ� �����Է�����ʽ����ת��

	//��ʾָ������ //3������ģ�� ����ʾָ������ ���Է�����ʽ����ת��
	cout << myAdd024<int>(a, c) << endl;
}

int main4()

{
	test014();
	system("pause");

	return 0;
}