#include<iostream>
#include<string>
using namespace std;
#include<ctime>



//ѧ���Ľṹ�嶨��

struct Student
{
	string sName;//ѧ������
	int score;//����
};
//��ʦ�ṹ�嶨��
struct Teacher
{
	string tName;//��ʦ����
	struct Student sArray[5];//ѧ������
};

//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(Teacher tArray[],int len)
{
	string nameSeed = "ABCDE";
	//����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			int random = rand() % 61 + 40;// rand()%+61 0~60   40~100
			tArray[i].sArray[j].score = random;
		}
	}
}
//��ӡ������Ϣ
void printInfo(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArray[i].sArray[j].sName
				 << " ���÷�����" << tArray[i].sArray[j].score
				 << endl;
		}
	}
}
int main7()

{
	//���������
	srand((unsigned int)time(NULL));
	//1������3����ʦ������
	struct Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	//2��ͨ��������3����ʦ����Ϣ��ֵ�����Ҹ���ʦ����ѧ����Ϣ��ֵ
	allocateSpace(tArray, len);
	//3����ӡ������ʦ������ѧ������Ϣ
	printInfo(tArray, len);
	system("pause");

	return 0;
}