#include<iostream>
#include<string>
using namespace std;

int main()

{
	int a = 10;
	int b = 10;

	cout << (a || b) << endl;

	a = 0;
	b = 10;
	cout << (a || b) << endl;

	a = 0;
	b = 0;
	cout << (a || b) << endl;

	//或：同假为假，其余为真
	system("pause");

	return 0;
}