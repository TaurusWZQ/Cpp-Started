#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

//list���� ��ת������
void printList6(const list<int>& L);
bool myCompare6(int v1, int v2);
void test016()
{
	//��ת
	list<int> L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "��תǰ��" << endl;
	printList6(L1);
	L1.reverse();
	cout << "��ת��" << endl;
	printList6(L1);
}

void test026()
{
	//����
	list<int> L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "����ǰ��" << endl;
	printList6(L1);
	cout << "�����" << endl;
	//���в�֧��������ʵ����������� ������ʹ�ñ�׼�㷨
	//��֧��������ʵ����������� �ڲ����ṩ��Ӧ��һЩ�㷨
	//sort(L1.begin(), L1.end());
	L1.sort();//Ĭ��������� ��С���� ����
	printList6(L1);
	L1.sort(myCompare6);
	printList6(L1);
}

int main6()

{
	//test016();
	test026();
	system("pause");

	return 0;
}

void printList6(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare6(int v1, int v2)
{
	//���� ���õ�һ���� > �ڶ�����
	return v1>v2;
}
