#include<iostream>
using namespace std;
#include<map>
//map 容器 查找和统计
void test014()
{
	//查找
	map<int,int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 40));

	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "查找到元素 key = " << (*pos).first << " value = " << pos->second << endl;
	}
	else
	{
		cout << "未查到元素" << endl;
	}

	//统计
	//map容器 不允许插入重复key  count统计结果 要么0要么1
	//multimap的统计可能大于1
	int num = m.count(3);
	cout << "num = " << num << endl;

}
int main4()

{
	test014();
	system("pause");

	return 0;
}