#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ����ù���
//1���������ģ�����ͨ���������Ե��� ���ȵ�����ͨ����
//2������ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
//3������ģ����Է�����������
//4���������ģ����Բ������õ�ƥ�� ���ȵ��ú���ģ��

void myPrint5(int a, int b)
{
	cout << "���õ���ͨ����" << endl;
}

template<class T>
void myPrint5(T a, T b)
{
	cout << "���õ�ģ��" << endl;
}

template<class T>
void myPrint5(T a, T b, T c)
{
	cout << "�������ص�ģ��" << endl;
}

void test015()
{
	int a = 10;
	int b = 20;
	//myPrint5(a, b);

	//ͨ����ģ������б� ǿ�Ƶ��ú���ģ��
	//myPrint5<>(a, b);

	//myPrint5(a, b, 100); //3������ģ����Է�����������

	//4���������ģ����Բ������õ�ƥ�� ���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';

	myPrint5(c1, c2);
}

int main5()

{
	test015();
	system("pause");

	return 0;
}