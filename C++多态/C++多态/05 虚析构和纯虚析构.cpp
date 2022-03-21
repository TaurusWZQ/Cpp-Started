#include<iostream>
using namespace std;

//虚析构和纯虚析构

class Animal5
{
public:
	Animal5()
	{
		cout << "Animal构造函数调用" << endl;
	}
	//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
	//virtual ~Animal()
	//{
	//	cout << "Animal析构函数调用" << endl;
	//}

	//纯虚析构  需要声明也需要实现
	//有了纯虚析构之后 这个类也属于抽象类 无法实例化对象
	virtual ~Animal5() = 0;

	//纯虚函数
	virtual void speak() = 0;
};
Animal5::~Animal5()
{
	cout << "Animal纯虚析构函数调用" << endl;
}
class Cat5 :public Animal5
{
public:
	Cat5(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_Name << "喵喵喵" << endl;
	}
	~Cat5()
	{
		if (m_Name != NULL)
		{
			cout << "Cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string* m_Name;
};

void test015()
{
	Animal5* animal5 = new Cat5("Tom");
	//父类指针在析构时候 不会调用子类中的析构函数 导致子类如果有堆区属性 出现内存泄漏
	animal5->speak();
	delete animal5;
}
int main5()

{
	test015();
	system("pause");

	return 0;
}