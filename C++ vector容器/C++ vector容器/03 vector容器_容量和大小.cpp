#include<iostream>
using namespace std;
#include<vector>

//vector�����������ʹ�С����

void printVector3(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test013()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector3(v1);

	if (v1.empty())
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1����Ϊ��" << v1.capacity() << endl;
		cout << "v1��СΪ��" << v1.size() << endl;
	}

	//����ָ����С
	v1.resize(12);//�������ָ���Ĵ�С��ԭ���� Ĭ����0����µ�λ��
	cout << "v1����Ϊ��" << v1.capacity() << endl;
	cout << "v1��СΪ��" << v1.size() << endl;
	v1.resize(15, 100);//�������ذ汾 ����ָ�����ֵ ����2
	cout << "v1����Ϊ��" << v1.capacity() << endl;
	cout << "v1��СΪ��" << v1.size() << endl;
	printVector3(v1);

	v1.resize(5);//�������ָ���Ĵ�С��ԭ������ �������ֻ�ɾ����
	printVector3(v1);
	cout << "v1����Ϊ��" << v1.capacity() << endl;
	cout << "v1��СΪ��" << v1.size() << endl;
}

int main3()

{
	test013();
	system("pause");

	return 0;
}