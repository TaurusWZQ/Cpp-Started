#include<iostream>
using namespace std;
#include<set>

//set���� ���Һ�ͳ��
void test014()
{
	//����
	set<int> s1;
	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>::iterator pos = s1.find(30);
	//find��key������key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ��" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}
	set<int>::iterator pos1 = s1.find(300);
	if (pos1 != s1.end())
	{
		cout << "�ҵ�Ԫ��" << *pos1 << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}
}
void test024()
{
	//ͳ��
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);
	int num = s1.count(30);
	//����set���� ͳ�ƽ�� Ҫô0 Ҫô1
	cout << "num = " << num << endl;
	int num2 = s1.count(300);
	cout << "num2 = " << num2 << endl;
}
int main4()

{
	//test014();
	test024();
	system("pause");

	return 0;
}