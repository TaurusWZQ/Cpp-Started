#include<iostream>
#include<string>
using namespace std;

int main7()

{
	// 外层执行一次，内层执行一周
	// 外层循环
	for (int i = 0; i < 10; i++)
	{
		// 内层循环
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout<<endl;
	}
	system("pause");

	return 0;
}