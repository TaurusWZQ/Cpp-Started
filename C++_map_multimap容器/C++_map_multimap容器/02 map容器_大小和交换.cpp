#include<iostream>
using namespace std;
#include<map>

//map容器 大小和交换
void printMap2(map<int, int>& m);
//大小
void test012()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	if (m.empty())
	{
		cout << "m为空" << endl;
	}
	else
	{
		cout << "m不为空" << endl;
		cout << "m大小为：" << m.size() << endl;
	}
}

//交换
void test022()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	map<int, int> m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	cout << "交换前：" << endl;
	printMap2(m);
	printMap2(m2);
	m.swap(m2);
	cout << "交换后：" << endl;
	printMap2(m);
	printMap2(m2);
}
int main2()

{
	//test012();
	test022();
	system("pause");

	return 0;
}

void printMap2(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}
