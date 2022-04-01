#include<iostream>
using namespace std;
#include<vector>
#include<functional>
#include<algorithm>
//内建函数对象 _关系仿函数
//大于 greater

class MyCompare5
{
public:
	bool operator()(int v1,int v2)
	{
		return v1 > v2;
	}
};
void test015()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//降序
	//sort(v.begin(), v.end(),MyCompare5());
	//greater<int>() 内建函数对象
	sort(v.begin(), v.end(), greater<int>());
	cout << "排序后:" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main5()

{
	test015();
	system("pause");

	return 0;
}