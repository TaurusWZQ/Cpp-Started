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
struct teacher
{
	int id;//教师编号
	string name;//教师姓名
	int age;//年龄
	struct student stu;//辅导的学生
};
int main4()

{
	//结构体嵌套结构体
	//创建老师
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

		cout << " 老师姓名：" << t.name
			 << " 老师编号：" << t.id
			 << " 老师年龄：" << t.age
			 << " 老师辅导的学生姓名：" << t.stu.name
			 << " 老师辅导的学生年纪：" << t.stu.age
			 << " 老师辅导的学生成绩：" << t.stu.score << endl;
		 
	system("pause");

	return 0;
}