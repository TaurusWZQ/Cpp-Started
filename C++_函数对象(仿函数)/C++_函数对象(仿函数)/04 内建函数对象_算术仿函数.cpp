#include<iostream>
using namespace std;
#include<functional>
//�ڽ��������� �����º���

//negate һԪ�º��� ȡ���º���
void test014()
{
	negate<int> n;
	cout << n(50) << endl;
}
//plus ��Ԫ�º��� �ӷ�
void test024()
{
	plus<int> p;
	cout << p(10, 20) << endl;
}
int main4()

{
	//test014();
	test024();
	system("pause");

	return 0;
}