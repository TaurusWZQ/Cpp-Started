#include<iostream>
#include<string>
using namespace std;

//**��ϰ������** ��ֻС�������
//����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС�����أ�

// ��д��
int main5()

{
	int A = 0;
	int B = 0;
	int C = 0;
	cout << "��������ֻС������أ� " << endl;
	cin >> A >> B >> C;
	cout << A  << B << C << endl;

	if (A > B)
	{
		if (A > C)
		{
			cout << "С��A����" << endl;
		}
		else
		{
			cout << "С��C����" << endl;
		}
	}
	else
	{
		if (B > C)
		{
			cout << "С��B����" << endl;
		}
		else
		{
			cout << "С��C����" << endl;
		}
	}


	system("pause");

	return 0;
}