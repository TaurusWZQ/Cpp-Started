#include<iostream>
#include<string>
using namespace std;

//1������ѧ���������� �� ѧ�����������������䣬������
//�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
//�﷨:
//struct �������� { ��Ա�б� };
struct Student1
{
	//��Ա�б�

	//����
	string name;
	//����
	int age;
	//����
	int score;
}s3; //˳�㴴���ṹ�����


//2��ͨ��ѧ�����ʹ�������ѧ��



int main1()

{
// 2.1 struct Student s1
	//struct�ؼ��ֿ���ʡ��
	Student1 s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;

// 2.2 struct Student s2 = { ... }
	struct Student1 s2 = { "����",19,80 };
	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;

	// 2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ����� 
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "������" << s3.name << " ���䣺" << s3.age << " ������" << s3.score << endl;
	system("pause");

	return 0;
}