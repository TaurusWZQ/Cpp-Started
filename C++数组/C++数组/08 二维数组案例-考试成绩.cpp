#include<iostream>
#include<string>
using namespace std;

int main()

{
	//��ά���鰸��-���Գɼ�ͳ��

	//1��������ά����

	int score[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	//2��ͳ��ÿ���˵��ܺϷ���
	string name[] = { "����","����","����" };

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j];
		}
		// cout << "��"<< i + 1 << "���˵��ܷ�Ϊ��" << sum << endl;// ע�� i + 1
		cout << name[i] << "���ܷ�Ϊ��" << sum << endl;
	}


	system("pause");

	return 0;
}