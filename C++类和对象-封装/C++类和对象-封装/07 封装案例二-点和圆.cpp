#include<iostream>
using namespace std;
#include"circle.h"

//���һ��Բ���ࣨCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��

//��д
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
//		cout << "����Բ��" << endl;
//	}
//	else if (r1 < (o.getR() * o.getR()))
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
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

//�μ�
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
//	//������ ����������һ���� ��Ϊ�����еĳ�Ա
//	Point m_Center;
//};

//�жϵ��Բ�Ĺ�ϵ
void IsInCircle(Circle &o,Point &p)
{
	int r1 = (o.getCenter().getX() - p.getX()) * (o.getCenter().getX() - p.getX())
		+ (o.getCenter().getY() - p.getY()) * (o.getCenter().getY() - p.getY());
	int r2 = o.getR() * o.getR();
	if (r1 > r2)
	{
		cout << "����Բ��" << endl;
	}
	else if (r1 < r2)
	{
		cout << "����Բ��" << endl;
	}
	else
		cout << "����Բ��" << endl;
}
int main7()

{
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//������
	Point p;
	p.setX(10);
	p.setY(10);

	IsInCircle(c, p);
	system("pause");

	return 0;
}