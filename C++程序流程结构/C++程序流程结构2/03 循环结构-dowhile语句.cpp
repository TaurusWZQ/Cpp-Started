#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main3()

{
	//srand((unsigned int)time(NULL));

	//int num = rand() % 100;
	//cout << num << endl;

	//do...while���
	//����Ļ����� 0 �� 9 ��10������

	int num = 0;
	do {
		cout << num << endl;
		num++;
	} while (num < 10);

	//do...while��whileѭ��������  do...while����ִ��һ��ѭ�����

	system("pause");

	return 0;
}