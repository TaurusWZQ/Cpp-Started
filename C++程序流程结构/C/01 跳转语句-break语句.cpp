#include<iostream>
#include<string>
using namespace std;

int main1()

{
	//break��ʹ��ʱ��

	// 1��������switch�����
	//cout << "��ѡ�񸱱��Ѷ�" << endl;
	//cout << "1����ģʽ" << endl;
	//cout << "2������ģʽ" << endl;
	//cout << "3������ģʽ" << endl;

	//int select = 0;//����ѡ�����ı���
	//cin >> select;//�ȴ��û�����
	//switch (select)
	//{
	//case 1:
	//	cout << "��ѡ����Ǽ�ģʽ" << endl;
	//	break;
	//case 2:
	//	cout << "��ѡ���������ģʽ" << endl;
	//	break;
	//case 3:
	//	cout << "��ѡ���������ģʽ" << endl;
	//	break;
	//default:
	//	break;
	//}

	// 2��������ѭ�������
	//for (int i = 0; i < 10; i++)
	//{
	//	// ���i����5 �˳�ѭ��
	//	cout << i << endl;
	//	if (i == 5)
	//	{
	//		break;
	//	}
	//}

	// 3��������Ƕ��ѭ�������

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;// �˳��ڲ�ѭ��
			}
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}