#include<iostream>
using namespace std;
#include<deque>

//deque 构造函数
void printDeque1(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100; //容器中的数据不可以修改了
		cout << *it << " ";
	}
	cout << endl;
}
void test011()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque1(d1);
	deque<int> d2(d1.begin(), d1.end());
	printDeque1(d2);
	deque<int> d3(10, 100);
	printDeque1(d3);
	deque<int> d4(d3);
	printDeque1(d4);

}


int main1()

{
	test011();
	system("pause");

	return 0;
}