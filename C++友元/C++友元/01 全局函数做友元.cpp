#include<iostream>
using namespace std;
#include<string>

//建筑物类
class Building1
{
	//goodGuy全局函数是Building好朋友，可以访问Building中私有成员
	friend void goodGuy1(Building1* building);
public:
	Building1()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom;//客厅

private:
	string m_BedRoom;//卧室
};

//全局函数

void goodGuy1(Building1 *building)
{
	cout << "好基友全局函数 正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;
}
void test011()
{
	Building1 building;
	goodGuy1(&building);
}
int main1()

{
	test011();
	system("pause");

	return 0;
}