#include<iostream>
using namespace std;
#include<string>


void hannuota(int n,string s1,string s2,string s3)
{
	if (1 == n)
		cout << "����" << n << "���Ӵ�" << s1 << "�����ƶ���" << s3 << "������" << endl;
	else
	{
		hannuota(n - 1, s1, s3, s2);
		cout << "����" << n << "���Ӵ�" << s1 << "�����ƶ���" << s3 << "������" << endl;
		hannuota(n - 1, s2, s1, s3);
	}
}
int main()

{
	string s1 = "A";
	string s2 = "B";
	string s3 = "C";
	int n;
	cout << "������һ���м������ӣ�" << endl;
	cin >> n;
	hannuota(n, s1, s2, s3);
	system("pause");

	return 0;
}