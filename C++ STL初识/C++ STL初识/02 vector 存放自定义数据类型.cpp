#include<iostream>
using namespace std;
#include<vector>
#include<string>

//vector容器中存放自定义数据类型
class Person2
{
public:
	Person2(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void test012()
{
	vector<Person2> v;

	Person2 p1("张三", 30);
	Person2 p2("李四", 20);
	Person2 p3("王五", 40);
	Person2 p4("Tom", 18);
	Person2 p5("Jerry", 20);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//vector<Person>::iterator itBegin = v.begin();
	//vector<Person>::iterator itEnd = v.end();
	//while (itBegin != itEnd)
	//{
	//	cout << "name : " << itBegin->m_Name << " age : " << itBegin->m_Age << endl;
	//	itBegin++;
	//}
	
	for (vector<Person2>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "name : " << (*it).m_Name << " age : " << (*it).m_Age << endl;
		//cout << "name : " << it->m_Name << " age : " << it->m_Age << endl;
	}
}
//存放自定义数据类型 指针
void test022()
{
	vector<Person2*> v;

	Person2 p1("张三", 30);
	Person2 p2("李四", 20);
	Person2 p3("王五", 40);
	Person2 p4("Tom", 18);
	Person2 p5("Jerry", 20);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person2*>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << "name : " << (*it)->m_Name << " age : " << (*it)->m_Age << endl;
		cout << "name : " << (*(*it)).m_Name << " age :" << (*(*it)).m_Age << endl;
	}
}


int main2()

{
	//test012();
	test022();
	system("pause");

	return 0;
}