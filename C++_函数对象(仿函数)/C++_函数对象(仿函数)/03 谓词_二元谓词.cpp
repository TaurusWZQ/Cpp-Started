#include<iostream>
using namespace std;
#include<vector>
//��Ԫν��
#include<algorithm>

class MyCompare3
{
public:
	bool operator()(int val1,int val2)
	{
		return val1 > val2;
	}
};
void test013()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);
	cout << "����ǰ��" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	sort(v.begin(), v.end());
	cout << "Ĭ�Ϲ��������" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//ʹ�ú������� �ı��㷨���� ��Ϊ�������Ϊ�Ӵ�С
	sort(v.begin(), v.end(), MyCompare3());
	cout << "���й涨���� �����" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main3()

{
	test013();
	system("pause");

	return 0;
}