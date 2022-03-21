#include<iostream>
#include<string>
using namespace std;

//**练习案例：** 三只小猪称体重
//有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？

// 自写：
int main5()

{
	int A = 0;
	int B = 0;
	int C = 0;
	cout << "请输入三只小猪的体重： " << endl;
	cin >> A >> B >> C;
	cout << A  << B << C << endl;

	if (A > B)
	{
		if (A > C)
		{
			cout << "小猪A最重" << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
		}
	}
	else
	{
		if (B > C)
		{
			cout << "小猪B最重" << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
		}
	}


	system("pause");

	return 0;
}