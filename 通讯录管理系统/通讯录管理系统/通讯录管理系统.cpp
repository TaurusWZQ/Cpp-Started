#include<iostream>
#include<string>
using namespace std;
#define MAX 1000
//�����ϵ�˽ṹ��

struct Person
{
	string m_Name;//����
	int m_Sex;//�Ա� 1 ��   2 Ů
	int m_Age;//����
	string m_Phone;//�绰
	string m_Addr;//��ַ
};
//���ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//1�������ϵ��
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//�����ϵ��

		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//סַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;
		cout << "��ӳɹ�" << endl;
		
		system("pause");//�밴���������
		system("cls");//��������
	}
}

//2����ʾ������ϵ��
void showPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name <<" \t"
				 << "�Ա�" << ( abs->personArray[i].m_Sex == 1?"��":"Ů" ) << " \t"
				 << "���䣺" << abs->personArray[i].m_Age << " \t"
				 << "�绰��" << abs->personArray[i].m_Phone << " \t"
				 << "��ַ��" << abs->personArray[i].m_Addr << " \t"
				 << endl;
		}
	}
	system("pause");//�����������
	system("cls");//�����Ļ
}

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
// ����1  ͨѶ¼  ����2 �Ա�����
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (name == abs->personArray[i].m_Name)//�ҵ��û����������
		{
			return i;// �ҵ��ˣ�����������������е��±���
		}
	}
	return -1;// ������������˶�û�ҵ� ����-1
}

//3��ɾ��ָ����ϵ��
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;

	string name;
	cin >> name;

	//ret == -1 δ�鵽
	//ret != -1 �鵽��
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//�鵽���ˣ�Ҫ����ɾ������
		for (int i = ret; i < abs->m_Size; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//����ͨѶ¼�е�����
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//4������ָ����ϵ����Ϣ
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret != -1)//�ҵ���ϵ��
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t"
			 << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t"
			 << "���䣺" << abs->personArray[ret].m_Age << "\t"
			 << "�绰��" << abs->personArray[ret].m_Phone << "\t"
			 << "סַ��" << abs->personArray[ret].m_Addr
			 << endl;
			
	}
	else //δ�ҵ���ϵ��
	{
		cout << "���޴���" << endl;
	}

	//��������º� ����
	system("pause");
	system("cls");
}

//5���޸�ָ����ϵ����Ϣ
void modifyPerson(Addressbooks* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ��������" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "�������޸ĺ��������" << endl;
		string n_name;
		cin >> n_name;
		abs->personArray[ret].m_Name = n_name;

		cout << "�������޸ĺ���Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int n_sex = 0;

		while (true)
		{
			cin >> n_sex;
			if (n_sex == 1 || n_sex == 2)
			{
				abs->personArray[ret].m_Sex = n_sex;
				break;
			}
			cout << "������������������" << endl;
		}

		cout << "�������޸ĺ�����䣺" << endl;
		int n_age = 0;
		cin >> n_age;
		abs->personArray[ret].m_Age = n_age;

		cout << "�������޸ĺ����ϵ�绰��" << endl;
		string n_phone;
		cin >> n_phone;
		abs->personArray[ret].m_Phone = n_phone;

		cout << "�������޸ĺ�ļ�ͥסַ��" << endl;
		string n_address;
		cin >> n_address;
		abs->personArray[ret].m_Addr = n_address;
		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//6�����������ϵ��
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;//����ǰ��¼��ϵ��������Ϊ0�����߼���ղ���
	cout << "ͨѶ¼�����" << endl;

	system("pause");
	system("cls");
}

//�˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}
int main()
{

	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int select = 0;//�����û�ѡ������ı���
	
	while (true)
	{
		//�˵�����
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1://1�������ϵ��
			addPerson(&abs);//���õ�ַ���ݣ���������ʵ��
			break;
		case 2://2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://3��ɾ����ϵ�� 
		//{
		//	cout << "������ɾ����ϵ��������" << endl;
		//	string name;
		//	cin >> name;
		//	if (isExist(&abs, name) == -1)
		//		cout << "���޴���" << endl;
		//	else
		//		cout << "�ҵ�����" << endl;
		//}
			deletePerson(&abs);
			break;
		case 4://4��������ϵ��
			findPerson(&abs);
			break;
		case 5://5���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://6�������ϵ��
			cleanPerson(&abs);
			break;
		case 0://0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");

	return 0;
}