#include<iostream>
using namespace std;

//�̳��еĶ���ģ��

class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :public Base3
{
public:
	int m_D;
};

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷� E:
//��ת�ļ�·�� cd ����·����
//�鿴����
// cl /d1 reportSingleClassLayout���� �ļ���
void test013()
{
	//16
	// ���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	// ������˽�г�Ա���� �Ǳ��������������� ��˷��ʲ��� ��ȷʵ���̳���ȥ��
	cout << "sizeof Son = " << sizeof(Son3) << endl;
}
int main3()

{ 
	test013();
	system("pause");

	return 0;
}