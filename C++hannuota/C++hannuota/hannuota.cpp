#include<iostream>
using namespace std;
#include<string>


void hannuota(int n,string s1,string s2,string s3)
{
	if (1 == n)
		cout << "将第" << n << "盘子从" << s1 << "柱子移动到" << s3 << "柱子上" << endl;
	else
	{
		hannuota(n - 1, s1, s3, s2);
		cout << "将第" << n << "盘子从" << s1 << "柱子移动到" << s3 << "柱子上" << endl;
		hannuota(n - 1, s2, s1, s3);
	}
}
int main()

{
	string s1 = "A";
	string s2 = "B";
	string s3 = "C";
	int n;
	cout << "请输入一共有几个盘子：" << endl;
	cin >> n;
	hannuota(n, s1, s2, s3);
	system("pause");

	return 0;
}