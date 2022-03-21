#include<iostream>
using namespace std;
#include<deque>

//deque容器 数据的存取

void test015()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	//利用[]方式访问元素
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	//通过at方式访问元素
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;

	//头尾元素
	cout << "第一个元素：" << d1.front() << endl;
	cout << "最后一个元素：" << d1.back() << endl;
}

int main5()

{
	test015();
	system("pause");

	return 0;
}