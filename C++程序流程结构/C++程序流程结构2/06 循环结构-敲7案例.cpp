#include<iostream>
#include<string>
using namespace std;

int main6()

// ��1��ʼ��������100�� ������ָ�λ����7����������ʮλ����7��
// ���߸�������7�ı�����
// ���Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����

{
	// ��д
	//int num = 1;
	//while (num < 101)
	//{
	//	if ((num % 10 == 7) || ((num / 10 % 10) == 7) || (num % 7 == 0))
	//	{
	//		cout << num << endl;
	//	}
	//	num++;
	//}

	for (int i = 1; i <= 100; i++)
	{
		if ((i % 10 == 7) || (i / 10 % 10 == 7) || (i % 7 == 0))
		{
			cout << "������" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	system("pause");

	return 0;
}