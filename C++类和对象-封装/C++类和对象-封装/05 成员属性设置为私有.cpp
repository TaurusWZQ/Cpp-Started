#include<iostream>
#include<string>
using namespace std;

//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д ���Լ�����ݵ���Ч��

//�������
class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}
	//��ȡ���� �ɶ���д ������޸� (����ķ�Χ������0~150֮��)
	int getAge()
	{
		//m_Age = 0;//��ʼ��Ϊ0��
		return m_Age;
	}
	//��������
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			m_Age = 0;
			cout << "�����" << endl;
			return;
		}
		m_Age = age;
	}
	//�������� ֻд
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	string m_Name;//����	�ɶ���д
	int m_Age;//����		ֻ��	
	string m_Lover;//����	ֻд
};
int main5()

{
	Person p;
	p.setName("����");
	p.setAge(18);
	cout << "����Ϊ��" << p.getName() << endl;
	cout << "����Ϊ��" << p.getAge() << endl;

	//��������Ϊ����Ůʿ
	p.setLover("����");
	//cout << "����Ϊ��" << p.m_Lover << endl;//���ݲ����Է���
	system("pause");

	return 0;
}