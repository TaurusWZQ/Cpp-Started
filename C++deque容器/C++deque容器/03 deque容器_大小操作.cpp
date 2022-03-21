#include<iostream>
using namespace std;
#include<deque>
//deque容器大小操作
void printDeque3(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test013()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque3(d1);
	if (d1.empty())
	{
		cout << "d1为空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;
		cout << "d1的大小为：" << d1.size() << endl;
		//deque容器没有容量的概念
		d1.resize(15);
		printDeque3(d1);
		d1.resize(20, 10);
		printDeque3(d1);
		d1.resize(5);
		printDeque3(d1);
	}
}
int main3()

{
	test013();
	system("pause");

	return 0;
}