#include<iostream>
using namespace std;
#include<map>

//map���� �Զ�����������
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
class comparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		//���й涨 ������Ϊ�涨����������
		return p1.m_Age < p2.m_Age;
	}
};
void test01()
{
	//����Զ������� ��Ҫ��Ϊ�涨�������
	map<Person, int,comparePerson> m;

	Person p1("����", 24);
	Person p2("����", 28);
	Person p3("����", 20);
	Person p4("����", 35);
	Person p5("����", 30);

	m.insert(pair<Person, int>(p1, 10));
	m.insert(pair<Person, int>(p2, 20));
	m.insert(pair<Person, int>(p3, 30));
	m.insert(pair<Person, int>(p4, 40));
	m.insert(pair<Person, int>(p5, 50));
	for (map<Person, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key name:" << it->first.m_Name << " key age:" << (*it).first.m_Age << " vaule :" << it->second << endl;
	}
	cout << endl;


}
int main()

{
	test01();
	system("pause");

	return 0;
}