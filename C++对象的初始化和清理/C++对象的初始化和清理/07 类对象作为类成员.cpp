#include<iostream>
using namespace std;
#include<string>

//�������Ϊ���Ա

//�ֻ���
class Phone
{
public:
	Phone(string PName)
	{
		m_PName = PName;
		cout << "Phone ���캯������" << endl;
	}
	~Phone()
	{
		cout << "Phone ������������" << endl;
	}
	string m_PName;//�ֻ�Ʒ��
};
//����
class Person7
{
public:
	//Phone m_Phone = pName ��ʽת����
	Person7(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person ���캯������" << endl;
	}
	~Person7()
	{
		cout << "Person ������������" << endl;
	}

	string m_Name;//����
	Phone m_Phone;//�ֻ�
};

//�������������Ϊ�����Ա������ʱ���ȹ���������ٹ�������
//����˳���빹���෴
void test017()
{
	Person7 p("����", "ƻ��11");

	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
}
int main7()

{
	test017();
	system("pause");

	return 0;
}