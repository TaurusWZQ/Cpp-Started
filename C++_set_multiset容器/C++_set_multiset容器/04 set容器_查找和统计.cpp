#include<iostream>
using namespace std;
#include<set>

//set容器 查找和统计
void test014()
{
	//查找
	set<int> s1;
	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>::iterator pos = s1.find(30);
	//find（key）查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
	if (pos != s1.end())
	{
		cout << "找到元素" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
	set<int>::iterator pos1 = s1.find(300);
	if (pos1 != s1.end())
	{
		cout << "找到元素" << *pos1 << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
}
void test024()
{
	//统计
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);
	int num = s1.count(30);
	//对于set而言 统计结果 要么0 要么1
	cout << "num = " << num << endl;
	int num2 = s1.count(300);
	cout << "num2 = " << num2 << endl;
}
int main4()

{
	//test014();
	test024();
	system("pause");

	return 0;
}