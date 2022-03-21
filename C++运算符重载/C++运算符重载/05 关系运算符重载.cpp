#include<iostream>
using namespace std;
#include<string>

//重载关系运算符

class Person5
{
public:
	Person5(string Name, int Age)
	{
		this->m_Name = Name;
		this->m_Age = Age;
	}
	string m_Name;
	int m_Age;
	bool operator==(Person5& p)
	{
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
			return true;
		else
			return false;
	}
	bool operator!=(Person5& p)
	{
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
			return false;
		else
			return true;
	}
};

void test015()
{
	Person5 p1("Tom", 18);
	Person5 p2("Jerry", 18);

	if (p1 == p2)
	{
		cout << "p1和p2相等" << endl;
	}
	else
		cout << "p1和p2不相等" << endl;

	if (p1 != p2)
	{
		cout << "p1和p2不相等" << endl;
	}
	else
		cout << "p1和p2相等" << endl;
}
int main5()

{
	test015();
	system("pause");

	return 0;
}