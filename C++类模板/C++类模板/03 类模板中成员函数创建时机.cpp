#include<iostream>
using namespace std;

//��ģ���г�Ա��������ʱ��
//��ģ���г�Ա�����ڵ���ʱ��ȥ����

class Person013
{
public:
	void showPerson013()
	{
		cout << "Person01 show" << endl;
	}
};

class Person023
{
public:
	void showPerson023()
	{
		cout << "Person02 show" << endl;
	}
};
template<class T>
class MyClass3
{
public:

	void func1()
	{
		obj.showPerson013();
	}

	void func2()
	{
		obj.showPerson023();
	}


	T obj;

};

void test013()
{
	MyClass3<Person013>m;
	m.func1();
	//m.func2();
}

int main3()

{
	test013();
	system("pause");

	return 0;
}