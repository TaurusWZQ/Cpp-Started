#include<iostream>
#include<string>
using namespace std;

/*
���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;
�����ṹ�����飬�����д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
*/

//��д������
struct hero
{
	string name;
	int age;
	string gender;
};

//ð��������
void bubsort(hero hArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (hArray[j + 1].age < hArray[j].age)
			{
				hero temp = hArray[j + 1];
				hArray[j + 1] = hArray[j];
				hArray[j] = temp;
			}
		}
	}
}
void printinfo(hero hArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << " Ӣ��������" << hArray[i].name
			 << " Ӣ�����䣺" << hArray[i].age
			 << " Ӣ���Ա�" << hArray[i].gender
			 << endl;
	}
}

int main()

{
	struct hero hArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int len = sizeof(hArray) / sizeof(hArray[0]);
	cout << "����ǰ��" << endl;
	printinfo(hArray, len);

	bubsort(hArray, len);
	cout << "�����" << endl;
	printinfo(hArray, len);
	system("pause");

	return 0;
}