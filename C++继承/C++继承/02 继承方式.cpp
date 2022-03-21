#include<iostream>
using namespace std;

//继承方式

//公共继承

class Base12
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son12 :public Base12
{
public:

	void func()
	{
		m_A = 10;//父类中的公共权限成员 到子类中依然是公共权限
		m_B = 10;//父类中的保护权限成员 到子类中依然是保护权限
		//m_C = 10;//父类中的私有权限成员 子类中访问不到
	}
};

void test012()
{
	Son12 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//到子类中 m_B中是保护权限 类外访问不到
}

//保护权限
class Base22
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son22 :protected Base22
{
public:
	void func()
	{
		m_A = 100;//父类中公共成员		到子类中变为保护权限
		m_B = 100;//父类中保护成员		到子类中变为保护权限
		//m_C = 100;//父类中私有成员	子类访问不到
	}
};

void test022()
{
	Son22 s2;
	//s2.m_A = 1000;//在Son2中 m_A变为保护权限 类外访问不到
	//s2.m_B = 1000;//在Son2中 m_B仍然为保护权限 类外访问不到
}

//私有继承

class Base32
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son32 :private Base32
{
public:
	void func()
	{
		m_A = 100;//父类中公共权限成员	到子类中变为	私有成员
		m_B = 100;//父类中保护权限成员	到子类中变为	私有成员
		//m_C = 100;//父类中私有权限成员，子类访问不到
	}
};

class GrandSon32 :public Son32
{
public:
	void func()
	{
		//m_A = 1000;//Son3 中 m_A变为私有成员，子类访问不到
		//m_B = 1000;//Son3 中 m_B变为私有成员，子类访问不到
	}
};

void test032()
{
	Son32 s3;
	//s3.m_A = 1000;//Son3中 变为 私有成员 类外访问不到
	//s3.m_B = 1000;//Son3中 变为 私有成员 类外访问不到
}
int main2()

{

	system("pause");

	return 0;
}