#include<iostream>
using namespace std;

//�̳з�ʽ

//�����̳�

class Base12
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son12 :public Base12
{
public:

	void func()
	{
		m_A = 10;//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		m_B = 10;//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//m_C = 10;//�����е�˽��Ȩ�޳�Ա �����з��ʲ���
	}
};

void test012()
{
	Son12 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//�������� m_B���Ǳ���Ȩ�� ������ʲ���
}

//����Ȩ��
class Base22
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son22 :protected Base22
{
public:
	void func()
	{
		m_A = 100;//�����й�����Ա		�������б�Ϊ����Ȩ��
		m_B = 100;//�����б�����Ա		�������б�Ϊ����Ȩ��
		//m_C = 100;//������˽�г�Ա	������ʲ���
	}
};

void test022()
{
	Son22 s2;
	//s2.m_A = 1000;//��Son2�� m_A��Ϊ����Ȩ�� ������ʲ���
	//s2.m_B = 1000;//��Son2�� m_B��ȻΪ����Ȩ�� ������ʲ���
}

//˽�м̳�

class Base32
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son32 :private Base32
{
public:
	void func()
	{
		m_A = 100;//�����й���Ȩ�޳�Ա	�������б�Ϊ	˽�г�Ա
		m_B = 100;//�����б���Ȩ�޳�Ա	�������б�Ϊ	˽�г�Ա
		//m_C = 100;//������˽��Ȩ�޳�Ա��������ʲ���
	}
};

class GrandSon32 :public Son32
{
public:
	void func()
	{
		//m_A = 1000;//Son3 �� m_A��Ϊ˽�г�Ա��������ʲ���
		//m_B = 1000;//Son3 �� m_B��Ϊ˽�г�Ա��������ʲ���
	}
};

void test032()
{
	Son32 s3;
	//s3.m_A = 1000;//Son3�� ��Ϊ ˽�г�Ա ������ʲ���
	//s3.m_B = 1000;//Son3�� ��Ϊ ˽�г�Ա ������ʲ���
}
int main2()

{

	system("pause");

	return 0;
}