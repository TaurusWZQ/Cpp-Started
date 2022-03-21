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

	// num %10 对数字取模于10 可以获取到个位
	// (num /10)%10 先整除于10，得到两位数，再取模于10，得到十位
	// num / 100 直接整除于100，获取百位
	system("pause");

	return 0;
}