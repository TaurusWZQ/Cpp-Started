#include<iostream>
using namespace std;

int main3()

{
	//1�������� float
	//2��˫���� double

	//float f1 = 3.14; ����f ϵͳĬ��3.14Ϊ˫���� ����ת������
	float f1 = 3.14f;

	cout << "f1 = " << f1 << endl;
	//float f1 = 3.1415926f;���Բ鿴��� ������Ϊ3.14159
	
	double d1 = 3.14;
	//double d1 = 3.141594;// ������Ϊ3.14159
	//double d1 = 1.1415956;//������Ϊ1.1416!��
	//double d1 = 0.1415926;//������Ϊ0.141593����������λ
	
	cout << "d1 = " << d1 << endl;
	//double d1 = 3.1415926;���Բ鿴��� ������Ϊ3.14159

	//Ĭ������� ���һ��С��������ʾ��6λ��Ч����

	//ͳ��float��doubleռ���ڴ�ռ��С
	cout << "float ռ�õ��ڴ�ռ��СΪ " << sizeof(float) << " �ֽ� " << endl;//4�ֽ�

	cout << "double ռ�õ��ڴ�ռ��СΪ " << sizeof(double) << " �ֽ� " << endl;//8�ֽ�
	
	//��ѧ������
	float f2 = 3e2;//3 * 10^2
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;//3 * 0.1^2
	cout << "f3 = " << f3 << endl;
	
	system("pause");

	return 0;

}