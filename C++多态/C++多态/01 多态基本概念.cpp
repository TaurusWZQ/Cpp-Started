#include<iostream>
using namespace std;

//��̬

//������
class Animal1
{
public:
	//�麯��
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

//è��
class Cat1 :public Animal1
{
public:
	//��д ��������ֵ���� ������ �����б� ��ȫ��ͬ
	void speak()
	{
		cout << "������" << endl;
	}
};

//����
class Dog1 :public Animal1
{
public:
	void speak()
	{
		cout << "������" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ���  �ڱ���׶�ȷ��������ַ 
//�����ִ�� ���ຯ�� �� �����è˵��  ��ô���������ַ�Ͳ�����ǰ�� 
//��Ҫ�����н׶ν��а� ��ַ���


//��̬��̬��������
//1���м̳й�ϵ
//2��������д�����е��麯��

//��̬��̬ʹ��
//�����ָ��������� ָ���������


void doSpeak1(Animal1 &animal1)//Animal &animal = cat;
{
	animal1.speak();
}

void test011()
{
	Cat1 cat;
	doSpeak1(cat);
	Dog1 dog;
	doSpeak1(dog);
}

void test021()
{
	cout << "sizeof Animal = " << sizeof(Animal1) << endl;
}
int main1()

{
	//test011();
	test021();
	system("pause");

	return 0;
}