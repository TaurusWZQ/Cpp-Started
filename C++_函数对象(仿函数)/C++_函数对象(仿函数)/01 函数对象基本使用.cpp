#include<iostream>
using namespace std;

//�������󣨷º�����
/*
* ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
* �������󳬳���ͨ�����ĸ����������������Լ���״̬
* �������������Ϊ��������
*/


class MyAdd1
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//1������������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
void test011()
{
	MyAdd1 myadd;
	cout << myadd(10, 10) << endl;
}

//2���������󳬳���ͨ�����ĸ����������������Լ���״̬
class MyPrint1
{
public:
	MyPrint1()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	int count;//�ڲ��Լ�״̬
};
void test021()
{
	MyPrint1 myprint;
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	cout << "myprint���ô�����" << myprint.count << endl;
}

//3���������������Ϊ��������
void doPrint1(MyPrint1& mp, string test)
{
	mp(test);
}
void test031()
{
	MyPrint1 myprint;
	doPrint1(myprint, "hello cpp");
}
int main1()

{
	//test011();
	//test021();
	test031();
	system("pause");

	return 0;
}