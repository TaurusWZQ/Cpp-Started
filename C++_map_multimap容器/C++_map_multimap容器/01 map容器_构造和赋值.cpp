#include<iostream>
using namespace std;
#include<map>
//map容器 构造和赋值
void printMap1(map<int, int>& m);
void test011()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));
	printMap1(m);
	//拷贝构造
	map<int, int> m2(m);
	printMap1(m2);

	//赋值
	map<int, int> m3;
	m3 = m2;
	printMap1(m3);
}
int main1()

{
	test011();
	system("pause");

	return 0;
}

void printMap1(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value = " << it->second << endl;
	}
}
