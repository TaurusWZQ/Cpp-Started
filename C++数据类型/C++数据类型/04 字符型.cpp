#include<iostream>
using namespace std;

int main4()

{
	//1���ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;
	
	//2���ַ��ͱ�����ռ�ڴ��С
	cout << "char��ռ�ڴ�Ϊ" << sizeof(char) << "�ֽ�" << endl;

	//3���ַ��ͱ�����������

	//char ch2 = "b";//�����ַ��ͱ�����ʱ��Ҫ�õ�����
	//char ch3 = 'abcdef';//�����ַ��ͱ���ʱ�򣬵�������ֻ����һ���ַ�
	
	//4���ַ��ͱ���
	//a - 97
	//A - 65
	cout << (int)ch << endl;

	system("pause");

	return 0;

}