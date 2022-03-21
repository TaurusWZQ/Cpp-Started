#include<iostream>
using namespace std;

//��̬������ ������Ʒ

class AbstractDrinking4
{
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//���븨��
	virtual void PutSomething() = 0;
	
	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//��������
class Coffee4 :public AbstractDrinking4
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}
	//����
	virtual void Brew() 
	{
		cout << "���ݿ���" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};

//��������
class Tea4 :public AbstractDrinking4
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "������" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void PutSomething()
	{
		cout << "��������" << endl;
	}
};
//��������
void doWork4(AbstractDrinking4 * abs)
{
	abs->makeDrink();
	delete abs;//�ͷ�
}
void test014()
{
	//��������
	doWork4(new Coffee4);
	cout << "---------------" << endl;
	//������Ҷ
	doWork4(new Tea4);
}
int main4()

{
	test014();
	system("pause");

	return 0;
}