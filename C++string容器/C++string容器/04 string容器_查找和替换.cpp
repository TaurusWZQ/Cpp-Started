#include<iostream>
using namespace std;
#include<string>

//string �ַ����������滻

//1������
void test014()
{
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	cout << pos << endl;
	//rfind��find����
	//rfind����������� find�������Ҳ���
	cout << (int)str1.rfind("de") << endl;
}

//2���滻
void test024()
{
	string str1 = "abcdefg";
	//��1��λ���� 3���ַ��滻�ɡ�1111��
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;
}

int main4()

{
	//test014();
	test024();
	system("pause");

	return 0;
}