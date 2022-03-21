#pragma once
#include<iostream>
#include"point.h"
using namespace std;

class Circle
{
public:
	void setR(int r);
	int getR();
	void setCenter(Point p);
	Point getCenter();
private:
	int m_R;
	//在类中 可以让另外一个类 作为本来中的成员
	Point m_Center;
};