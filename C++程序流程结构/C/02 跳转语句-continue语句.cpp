#include<iostream>
#include<string>
using namespace std;

int main2()

{
	//continue���

	for (int i = 0; i <= 100; i++)
	{
		//��������������ż�������
		if (i % 2 == 0)
		{
			continue;// ����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ��ѭ��
			//break���˳�ѭ��,��continue����
		}
		cout << i << endl;
	}
	system("pause");

	return 0;
}