#include<iostream>
using namespace std;

//ջ������ע������  ---  ��Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ��������ٺ��ͷ�

int* func1()//�β�����Ҳ�����ջ��
{
	int a = 10;//�ֲ�����  �����ջ����ջ���������ں���ִ����ɺ��Զ��ͷ�
	return &a;//���ؾֲ������ĵ�ַ
}
int main2()

{
	//����func�����ķ���ֵ
	int* p = func1();
	cout << *p << endl;
	cout << *p << endl;
	system("pause");

	return 0;
}