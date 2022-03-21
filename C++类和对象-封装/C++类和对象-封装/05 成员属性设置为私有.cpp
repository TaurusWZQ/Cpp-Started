#include<iostream>
#include<string>
using namespace std;

//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写 可以检测数据的有效性

//设计人类
class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}
	//获取年龄 可读可写 如果想修改 (年龄的范围必须是0~150之间)
	int getAge()
	{
		//m_Age = 0;//初始化为0岁
		return m_Age;
	}
	//设置年龄
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			m_Age = 0;
			cout << "输错了" << endl;
			return;
		}
		m_Age = age;
	}
	//设置情人 只写
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	string m_Name;//姓名	可读可写
	int m_Age;//年龄		只读	
	string m_Lover;//情人	只写
};
int main5()

{
	Person p;
	p.setName("张三");
	p.setAge(18);
	cout << "姓名为：" << p.getName() << endl;
	cout << "年龄为：" << p.getAge() << endl;

	//设置情人为冰冰女士
	p.setLover("冰冰");
	//cout << "情人为：" << p.m_Lover << endl;//数据不可以访问
	system("pause");

	return 0;
}