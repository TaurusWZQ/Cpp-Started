#include<iostream>
using namespace std;
#include<deque>

//deque���� ���ݵĴ�ȡ

void test015()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	//����[]��ʽ����Ԫ��
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	//ͨ��at��ʽ����Ԫ��
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;

	//ͷβԪ��
	cout << "��һ��Ԫ�أ�" << d1.front() << endl;
	cout << "���һ��Ԫ�أ�" << d1.back() << endl;
}

int main5()

{
	test015();
	system("pause");

	return 0;
}