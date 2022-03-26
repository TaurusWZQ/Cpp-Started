#include<iostream>
using namespace std;
#include<list>

//list容器赋值和交换


void printList2(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//赋值
void test012()
{
	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList2(L1);

	list<int> L2;
	L2 = L1;//operator= 赋值
	printList2(L2);
	
	//assgin赋值
	list<int> L3;
	L3.assign(L2.begin(), L2.end());
	printList2(L3);

	list<int> L4;
	L4.assign(10, 100);
	printList2(L4);
}

//交换
void test022()
{
	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int> L2;
	L2.assign(10, 100);

	cout << "交换前：" << endl;
	cout << "L1:";
	printList2(L1);
	cout << "L2:";
	printList2(L2);
	//交换
	L1.swap(L2);

	cout << "交换后：" << endl;
	cout << "L1:";
	printList2(L1);
	cout << "L2:";
	printList2(L2);
}

int main2()

{
	//test012();
	test022();
	system("pause");

	return 0;
}