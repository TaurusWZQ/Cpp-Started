#include<iostream>
using namespace std;
#include<string>


//������Ԫ
class Building2;
class GoodGuy2
{
public:
	GoodGuy2();
public:
	void visit();//�ιۺ��� ����Building�е�����
	Building2* building2;
};

class Building2
{
	//GoodGuy���Ǳ���ĺ����ѣ����Է��ʱ���˽�г�Ա
	friend class GoodGuy2;
public:
	Building2();

public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//����д��Ա����
Building2::Building2()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
GoodGuy2::GoodGuy2()
{
	//�������������
	building2 = new Building2;
}
void GoodGuy2::visit()
{
	cout << "�û��������ڷ��ʣ�" << building2->m_SittingRoom << endl;
	cout << "�û��������ڷ��ʣ�" << building2->m_BedRoom << endl;
}

void test012()
{
	GoodGuy2 gg;
	gg.visit();
}
int main2()

{
	test012();
	system("pause");

	return 0;
}