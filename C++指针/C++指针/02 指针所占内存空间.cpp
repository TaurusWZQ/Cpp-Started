#include<iostream>
using namespace std;

int main2()

{
	//ָ����ռ�ڴ�ռ�
	int a = 10;
	int * p = &a;

	// ��32λ����ϵͳ�£�ָ����ռ4���ֽڿռ��С��������ʲô��������
	// ��64λ����ϵͳ�£�ָ����ռ8���ֽڿռ��С
	cout << "ָ��p��ռ�ڴ�ռ�Ϊ��" << sizeof(p) << "�ֽ�" << endl;
	cout << "sizeof(int *) = " << sizeof(int *) << "�ֽ�" << endl;
	cout << "sizeof(float *) = " << sizeof(float *) << "�ֽ�" << endl;
	cout << "sizeof(double *) = " << sizeof(double *) << "�ֽ�" << endl;
	cout << "sizeof(char *) = " << sizeof(char *) << "�ֽ�" << endl;


	system("pause");

	return 0;
}