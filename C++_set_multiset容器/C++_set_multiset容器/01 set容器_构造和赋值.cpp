#include<iostream>
using namespace std;
#include<set>

//set容器 构造和赋值
/*
**set和multiset区别**：
set不允许容器中有重复的元素
multiset允许容器中有重复的元素
但创建了其一头文件，则二者皆可用
*/
void printSet1(set<int>& s);
void test011()
{
	set<int> s1;
	//set容器插入数据 只有inser方式
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	//遍历容器
	printSet1(s1);

	set<int> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(30);
	s2.insert(20);
	s2.insert(30);
	//set容器特点 所有元素插入时候自动被排序
	//set容器不允许插入重复值
	printSet1(s2);

	//拷贝构造
	set<int> s3(s1);
	printSet1(s3);

	//赋值
	set<int> s4;
	s4 = s2;
	printSet1(s4);
}
void test021()
{
	multiset<int> ms1;
	ms1.insert(10);
	ms1.insert(40);
	ms1.insert(30);
	ms1.insert(20);
	ms1.insert(30);
	for (multiset<int>::iterator it = ms1.begin(); it != ms1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main1()
 
{
	test011();
	test021();
	system("pause");

	return 0;
}

void printSet1(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
