#include<iostream>
using namespace std;

//���ص��������

class MyInteger3
{
	friend ostream& operator<<(ostream& cout, MyInteger3 myint);
public:
	MyInteger3()
	{
		m_Num = 0;
	}
	//����ǰ��++�����
	//����������Ϊ��һֱ��һ�����ݽ��е�������
	MyInteger3& operator++()
	{
		//�Ƚ�����++����
		++m_Num;
		//��������
		return *this;
	}
	//���غ���++�����
	//void operator++(int)  int����ռλ������������������ǰ�úͺ��õ���
	MyInteger3 operator++(int)
	{
		//�� ��¼��ʱ���
		MyInteger3 temp = *this;
		//�� ����
		m_Num++;
		//��󽫼�¼���������
		return temp;
	}

private:
	int m_Num;
};

//�������������
ostream& operator<<(ostream& cout, MyInteger3 myint)
{
	cout << myint.m_Num;
	return cout;
}
void test013()
{
	MyInteger3 myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}
void test023()
{
	MyInteger3 myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main3()

{
	 
	//test013();
	test023();
	system("pause");

	return 0;
}