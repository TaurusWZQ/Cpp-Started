#include<iostream>
using namespace std;

//赋值运算符重载

class Person4
{
public:
	Person4(int age)
	{
		m_Age = new int(age);
	}
	
	//重载 赋值运算符

	Person4& operator=(Person4 &p)
	{
		//编译器是提供浅拷贝
		//m_Age = p.m_Age;

		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝

		if (this->m_Age != NULL)
		{
			delete this->m_Age;
			this->m_Age = NULL;
		}
		//深拷贝
		m_Age = new int(*p.m_Age);
		//返回对象本身
		return *this;
	}
	~Person4()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	int *m_Age;
};

void test014()
{
	Person4 p1(18);
	Person4 p2(20);
	Person4 p3(30);
	p3 = p2 = p1;

	cout << "p1的年龄为：" << *p1.m_Age << endl;
	cout << "p2的年龄为：" << *p2.m_Age << endl;
	cout << "p3的年龄为：" << *p3.m_Age << endl;
}
int main4()

{
	test014();
	system("pause");

	return 0;
}