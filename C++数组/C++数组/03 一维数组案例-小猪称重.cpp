#include<iostream>
#include<string>
using namespace std;

int main3()

{
	//��һ�������м�¼����ֻС������أ��磺int arr[5] = {300,350,200,400,250};
	//�ҳ�����ӡ���ص�С�����ء�

	//��д
	int arr[5] = { 300,350,200,400,250 };
	int max = 0;
	int a = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			a = i+1;//��һ�γ�����
		}
	}
	cout << "��"<<a<<"ֻС������"<<" "<<"����С������Ϊ��" << max << endl;
	system("pause");

	return 0;
}