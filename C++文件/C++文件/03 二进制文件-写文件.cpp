#include<iostream>
using namespace std;
#include<fstream>

//二进制文件 写文件
class Person1
{
public:

	char m_Name[64];//姓名
	int m_Age;//年龄
};

void test013()
{
	//1、包含头文件
	
	//2、创建流对象
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3、打开文件
	//ofs.open("person.txt", ios::out | ios::binary);
	//4、写文件
	Person1 p = { "张三",18 };
	ofs.write((const char *) & p, sizeof(Person1));

	//5、关闭文件
	ofs.close();
}
int main3() 

{
	test013();
	system("pause");

	return 0;
}