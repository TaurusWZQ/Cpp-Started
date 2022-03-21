#include<iostream>
using namespace std;
#include<string>

//�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����

//��ͨд��
class Calculator1
{
public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//�������չ�µĹ��ܣ���Ҫ�޸�Դ��
		//��ʵ������ �ᳫ  ����ԭ��
		//����ԭ�򣺶���չ���п��� ���޸Ľ��йر�
	}


	int m_Num1;//������1
	int m_Num2;//������2
};

void test012()
{
	Calculator1 c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}

//���ö�̬ʵ�ּ�����
//��̬�ô���
// 1����֯�ṹ����
// 2���ɶ���ǿ
// 3������ǰ�ںͺ�����չ�Լ�ά���Ը�


//ʵ�ּ�����������
class AbstractCalculator1
{
public:

	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};

//�ӷ���������
class AddCalculator1 :public AbstractCalculator1
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//������������
class SubCalculator1 :public AbstractCalculator1
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//�˷���������
class MulCalculator1 :public AbstractCalculator1
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test022()
{
	//��̬ʹ������
	//����ָ���������ָ���������

	//�ӷ�����
	AbstractCalculator1* abc = new AddCalculator1;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//����ǵ�����
	delete abc;

	//��������
	abc = new SubCalculator1;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	//�˷�����
	abc = new MulCalculator1;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

}
int main2()

{
	//test012();
	test022();
	system("pause");

	return 0;
}