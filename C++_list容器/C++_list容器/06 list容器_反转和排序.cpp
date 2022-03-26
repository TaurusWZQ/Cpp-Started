#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

//list容器 反转和排序
void printList6(const list<int>& L);
bool myCompare6(int v1, int v2);
void test016()
{
	//反转
	list<int> L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "反转前：" << endl;
	printList6(L1);
	L1.reverse();
	cout << "反转后：" << endl;
	printList6(L1);
}

void test026()
{
	//排序
	list<int> L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "排序前：" << endl;
	printList6(L1);
	cout << "排序后：" << endl;
	//所有不支持随机访问迭代器的容器 不可以使用标准算法
	//不支持随机访问迭代器的容器 内部会提供对应的一些算法
	//sort(L1.begin(), L1.end());
	L1.sort();//默认排序规则 从小到大 升序
	printList6(L1);
	L1.sort(myCompare6);
	printList6(L1);
}

int main6()

{
	//test016();
	test026();
	system("pause");

	return 0;
}

void printList6(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare6(int v1, int v2)
{
	//降序 就让第一个数 > 第二个数
	return v1>v2;
}
