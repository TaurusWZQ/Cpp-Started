#include<iostream>
using namespace std;

//��������

//1��ֵ����
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a = " << a << endl;
	cout << "swap01 b = " << b << endl;
}
//2����ַ����
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3�����ô���
void mySwap03(int& c, int& d)
{
	int temp = c;
	c = d;
	d = temp;
}

int main3()

{
	int a = 10, b = 20;
	//mySwap01(a, b);//ֵ���� �β����β���ʵ��
	//mySwap02(&a, &b);//��ַ����  �β��ܹ�����ʵ��
	mySwap03(a, b);//���ô��� �βλ�����ʵ��
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");

	return 0;
}