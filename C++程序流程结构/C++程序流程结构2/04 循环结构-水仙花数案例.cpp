#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main4()

{
	int num = 100;
	while (num < 1000)
	{
		if ((pow((num %10),3) + pow((num /10)%10,3) + pow((num / 100),3)) == num)
		{
			cout << num << endl;
		}
	num++;
	}

	// num %10 ������ȡģ��10 ���Ի�ȡ����λ
	// (num /10)%10 ��������10���õ���λ������ȡģ��10���õ�ʮλ
	// num / 100 ֱ��������100����ȡ��λ
	system("pause");

	return 0;
}