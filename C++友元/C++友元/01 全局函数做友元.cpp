#include<iostream>
using namespace std;
#include<string>

//��������
class Building1
{
	//goodGuyȫ�ֺ�����Building�����ѣ����Է���Building��˽�г�Ա
	friend void goodGuy1(Building1* building);
public:
	Building1()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom;//����

private:
	string m_BedRoom;//����
};

//ȫ�ֺ���

void goodGuy1(Building1 *building)
{
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}
void test011()
{
	Building1 building;
	goodGuy1(&building);
}
int main1()

{
	test011();
	system("pause");

	return 0;
}