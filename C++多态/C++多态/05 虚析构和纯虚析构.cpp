#include<iostream>
using namespace std;

//�������ʹ�������

class Animal5
{
public:
	Animal5()
	{
		cout << "Animal���캯������" << endl;
	}
	//�������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
	//virtual ~Animal()
	//{
	//	cout << "Animal������������" << endl;
	//}

	//��������  ��Ҫ����Ҳ��Ҫʵ��
	//���˴�������֮�� �����Ҳ���ڳ����� �޷�ʵ��������
	virtual ~Animal5() = 0;

	//���麯��
	virtual void speak() = 0;
};
Animal5::~Animal5()
{
	cout << "Animal����������������" << endl;
}
class Cat5 :public Animal5
{
public:
	Cat5(string name)
	{
		cout << "Cat���캯������" << endl;
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_Name << "������" << endl;
	}
	~Cat5()
	{
		if (m_Name != NULL)
		{
			cout << "Cat������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string* m_Name;
};

void test015()
{
	Animal5* animal5 = new Cat5("Tom");
	//����ָ��������ʱ�� ������������е��������� ������������ж������� �����ڴ�й©
	animal5->speak();
	delete animal5;
}
int main5()

{
	test015();
	system("pause");

	return 0;
}