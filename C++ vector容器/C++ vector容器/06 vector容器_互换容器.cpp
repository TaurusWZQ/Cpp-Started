#include<iostream>
using namespace std;
#include<vector>

//vector��������

void printVector6(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//1������ʹ��
void test016()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "����ǰ��" << endl;
	printVector6(v1);
	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector6(v2);
	cout << "������" << endl;
	v1.swap(v2);
	printVector6(v1);
	printVector6(v2);
}

//2��ʵ����;
//����swap���������ڴ�ռ�
void test026()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;
	v.resize(3);
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;
	//����swap�����ڴ�
	vector<int>(v).swap(v);
	cout << "v������Ϊ��" << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;
}


int main6()

{
	//test016();
	test026();
	system("pause");

	return 0;
}