#include<iostream>
using namespace std;

//strin �ַ��� �����ɾ��
void test017()
{
	string str = "hello";
	//����
	str.insert(1, "111");
	cout << "str = " << str << endl;
	//ɾ��
	str.erase(1, 3);
	cout << "str = " << str << endl;

}
int main7()

{
	test017();
	system("pause");

	return 0;
}