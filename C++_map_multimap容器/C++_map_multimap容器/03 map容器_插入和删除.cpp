#include<iostream>
using namespace std;
#include<map>

//map���� �����ɾ��
void printMap3(map<int, int>& m);
void test013()
{
	map<int, int> m;
	//����
	//��һ��
	m.insert(pair<int, int>(1, 10));

	//�ڶ���
	m.insert(make_pair(2, 20));

	//������
	m.insert(map<int, int>::value_type(3, 30));

	//������
	m[4] = 40;

	//[]��������� ��; ��������key���ʵ�value
	//cout << m[5] << endl;
	cout << m[4] << endl;
	printMap3(m);

	//ɾ��
	m.erase(m.begin());
	printMap3(m);

	m.erase(3);//����keyֵɾ��
	//m.erase(30);
	printMap3(m);

	//���
	//m.erase(m.begin(), m.end());
	m.clear();
	printMap3(m);
}
int main3()

{
	test013();
	system("pause");

	return 0;
}

void printMap3(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}
