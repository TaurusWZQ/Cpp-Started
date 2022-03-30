#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<map>
#include<ctime>

/*��������
* ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
* Ա����Ϣ��: ����  ������ɣ����ŷ�Ϊ���߻����������з�
* �����10��Ա�����䲿�ź͹���
* ͨ��multimap������Ϣ�Ĳ���  key(���ű��) value(Ա��)
* �ֲ�����ʾԱ����Ϣ
*/


#define CEHUA	0
#define MEISHU	1
#define YANFA	2

class Worker
{
public:
	string m_Name;
	int m_Salary;
};
void createWorker(vector<Worker>& v);
void setGroup(vector<Worker>& v, multimap<int, Worker>& m);//Ա������
void showWorkerByGroup(multimap<int, Worker>& m);
int main()

{
	srand((unsigned int)time(NULL));
	//1������Ա��
	vector<Worker> vWorker;
	createWorker(vWorker);
	//����
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "������" << it->m_Name << " ���ʣ�" << it->m_Salary << endl;
	//}

	//2��Ա������
	multimap<int, Worker> mWorker;
	setGroup(vWorker, mWorker);

	//3��������ʾԱ��
	showWorkerByGroup(mWorker);

	system("pause");

	return 0;
}

void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;//10000~19999
		v.push_back(worker);//��Ա���ŵ�������
	}
}

void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int depId = rand() % 3;// 0 1 2
		//��Ա�����뵽������
		//key���ű�� value����Ա��
		m.insert(make_pair(depId, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>& m)
{
	cout << "�߻����ţ�" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int num = m.count(CEHUA);
	for (int i = 0; i < num; i++, pos++)
	{
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}
	cout << "�������ţ�" << endl;
	multimap<int, Worker>::iterator pos1 = m.find(MEISHU);
	int num1 = m.count(MEISHU);
	for (int i = 0; i < num1; i++, pos1++)
	{
		cout << "������" << pos1->second.m_Name << " ���ʣ�" << pos1->second.m_Salary << endl;
	}
	cout << "�з����ţ�" << endl;
	multimap<int, Worker>::iterator pos2 = m.find(YANFA);
	int num2 = m.count(YANFA);
	for (int i = 0; i < num2; i++, pos2++)
	{
		cout << "������" << pos2->second.m_Name << " ���ʣ�" << pos2->second.m_Salary << endl;
	}
}
