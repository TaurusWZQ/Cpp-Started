#include<iostream>
#include<string>
using namespace std;

int main1()
{
	//1������ָ��
	int a = 10;
	//ָ�붨����﷨���������� * ָ�������
	int * p;
	//��ָ���¼����a�ĵ�ַ
	p = &a;
	cout << "a�ĵ�ַΪ�� " << &a << endl;
	cout << "ָ��pΪ�� " << p << endl;

	//2��ʹ��ָ��
	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	//ָ��ǰ�� * ��������ã��ҵ�ָ��ָ����ڴ��е�����
	*p = 10000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");

	return 0;
}