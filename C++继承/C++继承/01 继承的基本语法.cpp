#include<iostream>
using namespace std;

//��ͨʵ��ҳ��

//Javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++��...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++��...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
////C++ҳ��
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++��...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};

//�̳�ʵ��ҳ��

//����ҳ����
class BasePage1
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++��...�����������б�" << endl;
	}
};

//�̳еĺô��������ظ�����
//�﷨��class ���� ���̳з�ʽ ����
//	����	Ҳ��Ϊ	������
//	����	Ҳ��Ϊ	����


//Javaҳ��
class Java1 :public BasePage1
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
//Pythonҳ��
class Python1 :public BasePage1
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

//C++ҳ��
class CPP1 :public BasePage1
{
public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};

void test011()
{
	Java1 ja;
	cout << "Javaҳ�����£�" << endl;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	Python1 py;
	cout << "-----------------" << endl;
	cout << "Pythonҳ�����£�" << endl;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "-----------------" << endl;
	CPP1 cpp;
	cout << "C++ҳ�����£�" << endl;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}
int main1()

{
	test011();
	system("pause");

	return 0;
}