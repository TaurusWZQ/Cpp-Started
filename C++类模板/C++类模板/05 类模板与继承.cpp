#include<iostream>
using namespace std;

//��ģ����̳�

template<class T>
class Base5
{
public:
	T m;
};

//class Son :public Base //���� ����Ҫ֪�������е�T���� ���ܼ̳и�����
class Son5:public Base5<int>
{

};

void test015()
{
	Son5 s1;
}

//��������ָ��������T���� ����Ҳ��Ҫ�����ģ��
template<class T1, class T2>
class Son25 :public Base5<T2>
{
public:
	Son25()
	{
		cout << "T1 ������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2 ������Ϊ��" << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test025()
{
	Son25<int, char>s2;
}

int main5()

{
	//test015();
	test025();
	system("pause");

	return 0;
}