#include<iostream>
using namespace std;
#include<queue>
#include<string>

//queue 队列
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
	Person p1("张三", 18);
	Person p2("李四", 20);
	Person p3("王五", 30);
	Person p4("Tom", 50);
	Person p5("Jerry", 28);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	q.push(p5);

	//判断只要队列不为空 查看对头 查看队尾 出队
	cout << "队列中的元素个数为：" << q.size() << endl;
	while (!q.empty())
	{
		cout << "队头元素——姓名为：" << q.front().m_Name << " 年纪为：" << q.front().m_Age << endl;
		cout << "队尾元素——姓名为：" << q.back().m_Name << " 年纪为：" << q.back().m_Age << endl;
		//出队
		q.pop();
	}
	cout << "队列中的元素个数为：" << q.size() << endl;

}

int main()

{
	test01();
	system("pause");

	return 0;
}