#include<iostream>
#include<string>
using namespace std;

//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

//��д

//class Student
//{
//	//Ȩ��
//public:
//	//����
//	string s_name;
//	long long ID;
//	//��Ϊ
//	void sort()
//	{
//		string name;
//		cin >> name;
//		s_name = name;
//		long long p_ID;
//		cin >> p_ID;
//		ID = p_ID;
//	}
//	void show()
//	{
//		cout << s_name << endl;
//		cout << ID << endl;
//	}
//
//
//};
//int main()
//
//{
//	Student s1;
//	s1.sort();
//	s1.show();
//	system("pause");
//
//	return 0;
//}


//�μ�

//���ѧ����
class Student
{
public://����Ȩ��
	//���е����Ժ���Ϊ ����ͳһ��Ϊ ��Ա
	//����   ��Ա���� ��Ա����
	//��Ϊ   ��Ա���� ��Ա����

	//����
	string m_Name;//����
	int m_Id;//ѧ��
	
	//��Ϊ
	//��ʾ������ѧ��
	void showStudent()
	{
		cout << "������" << m_Name << " ѧ�ţ�" << m_Id << endl;
	}
	//��������ֵ
	void setName(string name)
	{
		m_Name = name;
	}
	//��ѧ�Ÿ�ֵ
	void setId(int Id)
	{
		m_Id = Id;
	}
};
int main2()

{
	//����һ������ѧ��  ʵ��������
	Student s1;
	//��s1���� �������Ը�ֵ����
	//s1.m_Name = "����";
	s1.setName("����");
	//s1.m_Id = 1;
	s1.setId(1);
	s1.showStudent();

	system("pause");

	return 0;
}