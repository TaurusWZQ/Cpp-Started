#include<iostream>
using namespace std;
#include<stack>

//ջ stack����

void test011()
{
	stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << "ջ��Ԫ�ظ���Ϊ��" << s.size() << endl;
	while (!s.empty())
	{
		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;
		s.pop();
	}
	cout << "ջ��Ԫ�ظ���Ϊ��" << s.size() << endl;
}

int main1()

{
	test011();
	system("pause");

	return 0;
}