#include<iostream>
using namespace std;

//设计立方体类(Cube)
//求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等。
class Cube
{
public:
	void setL(long long l)
	{
		m_L = l;
	}
	void setH(long long h)
	{
		m_H = h;
	}
	void setW(long long w)
	{
		m_W = w;
	}
	long long getL()
	{
		return m_L;
	}
	long long getW()
	{
		return m_W;
	}
	long long getH()
	{
		return m_H;	
	}
	long long V()
	{
		return m_L * m_W * m_H;
	}
	long long S()
	{
		return 2 * m_L * m_H + 2 * m_L * m_W + 2 * m_H * m_W;
	}
	//成员函数比较是否相同
	bool IsSameByClass(Cube& c)
	{
		if (m_L == c.getL() && m_H == c.getH() && m_W == c.getW())
		{
			return true;
		}
		return false;
	}
private:
	long long m_L;
	long long m_W;
	long long m_H;
};

bool IsSameG(Cube& c1, Cube& c2)
{
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
	{
		return true;
	}
	return false;
}
int main6()

{
	Cube c1;
	c1.setL(10);
	c1.setH(10);
	c1.setW(10);
	Cube c2;
	c2.setL(10);
	c2.setH(10);
	c2.setW(10);
	cout << "c1的体积为：" << c1.V() << endl;
	cout << "c1的表面积为：" << c1.S() << endl;
	bool ret = IsSameG(c1, c2);
	if (ret)
		cout << "c1和c2相等" << endl;
	else
		cout<< "c1和c2不相等" << endl;

	bool ret2 = c1.IsSameByClass(c2);
	if(ret2)
		cout << "利用成员函数：c1和c2相等" << endl;
	else
		cout << "利用成员函数：c1和c2不相等" << endl;
	system("pause");

	return 0;
}