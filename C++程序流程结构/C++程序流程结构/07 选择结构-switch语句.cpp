#include<iostream>
#include<string>
using namespace std;

int main()

{
	// switch���
	// ����Ӱ���
	// 10 ~9 ����
	// 8 ~ 7 ��Ƭ
	// 6 ~ 5 һ��
	// 5���� ��Ƭ

	//1����ʾ�û�����Ӱ����
	//2���û���ʼ���д��
	int score = 0;
	cout << "��������Ե�Ӱ�����֣� " << endl;
	cin >> score;
	//3����ӡ�û�������
	cout << "������������Ϊ��" << score << endl;

	//4�������û�����ķ�������ʾ�û����Ľ��

	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl; break;//�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl; break;
	case 8:
		cout << "����Ϊ�Ǽ�Ƭ" << endl; break;
	case 7:
		cout << "����Ϊ�Ǽ�Ƭ" << endl; break;
	case 6:
		cout << "����ΪӰƬһ��" << endl; break;
	case 5:
		cout << "����ΪӰƬһ��" << endl; break;
	default:
		cout << "����Ϊ����Ƭ" << endl; break;
	}

	// if �� switch ����
	// switch ȱ��  �ж�ʱ��ֻ�������ͻ����ַ��ͣ���������һ������
	// switch �ŵ�  �ṹ���� ִ��Ч�ʸ� 

	system("pause");

	return 0;
}