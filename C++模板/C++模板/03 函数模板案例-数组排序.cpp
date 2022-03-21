#include<iostream>
using namespace std;

//实现通用 对数组进行排序的函数
//规则 从大到小
//算法 选择
//测试 char数组 int数组

template<class T>
void mySwap3(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void mySort3(T a[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (a[max] < a[j])
				max = j;
		}
		if (max!= i)
			mySwap3(a[i], a[max]);
	}
}
template<class T>
void printArr3(T a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void test013()
{
	//测试char数组
	char charArr[] = "badcfe";
	int len = sizeof(charArr) / sizeof(char);
	printArr3(charArr, len);
	mySort3(charArr,len);
	printArr3(charArr, len);
}

void test023()
{
	int intArr[] = { 7,5,1,3,9 };
	int len = sizeof(intArr) / sizeof(int);
	printArr3(intArr, len);
	mySort3(intArr, len);
	printArr3(intArr, len);
}

int main3()

{
	//test013();
	test023();
	system("pause");

	return 0;
}