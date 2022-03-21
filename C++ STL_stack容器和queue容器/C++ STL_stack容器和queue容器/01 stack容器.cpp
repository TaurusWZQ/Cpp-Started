#include<iostream>
using namespace std;
#include<stack>

//栈 stack容器

void test011()
{
	stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << "栈中元素个数为：" << s.size() << endl;
	while (!s.empty())
	{
		cout << "栈顶元素为：" << s.top() << endl;
		s.pop();
	}
	cout << "栈中元素个数为：" << s.size() << endl;
}

int main1()

{
	test011();
	system("pause");

	return 0;
}