#include<iostream>
#include<string>
using namespace std;

//定义学生结构体
struct student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};

//打印学生信息的函数
//1、值传递
void printStudent1(struct student a)
{
	a.age = 100;
	cout << " 子函数中 姓名：" << a.name 
		 << " 年龄：" << a.age 
		 << " 分数：" << a.score << endl;
}


//2、地址传递
void printStudent2(struct student* p)
{
	//p->age = 100;
	cout << " 子函数2中 姓名：" << p->name
		 << " 年龄：" << p->age
		 << " 分数：" << p->score << endl;
}
int main5()

{
	//结构体做函数参数
	//将学生传入一个参数中，打印学生身上的所有信息

	//创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;


	printStudent1(s);
	printStudent2(&s);
	cout << " main函数中 姓名：" << s.name 
		 << " 年龄：" << s.age 
		 << " 分数：" << s.score << endl;

	system("pause");

	return 0;
}