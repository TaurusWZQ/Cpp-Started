#include<iostream>
using namespace std;

//类模板语法

template<class NameType,class AgeType>
class Person1
{
public:
	Person1(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void ShowPerson1()
	{
		cout << "name = " << this->m_Name << " age = " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

void test011()
{
	Person1<string, int> p1("张三", 18);
	p1.ShowPerson1();
}

int main1()

{
	test011();
	system("pause");

	return 0;
}