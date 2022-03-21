#include<iostream>
using namespace std;

//���ͽ�������
void SwapInt1(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
//�����ͽ�������
void SwapDoub1(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}
//����ģ��
template<typename T>//����һ��ģ�� ���߱�������������н����ŵ�T��Ҫ���� T��һ��ͨ����������
void MySwap1(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test011()
{
	int a = 10;
	int b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//SwapInt(a, b);
	//���ַ�ʽʹ�ú���ģ��
	//1���Զ������Ƶ�
	MySwap1(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 1.1;
	double d = 2.2;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	//SwapDoub(c, d);
	//2����ʾָ������
	MySwap1<double>(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}

int main1 ()

{
	test011();
	system("pause");

	return 0;
}