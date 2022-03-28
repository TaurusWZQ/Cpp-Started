#include<iostream>
using namespace std;
#include<set>
//set容器 大小和交换

void printSet2(set<int>& s);
void test012()
{
	//大小
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	printSet2(s1);
	if (s1.empty())
	{
		cout << "s1为空" << endl;
	}
	else
	{
		cout << "s1不为空" << endl;
		cout << "s1的大小为：" << s1.size() << endl;
	}
}

void test022()
{
	//交换
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	set<int> s2;
	s2.insert(1);
	s2.insert(3);
	s2.insert(4);
	s2.insert(2);
	s2.insert(5);
	cout << "交换前:" << endl;
	printSet2(s1);
	printSet2(s2);
	cout << "交换后：" << endl;
	s1.swap(s2);
	printSet2(s1);
	printSet2(s2);
}
int main2()

{
	//test012();
	test022();
	system("pause");

	return 0;
}

void printSet2(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
