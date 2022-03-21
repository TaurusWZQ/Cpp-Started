#include<iostream>
using namespace std;
#include<queue>
#include<string>

//queue ����
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void test01()
{
	queue<Person> q;
	Person p1("����", 18);
	Person p2("����", 20);
	Person p3("����", 30);
	Person p4("Tom", 50);
	Person p5("Jerry", 28);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	q.push(p5);

	//�ж�ֻҪ���в�Ϊ�� �鿴��ͷ �鿴��β ����
	cout << "�����е�Ԫ�ظ���Ϊ��" << q.size() << endl;
	while (!q.empty())
	{
		cout << "��ͷԪ�ء�������Ϊ��" << q.front().m_Name << " ���Ϊ��" << q.front().m_Age << endl;
		cout << "��βԪ�ء�������Ϊ��" << q.back().m_Name << " ���Ϊ��" << q.back().m_Age << endl;
		//����
		q.pop();
	}
	cout << "�����е�Ԫ�ظ���Ϊ��" << q.size() << endl;

}

int main()

{
	test01();
	system("pause");

	return 0;
}