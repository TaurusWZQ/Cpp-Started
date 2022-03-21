#include<iostream>
using namespace std;
#include<string>

//ͨ��ȫ�ֺ��� ��ӡPerson��Ϣ

//��ǰ�ñ�����֪��Person��Ĵ���
template<class T1, class T2>
class Person;


template<class T1, class T2>
void printPerson2(Person<T1, T2> p);


template<class T1,class T2>
class Person
{
	//ȫ�ֺ��� ����ʵ��
	friend void printPerson(Person<T1,T2> p)
	{
		cout << "name : " << p.m_Name << " age : " << p.m_Age << endl;
	}

	//ȫ�ֺ��� ����ʵ��
	//�ӿ�ģ������б�
	//���ȫ�ֺ��� �� ����ʵ�� ��Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson2<>(Person<T1, T2> p);
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};
//����ʵ��
template<class T1,class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "name : " << p.m_Name << " age : " << p.m_Age << endl;
}


void test018()
{
	Person<string, int>p("����", 30);
	printPerson(p);

}
void test028()
{
	Person<string, int>p("����", 40);
	printPerson2(p);

}
int main8()

{
	//test018();
	test028();
	system("pause");

	return 0;
}