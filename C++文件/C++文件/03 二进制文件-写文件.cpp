#include<iostream>
using namespace std;
#include<fstream>

//�������ļ� д�ļ�
class Person1
{
public:

	char m_Name[64];//����
	int m_Age;//����
};

void test013()
{
	//1������ͷ�ļ�
	
	//2������������
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3�����ļ�
	//ofs.open("person.txt", ios::out | ios::binary);
	//4��д�ļ�
	Person1 p = { "����",18 };
	ofs.write((const char *) & p, sizeof(Person1));

	//5���ر��ļ�
	ofs.close();
}
int main3() 

{
	test013();
	system("pause");

	return 0;
}