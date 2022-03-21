#include<iostream>
using namespace std;
#include<vector>

//vector容器的容量和大小操作

void printVector3(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test013()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector3(v1);

	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1容量为：" << v1.capacity() << endl;
		cout << "v1大小为：" << v1.size() << endl;
	}

	//重新指定大小
	v1.resize(12);//如果重新指定的大小比原来长 默认用0填充新的位置
	cout << "v1容量为：" << v1.capacity() << endl;
	cout << "v1大小为：" << v1.size() << endl;
	v1.resize(15, 100);//利用重载版本 可以指定填充值 参数2
	cout << "v1容量为：" << v1.capacity() << endl;
	cout << "v1大小为：" << v1.size() << endl;
	printVector3(v1);

	v1.resize(5);//如果重新指定的大小比原来短了 超出部分会删除掉
	printVector3(v1);
	cout << "v1容量为：" << v1.capacity() << endl;
	cout << "v1大小为：" << v1.size() << endl;
}

int main3()

{
	test013();
	system("pause");

	return 0;
}