#include<iostream>
using namespace std;

class C1
{
	int m_A;//Ĭ��Ȩ�� ˽��
};
struct C2
{
	int m_A;//Ĭ��Ȩ�� ����
};
int main4()

{
	//struct �� class����
	//struct Ĭ��Ȩ���� ���� public
	//class  Ĭ��Ȩ���� ˽�� private
	C1 c1;
	//c1.m_A = 10;//��class��Ĭ��Ȩ�� ˽�У�������ⲻ���Է���
	C2 c2;
	c2.m_A = 10;//��structĬ�ϵ�Ȩ��Ϊ��������˿��Է���
	system("pause");

	return 0;
}