#include<iostream>
using namespace std;
#include<string>

class Building;
class GoodGuy
{
public:
	GoodGuy();

	void visit();//��visit�������Է���Building��˽�г�Ա
	void visit2();//��visit2���������Է���Building��˽�г�Ա

	Building* building;
};
class Building
{
	//���߱����� GoodGuy���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
	friend void GoodGuy::visit();
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//����ʵ�ֳ�Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
GoodGuy::GoodGuy()
{
	building = new Building;
}

void GoodGuy::visit()
{
	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
}
void GoodGuy::visit2()
{
	cout << "visit2�������ڷ��ʣ�" << building->m_SittingRoom << endl;

	//cout << "visit2�������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test01()
{
	GoodGuy gg;
	gg.visit();
	gg.visit2();
}
int main()

{
	test01();
	system("pause");

	return 0;
}