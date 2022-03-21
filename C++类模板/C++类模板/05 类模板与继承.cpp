#include<iostream>
using namespace std;

//类模板与继承

template<class T>
class Base5
{
public:
	T m;
};

//class Son :public Base //错误 必须要知道父类中的T类型 才能继承给子类
class Son5:public Base5<int>
{

};

void test015()
{
	Son5 s1;
}

//如果想灵活指定父类中T类型 子类也需要变成类模板
template<class T1, class T2>
class Son25 :public Base5<T2>
{
public:
	Son25()
	{
		cout << "T1 的类型为：" << typeid(T1).name() << endl;
		cout << "T2 的类型为：" << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test025()
{
	Son25<int, char>s2;
}

int main5()

{
	//test015();
	test025();
	system("pause");

	return 0;
}