#include<iostream>
using namespace std;

//��Ա���� �� ��Ա����  �ֿ��洢��

class Person1
{
	int m_A;// �Ǿ�̬��Ա����  ������Ķ�����

	static int m_B;//��̬��Ա����	�������������

	void func(){}//�Ǿ�̬��Ա����	�������������

	static void func2(){}//��̬��Ա����	��������Ķ�����
};
int Person1::m_B = 0;

void test011()
{
	Person1 p;
	//�ն���ռ���ڴ�ռ�Ϊ��1
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;
}

void test021()
{
	Person1 p;
	cout << "size of p = " << sizeof(p) << endl;
}

int main1()

{
	//test01();
	test021();
	system("pause");

	return 0;
}