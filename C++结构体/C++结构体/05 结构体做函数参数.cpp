#include<iostream>
#include<string>
using namespace std;

//����ѧ���ṹ��
struct student
{
	string name;//����
	int age;//����
	int score;//����
};

//��ӡѧ����Ϣ�ĺ���
//1��ֵ����
void printStudent1(struct student a)
{
	a.age = 100;
	cout << " �Ӻ����� ������" << a.name 
		 << " ���䣺" << a.age 
		 << " ������" << a.score << endl;
}


//2����ַ����
void printStudent2(struct student* p)
{
	//p->age = 100;
	cout << " �Ӻ���2�� ������" << p->name
		 << " ���䣺" << p->age
		 << " ������" << p->score << endl;
}
int main5()

{
	//�ṹ������������
	//��ѧ������һ�������У���ӡѧ�����ϵ�������Ϣ

	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;


	printStudent1(s);
	printStudent2(&s);
	cout << " main������ ������" << s.name 
		 << " ���䣺" << s.age 
		 << " ������" << s.score << endl;

	system("pause");

	return 0;
}