#include<iostream>
#include<string>
using namespace std;

int main()

{
	// gotoÓï¾ä

	cout << "1¡¢xxxx" << endl;

	cout << "2¡¢xxxx" << endl;

	goto FLAG;
	cout << "3¡¢xxxx" << endl;

	cout << "4¡¢xxxx" << endl;

	FLAG:
	cout << "5¡¢xxxx" << endl;
	system("pause");

	return 0;
}