#include<iostream>
using namespace std;
#include<map>

//map���� ��С�ͽ���
void printMap2(map<int, int>& m);
//��С
void test012()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	if (m.empty())
	{
		cout << "mΪ��" << endl;
	}
	else
	{
		cout << "m��Ϊ��" << endl;
		cout << "m��СΪ��" << m.size() << endl;
	}
}

//����
void test022()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	map<int, int> m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	cout << "����ǰ��" << endl;
	printMap2(m);
	printMap2(m2);
	m.swap(m2);
	cout << "������" << endl;
	printMap2(m);
	printMap2(m2);
}
int main2()

{
	//test012();
	test022();
	system("pause");

	return 0;
}

void printMap2(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}
