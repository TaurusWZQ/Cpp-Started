#include<iostream>
#include<string>
using namespace std;

int main1()

{
	//ѡ��ṹ ����if���
	//�û���������������������600����Ϊ����һ����ѧ������Ļ�����

	//1���û��������
	int score = 0;
	cout << "���������ķ����� " << endl;
	cin >> score;

	//2����ӡ�û�����ķ���
	cout << "������ķ���Ϊ�� " << score << endl;

	//3���жϷ����Ƿ����600��������ڣ���ô���
	//ע�����if�������治Ҫ�ӷֺ�
	if (score > 600)
	{
		cout << "��ϲ�� ������һ��" << endl;

	}

	system("pause");

	return 0;
}