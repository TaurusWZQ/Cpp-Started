#include<iostream>
using namespace std;

//pair����Ĵ���

void test016()
{
	//��һ�ַ�ʽ
	pair<string, int> p("Tom", 20);
	cout << "������" << p.first << " ���䣺" << p.second << endl;

	//�ڶ��ַ�ʽ
	pair<string, int> p2 = make_pair("Jerry", 30);
	cout << "������" << p2.first << " ���䣺" << p2.second << endl;
}

int main6()

{
	test016();
	system("pause");

	return 0;
}