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
	//������ ����������һ���� ��Ϊ�����еĳ�Ա
	Point m_Center;
};