#include<iostream>
using namespace std;

int main5()

{
	//1��const����ָ�� ����ָ��
	int a = 10;
	int b = 10;
	const int* p = &a;
	//ָ��ָ���ֵ�����Ը�,ָ���ָ����Ը�
	//*p = 20;  ����


	//2��const���γ��� ָ�볣��
	//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	int* const p2 = &a;
	*p2 = 100;//��ȷ��
	//p2 = &b; //����ָ���ָ�򲻿��Ը�


	//3��const����ָ��ͳ��� 
	const int* const p3 = &a;
	//*p3 = 100;//����
	//p3 = &b;//����

	system("pause");

	return 0;
}