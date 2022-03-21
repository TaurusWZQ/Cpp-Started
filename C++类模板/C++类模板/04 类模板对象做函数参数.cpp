#include<iostream>
using namespace std;
#include<string>

//��ģ���������������

template<class T1,class T2>
class Person4
{
public:
	Person4(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson4()
	{
		cout << "name : " << this->m_Name << " age : " << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//1��ָ����������
void printPerson14(Person4<string, int>& p)
{
	p.showPerson4();
}
void test014()
{
	Person4<string, int>p("����", 30);
	printPerson14(p);
}


//2������ģ�廯
template<class T1,class T2>
void printPerson24(Person4<T1, T2>& p)
{
	p.showPerson4();
	cout << "T1 ������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2 ������Ϊ��" << typeid(T2).name() << endl;
}

void test024()
{
	Person4<string, int>p("����", 40);
	printPerson24(p);
}

//3��������ģ�廯
template<class T>
void printPerson34(T &p)
{
	p.showPerson4();
	cout << "T ����������Ϊ��" << typeid(T).name() << endl;
}

void test034()
{
	Person4<string, int>p("����", 20);
	printPerson34(p);
}

int main4()

{
	//test014();
	//test024();
	test034();
	system("pause");

	return 0;
}