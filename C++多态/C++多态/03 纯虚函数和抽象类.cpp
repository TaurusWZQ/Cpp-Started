#include<iostream>
using namespace std;

//���麯���ͳ�����
class Base3
{
public:
	//���麯��
	//ֻҪ��һ�����麯�� ������Ϊ������
	//�������ص㣺
	//1���޷�ʵ��������
	//2������������� ����Ҫ��д�����еĴ��麯�� ����Ҳ���ڳ�����

	virtual void func() = 0;
};

class Son3 :public Base3
{
public:
	virtual void func() 
	{
		cout << "func��������" << endl;
	};
};
void test013()
{
	//Base b;//�������޷�ʵ��������
	//new Base;//�������޷�ʵ��������
	//Son s;//���������д�����еĴ��麯�� �����޷�ʵ��������

	Base3* base = new Son3;
	base->func();
	delete base;
}
int main3()

{
	test013();
	system("pause");

	return 0;
}