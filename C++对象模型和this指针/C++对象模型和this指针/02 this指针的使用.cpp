#include<iostream>
using namespace std;

//1��������Ƴ�ͻ

//2�����ض�������*this

class Person2
{
public:
	Person2(int age)
	{
		//thisָ��ָ��  �����õĳ�Ա����  �����Ķ���
		this->age = age;
	}
	Person2& PersonAddAge(Person2 &p)
	{
		this->age += p.age;
		//this ָ��p2��ָ�룬��*thisָ��ľ���p2
		return *this;
	}
	int age;
};

void test012()
{
	Person2 p1(18);
	cout << "p1������Ϊ��" << p1.age << endl;

}
void test022()
{
	Person2 p1(10);

	Person2 p2(10);

	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2������Ϊ��" << p2.age << endl;
}

int main2()

{
	//test01();
	test022();
	system("pause");

	return 0;
}