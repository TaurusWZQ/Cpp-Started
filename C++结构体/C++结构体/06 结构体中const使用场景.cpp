#include<iostream>
#include<string>
using namespace std;

//const的使用场景

struct student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudents(const student *a)
{
	//a->age = 100;
	//加入const之后，一旦有修改的操作就会报错，可以防止我们误操作
	cout << " 姓名：" << a->name
		 << " 年龄：" << a->age
		 << " 分数：" << a->score << endl;
}
int main6()

{
	//创建结构体变量
	struct student s = { "张三",15,70 };

	//通过函数打印结构体信息
	printStudents(&s);
	cout << " mian函数中姓名：" << s.name
		 << " 年龄：" << s.age
		 << " 分数：" << s.score << endl;
	system("pause");

	return 0;
}