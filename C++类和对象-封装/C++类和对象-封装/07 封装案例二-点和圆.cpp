#include<iostream>
using namespace std;
#include"circle.h"

//设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。

//自写
//class Circle
//{
//public:
//	void setO(double a[2])
//	{
//		O[2] = a[2];
//	}
//	void setR(double r)
//	{
//		R = r;
//	}
//	double * getO()
//	{
//		return O;
//	}
//	double getR()
//	{
//		return R;
//	}
//private:
//	double O[2];
//	double R;
//};
//class Point
//{
//public:
//	void setX(double x)
//	{
//		X = x;
//	}
//	void setY(double y)
//	{
//		Y = y;
//	}
//	double getX()
//	{
//		return X;
//	}
//	double getY()
//	{
//		return Y;
//	}
//private:
//	double X;
//	double Y;
//};
//
//void judge(Circle &o,Point &p)
//{
//	double r1 = (o.getO()[0] - p.getX()) * (o.getO()[0] - p.getX()) + (o.getO()[1] - p.getY()) * (o.getO()[1] - p.getY());
//	if (r1 > (o.getR() * o.getR()))
//	{
//		cout << "点在圆外" << endl;
//	}
//	else if (r1 < (o.getR() * o.getR()))
//	{
//		cout << "点在圆内" << endl;
//	}
//	else
//	{
//		cout << "点在圆上" << endl;
//	}
//}
//int main()
//
//{
//	Circle o1;
//	double a[2] = { 10,0 };
//	o1.setO(&a[2]);
//	o1.setR(10);
//	Point p1;
//	p1.setX(10);
//	p1.setY(10);
//
//	judge(o1, p1);
//
//
//
//	system("pause");
//
//	return 0;
//}

//课件
//class Point
//{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
//class Circle
//{
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	void setCenter(Point p)
//	{
//		m_Center = p;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;
//	//在类中 可以让另外一个类 作为本来中的成员
//	Point m_Center;
//};

//判断点和圆的关系
void IsInCircle(Circle &o,Point &p)
{
	int r1 = (o.getCenter().getX() - p.getX()) * (o.getCenter().getX() - p.getX())
		+ (o.getCenter().getY() - p.getY()) * (o.getCenter().getY() - p.getY());
	int r2 = o.getR() * o.getR();
	if (r1 > r2)
	{
		cout << "点在圆外" << endl;
	}
	else if (r1 < r2)
	{
		cout << "点在圆内" << endl;
	}
	else
		cout << "点在圆上" << endl;
}
int main7()

{
	//创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//创建点
	Point p;
	p.setX(10);
	p.setY(10);

	IsInCircle(c, p);
	system("pause");

	return 0;
}