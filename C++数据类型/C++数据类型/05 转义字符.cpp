#include<iostream>
using namespace std;

int main5()

{
	//转义字符

	//换行符 \n
	//cout << "hello world" << endl;
	cout << "hello world\n";//输出结果同上行代码
	//反斜杠  \\ 
    cout << "\\" << endl;
	
	//水平制表符 \t  作用可以整齐输出数据
	cout << "aaaa\thelloworld" << endl;
	cout << "aa\thelloworld" << endl;
	cout << "aaaaa\thelloworld" << endl;

	system("pause");

	return 0;
}