#include<iostream>
using namespace std;

//�������������

class Person2
{
	friend ostream& operator<<(ostream& cout, Person2& p);
public:
	Person2(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
private:

	//���ó�Ա�������� ��������� p.operator<<(cout)  �򻯰汾 p << cout
	//�������ó�Ա��������<<���������Ϊ�޷�ʵ�� cout�����

	//void operator<<(cout)
	//{

	//}
	
	int m_A;
	int m_B;
};

//ֻ������ȫ�ֺ����������������
ostream & operator<<(ostream &out,Person2 &p)//���� operator<<(cout,p)  ��  cout<<p
{
	out << "m_A = " << p.m_A << " " << "m_B = " << p.m_B;
	return out;
}
void test012()
{
	Person2 p(10,10);
	/*p.m_A = 10;
	p.m_B = 10;*/

	cout << p <<"hello world"<< endl;
}

int main2()

{
	test012();
	system("pause");

	return 0;
}