#include<iostream>
using namespace std;

//����ģ��ע������
//1���Զ������Ƶ� �����Ƶ���һ�µ���������T�ſ���ʹ��
//2��ģ�����Ҫȷ����T���������� �ſ���ʹ��

template<class T>//typename �����滻�� class
void mySwap2(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//1���Զ������Ƶ� �����Ƶ���һ�µ���������T�ſ���ʹ��
void test012()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//mySwap2(a, b);//��ȷ
	//mySwap2(a, c);//���� �Ƶ�����һ�µ�T����
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//2��ģ�����Ҫȷ����T���������� �ſ���ʹ��
template<class T>
void func2()
{
	cout << "func ����" << endl;
}

void test022()
{
	func2<int>();
}
int main2()

{
	//test012();
	test022();
	system("pause");

	return 0;
}