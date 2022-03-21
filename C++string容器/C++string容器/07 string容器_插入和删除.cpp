#include<iostream>
using namespace std;

//strin ×Ö·û´® ²åÈëºÍÉ¾³ı
void test017()
{
	string str = "hello";
	//²åÈë
	str.insert(1, "111");
	cout << "str = " << str << endl;
	//É¾³ı
	str.erase(1, 3);
	cout << "str = " << str << endl;

}
int main7()

{
	test017();
	system("pause");

	return 0;
}