#include<iostream>
#include<string>
using namespace std;

int main()

{
	// �˷��ھ���
	// ��д
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "x" << i << "=" << i * j << " " << "\t";
		}
		cout << endl;
	}
	system("pause");

	return 0;
}