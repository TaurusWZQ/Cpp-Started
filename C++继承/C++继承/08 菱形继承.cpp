#include<iostream>
using namespace std;

//������
class Aniaml 
{
public:
	int m_Age;
};

//������̳� ������μ̳е�����
//�̳�֮ǰ ���Ϲؼ��� virtual ��Ϊ��̳�
//Animal���Ϊ �����
//����
class Sheep :virtual public Aniaml
{

};
//����
class Camel :virtual public Aniaml
{

};
//������ 
class SheepCamel :public Sheep, public Camel
{

};

void test01()
{
	SheepCamel sc;
	sc.Sheep::m_Age = 18;
	sc.Camel::m_Age = 28;
	//�����μ̳У���������ӵ����ͬ���ݣ���Ҫ�����������������
	cout << "sc.Sheep::m_Age = " << sc.Sheep::m_Age << endl;
	cout << "sc.Camel::m_Age = " << sc.Camel::m_Age << endl;
	cout << "sc.m_Age = " << sc.m_Age << endl;
	//������� ֻ��һ�ݼȿ� ���μ̳лᵼ�����ݴ������� ��Դ�˷�

}
int main()

{
	test01();
	system("pause");

	return 0; 
}