#include<iostream>
using namespace std;
#include<vector>
//二元谓词
#include<algorithm>

class MyCompare3
{
public:
	bool operator()(int val1,int val2)
	{
		return val1 > val2;
	}
};
void test013()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);
	cout << "排序前：" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	sort(v.begin(), v.end());
	cout << "默认规则排序后：" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//使用函数对象 改变算法策略 变为排序规则为从大到小
	sort(v.begin(), v.end(), MyCompare3());
	cout << "自行规定规则 排序后：" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main3()

{
	test013();
	system("pause");

	return 0;
}