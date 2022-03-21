#include<iostream>
using namespace std;

int main4()

{
	//野指针
	//在程序中，尽量避免出现野指针

	int* p = (int*)0x1100;
	cout << *p << endl;

	system("pause");

	return 0;
}