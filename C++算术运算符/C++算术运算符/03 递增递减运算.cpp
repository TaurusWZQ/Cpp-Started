#include<iostream>
#include<string>
using namespace std;

int main3()

{
	//1��ǰ�õ���
	int a = 10;
	++a;//�ñ���+1
	cout << "a = " << a << endl;

	//2�����õ���
	int b = 10;
	b++;//�ñ���+1
	cout << "b = " << b << endl;

	//3��ǰ�úͺ��õ�����
	//ǰ�õ��� ���ñ���+1 Ȼ����б��ʽ����
	int a2 = 10;
	int b2;
	b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	//���õ��� �Ƚ��б��ʽ���㣬���ñ���+1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;

	//4��ǰ�õݼ�
	int c = 10;
	--c;//�ñ���-1
	cout << "c = " << c << endl;

	//5�����õݼ�
	int d = 10;
	d--;//�ñ���-1
	cout << "d = " << d << endl;

	//6��ǰ�úͺ��õ�����
	int c2 = 10;
	int d2 = --c2 * 10;
	cout << "c2 = " << c2 << endl;
	cout << "d2 = " << d2 << endl;

	int c3 = 10;
	int d3 = c3-- * 10;
	cout << "c3 = " << c3 << endl;
	cout << "d3 = " << d3 << endl;

	//ǰ�õݼ� ���ñ���-1������б��ʽ����
	//���õݼ� �Ƚ��б��ʽ���㣬�����-1
	system("pause");

	return 0;
}