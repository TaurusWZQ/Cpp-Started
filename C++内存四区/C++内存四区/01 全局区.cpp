#include<iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 10, g_b = 10;

//const���ε�ȫ�ֱ�����ȫ�ֳ���
const int c_g_a = 10;

int main1()

{
	//ȫ����

	//ȫ�ֱ�������̬����������


	//������ͨ�ֲ�����
	int a = 10, b = 10;
	
	cout << "�ֲ�����a�ĵ�ַΪ��" << (long long)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << (long long)&b << endl;
	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << (long long)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ��" << (long long)&g_b << endl;

	//��̬���� ����ͨ����ǰ���static,���ھ�̬����
	static int s_a = 10, s_b = 10;
	cout << "��̬����s_a�ĵ�ַΪ��" << (long long)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ��" << (long long)&s_b << endl;

	//����
	//�ַ�������
	cout << "�ַ��������ĵ�ַΪ��" << (long long)&"hello world" << endl;

	//const���εı���
	//const���ε�ȫ�ֱ�����const���εľֲ�����
	cout << "ȫ�ֳ��� c_g_a�ĵ�ַΪ��" << (long long)&c_g_a << endl;

	const int c_l_a = 10;
	cout << "�ֲ����� c_l_a�ĵ�ַΪ��" << (long long)&c_l_a << endl;
	system("pause");

	return 0;
}