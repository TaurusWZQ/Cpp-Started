#include<iostream>
using namespace std;
#include<vector>

//vector 赋值
void printVector2(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test012()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector2(v1);

	//赋值 operator=
	vector<int> v2 = v1;
	printVector2(v2);

	//assign
	vector<int> v3;
	v3.assign(v2.begin(), v2.end());
	printVector2(v3);

	//n个elem 方式赋值
	vector<int> v4;
	v4.assign(10, 100);
	printVector2(v4);
}

int main2()

{
	test012();
	system("pause");

	return 0;
}