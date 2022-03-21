#include<iostream>
using namespace std;
#include<string>


//类做友元
class Building2;
class GoodGuy2
{
public:
	GoodGuy2();
public:
	void visit();//参观函数 访问Building中的属性
	Building2* building2;
};

class Building2
{
	//GoodGuy类是本类的好朋友，可以访问本类私有成员
	friend class GoodGuy2;
public:
	Building2();

public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//类外写成员函数
Building2::Building2()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
GoodGuy2::GoodGuy2()
{
	//创建建筑物对象
	building2 = new Building2;
}
void GoodGuy2::visit()
{
	cout << "好基友类正在访问：" << building2->m_SittingRoom << endl;
	cout << "好基友类正在访问：" << building2->m_BedRoom << endl;
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