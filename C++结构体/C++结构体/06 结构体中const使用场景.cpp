#include<iostream>
#include<string>
using namespace std;

//const��ʹ�ó���

struct student
{
	string name;//����
	int age;//����
	int score;//����
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudents(const student *a)
{
	//a->age = 100;
	//����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���������
	cout << " ������" << a->name
		 << " ���䣺" << a->age
		 << " ������" << a->score << endl;
}
int main6()

{
	//�����ṹ�����
	struct student s = { "����",15,70 };

	//ͨ��������ӡ�ṹ����Ϣ
	printStudents(&s);
	cout << " mian������������" << s.name
		 << " ���䣺" << s.age
		 << " ������" << s.score << endl;
	system("pause");

	return 0;
}