#include<iostream>
using namespace std;

//普通实现页面

//Java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++、...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//
////Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++、...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
////C++页面
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++、...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};

//继承实现页面

//公共页面类
class BasePage1
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python、C++、...（公共分类列表）" << endl;
	}
};

//继承的好处：减少重复代码
//语法：class 子类 ：继承方式 父类
//	子类	也称为	派生类
//	父类	也称为	基类


//Java页面
class Java1 :public BasePage1
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};
//Python页面
class Python1 :public BasePage1
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};

//C++页面
class CPP1 :public BasePage1
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};

void test011()
{
	Java1 ja;
	cout << "Java页面如下：" << endl;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	Python1 py;
	cout << "-----------------" << endl;
	cout << "Python页面如下：" << endl;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "-----------------" << endl;
	CPP1 cpp;
	cout << "C++页面如下：" << endl;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}
int main1()

{
	test011();
	system("pause");

	return 0;
}