#include<iostream>
using namespace std;
#include<map>

//map容器 自定义类型排序
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
		//自行规定 这里人为规定按年龄升序
		return p1.m_Age < p2.m_Age;
	}
};
void test01()
{
	//存放自定义类型 需要人为规定排序规则
	map<Person, int,comparePerson> m;

	Person p1("张三", 24);
	Person p2("李四", 28);
	Person p3("王五", 20);
	Person p4("赵六", 35);
	Person p5("孙七", 30);

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