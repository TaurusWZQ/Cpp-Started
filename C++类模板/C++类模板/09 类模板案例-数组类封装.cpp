#include<iostream>
using namespace std;
#include"MyArray.hpp"
#include<string>

void printIntArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}

}
void test01()
{
	MyArray<int> arr1(5);
	for (int i = 0; i < 5; i++)
	{
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}
	cout << "arr1的打印输出结果为:" << endl;
	printIntArray(arr1);
	cout << "arr1的容量：" << arr1.getCapacity() << endl;
	cout << "arr1的大小：" << arr1.getSize() << endl;
	MyArray<int> arr2(arr1);
	cout << "arr2的打印输出结果为:" << endl;
	printIntArray(arr2);
	cout << "arr2的容量：" << arr2.getCapacity() << endl;
	cout << "arr2的大小：" << arr2.getSize() << endl;
	arr2.Pop_Back();
	cout << "arr2的容量：" << arr2.getCapacity() << endl;
	cout << "arr2的大小：" << arr2.getSize() << endl;
	cout << "arr2的打印输出结果为:" << endl;
	printIntArray(arr2);
	//MyArray<int> arr3(100);
	//arr3 = arr1;
}
//测试自定义数据类型
class Person9
{
public:
	Person9() {};
	Person9(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
void printPersonArray(MyArray<Person9>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "name : " << arr[i].m_Name << " age : " << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person9> arr(10);
	Person9 p1("张三", 30);
	Person9 p2("李四", 20);
	Person9 p3("王五", 18);
	Person9 p4("Tom", 40);
	Person9 p5("Jerry", 20);
	//将数组插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);
	//打印数组
	printPersonArray(arr);
	cout << "arr容量为：" << arr.getCapacity() << endl;
	cout << "arr大小为：" << arr.getSize() << endl;
}
int main()

{
	//test01();
	test02();
	system("pause");

	return 0;
}