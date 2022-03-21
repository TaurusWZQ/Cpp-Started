#include<iostream>
using namespace std;

//左移运算符重载

class Person2
{
	friend ostream& operator<<(ostream& cout, Person2& p);
public:
	Person2(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
private:

	//利用成员函数重载 左移运算符 p.operator<<(cout)  简化版本 p << cout
	//不会利用成员函数重载<<运算符，因为无法实现 cout在左侧

	//void operator<<(cout)
	//{

	//}
	
	int m_A;
	int m_B;
};

//只能利用全局函数重载左移运算符
ostream & operator<<(ostream &out,Person2 &p)//本质 operator<<(cout,p)  简化  cout<<p
{
	out << "m_A = " << p.m_A << " " << "m_B = " << p.m_B;
	return out;
}
void test012()
{
	Person2 p(10,10);
	/*p.m_A = 10;
	p.m_B = 10;*/

	cout << p <<"hello world"<< endl;
}

int main2()

{
	test012();
	system("pause");

	return 0;
}