#include<iostream>
#include<string>
using namespace std;

//�ṹ��ָ��

//����ѧ���ṹ��
struct student
{
	string name;//����
	int age;//���
	int score;//����
};
int main3()

{
	//����ѧ���ṹ�����
	struct student s = { "����",18,100 };

	//2��ͨ��ָ��ָ��ṹ�����
	struct student * p = &s;

	//3��ͨ��ָ����ʽṹ������е�����
	// ͨ���ṹ��ָ��  ���ʽṹ���е����ԣ���Ҫ���� ' -> ' 
	cout << "������" << p->name 
		 << " ���䣺" << p->age 
		 << " ������" << p->score << endl;

	system("pause");

	return 0;
}