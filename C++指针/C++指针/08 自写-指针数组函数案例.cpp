#include<iostream>
using namespace std;


// ָ�����麯������
// ��װһ������������ð������ʵ�ֶ������������������

void arrange(int* p,int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (p[j + 1] < p[j])
			{
				int temp = p[j + 1];
				p[j + 1] = p[j];
				p[j] = temp;
			}

			//if (*(p + 1) < *p)  //��һ���ִ������� 
			//{
			//	int temp = *(p + 1);
			//	*(p + 1) = *p;
			//	*p = temp;
			//}
			//p++;
		}
	}
}
int main8()

{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//int *p2 = arr;
	int len = sizeof(arr) / sizeof(arr[0]);
	arrange(arr,len);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");

	return 0;
}