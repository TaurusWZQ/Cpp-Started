#include<iostream>
using namespace std;

int main()

{
	//标识符命名规则
	//1、标识符不可以是关键字
	//2、标识符是由字母、数字、下划线构成
	//3、标识符的第一个字符只能是字母或下划线
	//4、标识符是区分大小写的
	
	 

	//1、标识符不可以是关键字
	//int int = 10;

	//2、标识符是由字母、数字、下划线构成
	int abc = 10;
	int _abc = 10;
	int _123abc = 10;
	
	//3、标识符的第一个字符只能是字母或下划线
	//int 123abc = 10; 

	//4、标识符是区分大小写的
	int aaa = 100;
	cout << aaa << endl;
	//cout << AAA << endl; //AAA和aaa不是一个名称

	//建议：给变量起名的时候，最好能够做到见名知意
	int num1 = 10;
	int num2 = 20; 
	int sum = num1 + num2;
	cout << sum << endl;
	system("pause");

	return 0;

}