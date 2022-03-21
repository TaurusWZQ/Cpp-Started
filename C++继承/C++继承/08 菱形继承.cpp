#include<iostream>
using namespace std;

//动物类
class Aniaml 
{
public:
	int m_Age;
};

//利用虚继承 解决菱形继承的问题
//继承之前 加上关键字 virtual 变为虚继承
//Animal类称为 虚基类
//羊类
class Sheep :virtual public Aniaml
{

};
//驼类
class Camel :virtual public Aniaml
{

};
//羊驼类 
class SheepCamel :public Sheep, public Camel
{

};

void test01()
{
	SheepCamel sc;
	sc.Sheep::m_Age = 18;
	sc.Camel::m_Age = 28;
	//当菱形继承，两个父类拥有相同数据，需要加以作用域加以区分
	cout << "sc.Sheep::m_Age = " << sc.Sheep::m_Age << endl;
	cout << "sc.Camel::m_Age = " << sc.Camel::m_Age << endl;
	cout << "sc.m_Age = " << sc.m_Age << endl;
	//这份数据 只需一份既可 菱形继承会导致数据存在两份 资源浪费

}
int main()

{
	test01();
	system("pause");

	return 0; 
}