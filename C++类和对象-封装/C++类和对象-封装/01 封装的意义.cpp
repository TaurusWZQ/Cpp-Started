#include<iostream>
using namespace std;

//���һ��Բ�࣬��Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ��2 * PI * �뾶
const double PI = 3.14;
//class �������һ���࣬���������ŵľ���������

class Circle
{
	//����Ȩ��
	//����Ȩ��
public:

	//����
	double m_r;//�뾶
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main1()

{
	//ͨ��Բ�� ���������Բ ������
	//ʵ���� ��ͨ��һ���� ����һ������Ĺ��̣�
	Circle c1;
	//��Բ���� �����Խ��и�ֵ
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;
	system("pause");

	return 0;
}