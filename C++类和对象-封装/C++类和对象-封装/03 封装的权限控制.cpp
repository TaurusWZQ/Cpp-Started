#include<iostream>
using namespace std;
#include<string>

//����Ȩ��
//����
//����Ȩ�� public		��Ա ���ڿ��Է��� ������Է���
//����Ȩ�� protected	��Ա ���ڿ��Է��� ���ⲻ���Է��� ���ӿ��Է��ʸ����еı�������
//˽��Ȩ�� private		��Ա ���ڿ��Է��� ���ⲻ���Է��� ���Ӳ����Է��ʸ��׵�˽������

class person
{
public://����Ȩ��
	string m_name;//����
protected://����Ȩ��
	string m_car;//����
private://˽��Ȩ��
	int m_Password;//���п�����
public:
	void func()
	{
		m_name = "����";
		m_car = "����";
		m_Password = 123456;
	}
};



int main3()

{
	person p1;
	p1.m_name = "����";
	//p1.m_car = "����";//����Ȩ�����ݣ���������ʲ���
	//p1.m_Password = 123456;//˽��Ȩ�����ݣ���������ʲ���
	system("pause");

	return 0;
}