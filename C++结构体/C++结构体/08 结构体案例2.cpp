#include<iostream>
#include<string>
using namespace std;

/*
设计一个英雄的结构体，包括成员姓名，年龄，性别;
创建结构体数组，数组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
*/

//自写！！！
struct hero
{
	string name;
	int age;
	string gender;
};

//冒泡排序函数
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
		cout << " 英雄姓名：" << hArray[i].name
			 << " 英雄年龄：" << hArray[i].age
			 << " 英雄性别：" << hArray[i].gender
			 << endl;
	}
}

int main()

{
	struct hero hArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(hArray) / sizeof(hArray[0]);
	cout << "排序前：" << endl;
	printinfo(hArray, len);

	bubsort(hArray, len);
	cout << "排序后：" << endl;
	printinfo(hArray, len);
	system("pause");

	return 0;
}