#include<iostream>
using namespace std;

//���캯���ķ��༰����
//����
//  ���ղ�������    �޲ι���(Ĭ�Ϲ���) �� �вι���
//	�������ͷ���	��ͨ����  ��������
class Person2
{
public:
	//���캯��
	Person2()
	{
		cout << "Person �޲ι��캯������" << endl;
	}
	Person2(int a)
	{
		age = a;
		cout << "Person �вι��캯������" << endl;
	}
	//�������캯��
	Person2(const Person2 &p)
	{
		//������������ϵ��������ԣ�������������
		age = p.age;
		cout << "Person �������캯������" << endl;
	}
	~Person2()
	{
		cout << "Person ������������" << endl;
	}
//private:
	int age;
};

//����
void test011()
{
	//1�����ŷ�
	//Person p1;//Ĭ�Ϲ��캯������
	//Person p2(10);//�вι��캯��
	//Person p3(p2);//�������캯��

	//ע������
	// ����Ĭ�Ϲ��캯��ʱ�򣬲�Ҫ��()
	// ��Ϊ�������д��룬����������Ϊ��һ��������������������Ϊ�ڴ�������
	//Person p1();

	//void func();
	
	//cout << "p2�����䣺" << p2.age << endl;
	//cout << "p3�����䣺" << p3.age << endl;
	

	//2����ʾ��
	//Person p1;
	//Person p2 = Person(10);//�вι���
	//Person p3 = Person(p2);//��������

	//Person(10);//��������  �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	//cout << "aaaaa" << endl;

	//ע������2
	// ��Ҫ���ÿ������캯��  ��ʼ����������  ����������Ϊ Person(p3)==Person p3;��������
	//Person(p3);
	 
	//3����ʽת����
	Person2 p4 = 10;//�൱�� Person p4 = Person(10);  �вι���
	Person2 p5 = p4;//��������
}



int main2()

{
	test011();
	system("pause");

	return 0;
}