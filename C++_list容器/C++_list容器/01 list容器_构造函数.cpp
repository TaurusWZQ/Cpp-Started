#include<iostream>
using namespace std;
#include<list>

//list�������캯��
void printList1(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test011()
{
	list<int> L1;//Ĭ�Ϲ���

	//�������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	//��������
	printList1(L1);
	//���䷽ʽ����
	list<int> L2(L1.begin(), L1.end());
	printList1(L2);
	//��������
	list<int> L3(L2);
	printList1(L3);
	//n��elem
	list<int> L4(10, 100);
	printList1(L4);

}

int main1()

{
	test011();
	system("pause");

	return 0;
}