#include<iostream>
using namespace std;
#include<set>

//set���� ����͸�ֵ
/*
**set��multiset����**��
set���������������ظ���Ԫ��
multiset�������������ظ���Ԫ��
����������һͷ�ļ�������߽Կ���
*/
void printSet1(set<int>& s);
void test011()
{
	set<int> s1;
	//set������������ ֻ��inser��ʽ
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	//��������
	printSet1(s1);

	set<int> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(30);
	s2.insert(20);
	s2.insert(30);
	//set�����ص� ����Ԫ�ز���ʱ���Զ�������
	//set��������������ظ�ֵ
	printSet1(s2);

	//��������
	set<int> s3(s1);
	printSet1(s3);

	//��ֵ
	set<int> s4;
	s4 = s2;
	printSet1(s4);
}
void test021()
{
	multiset<int> ms1;
	ms1.insert(10);
	ms1.insert(40);
	ms1.insert(30);
	ms1.insert(20);
	ms1.insert(30);
	for (multiset<int>::iterator it = ms1.begin(); it != ms1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main1()
 
{
	test011();
	test021();
	system("pause");

	return 0;
}

void printSet1(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
