#include<iostream>
using namespace std;

//��ģ���뺯��ģ������
template<class NameType,class AgeType=int>
class Person2 
{
public:
	Person2(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	
	void ShowPerson2()
	{
		cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

//1����ģ��û���Զ������Ƶ�ʹ�÷�ʽ
void test012()
{
	//Person p("����", 20); ���� �޷��Զ������Ƶ�
	Person2<string, int>p("����", 20);//��ȷ ֻ������ʾָ������
	p.ShowPerson2();
}

//2����ģ����ģ������б��п�����Ĭ�ϲ���
void test022()
{
	Person2<string>p("����", 30);
	p.ShowPerson2();
}

int main2()

{
	//test012();
	test022();
	system("pause");

	return 0;
}