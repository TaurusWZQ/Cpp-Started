#include<iostream>
using namespace std;
#include<vector>
//vector��������
void printVector1(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test011()
{
	vector<int> v1;//Ĭ�Ϲ��� �޲ι���

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector1(v1);

	//ͨ�����䷽ʽ���й���
	vector<int> v2(v1.begin(), v1.end());
	printVector1(v2);

	//n��elem��ʽ����
	vector<int> v3(10, 100);
	printVector1(v3);

	//��������
	vector<int> v4(v3);
	printVector1(v4);

}
int main1()

{
	test011();
	system("pause");

	return 0;
}