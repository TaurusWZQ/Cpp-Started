#include<iostream>
using namespace std;
#include<set>
//set���� ��С�ͽ���

void printSet2(set<int>& s);
void test012()
{
	//��С
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	printSet2(s1);
	if (s1.empty())
	{
		cout << "s1Ϊ��" << endl;
	}
	else
	{
		cout << "s1��Ϊ��" << endl;
		cout << "s1�Ĵ�СΪ��" << s1.size() << endl;
	}
}

void test022()
{
	//����
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	set<int> s2;
	s2.insert(1);
	s2.insert(3);
	s2.insert(4);
	s2.insert(2);
	s2.insert(5);
	cout << "����ǰ:" << endl;
	printSet2(s1);
	printSet2(s2);
	cout << "������" << endl;
	s1.swap(s2);
	printSet2(s1);
	printSet2(s2);
}
int main2()

{
	//test012();
	test022();
	system("pause");

	return 0;
}

void printSet2(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
