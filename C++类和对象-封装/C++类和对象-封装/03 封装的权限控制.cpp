#include<iostream>
using namespace std;
#include<string>

//访问权限
//三种
//公共权限 public		成员 类内可以访问 类外可以访问
//保护权限 protected	成员 类内可以访问 类外不可以访问 儿子可以访问父亲中的保护内容
//私有权限 private		成员 类内可以访问 类外不可以访问 儿子不可以访问父亲的私有内容

class person
{
public://公共权限
	string m_name;//姓名
protected://保护权限
	string m_car;//汽车
private://私有权限
	int m_Password;//银行卡密码
public:
	void func()
	{
		m_name = "张三";
		m_car = "宝马";
		m_Password = 123456;
	}
};



int main3()

{
	person p1;
	p1.m_name = "李四";
	//p1.m_car = "奔驰";//保护权限内容，在类外访问不到
	//p1.m_Password = 123456;//私有权限内容，在类外访问不到
	system("pause");

	return 0;
}