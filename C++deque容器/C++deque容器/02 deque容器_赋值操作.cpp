#include<iostream>
using namespace std;
#include<deque>

//deque容器 赋值操作

void printDeque2(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test012()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque2(d1);

	//operator= 赋值
	deque<int> d2;
	d2 = d1;
	printDeque2(d2);

	//assign赋值
	deque<int> d3;
	d3.assign(d2.begin(), d2.end());
	printDeque2(d3);

	deque<int> d4;
	d4.assign(10, 100);
	printDeque2(d4);
}

int main2()

{
	test012();
	system("pause");

	return 0;
}