#include<iostream>
using namespace std;

int* func3()
{
    //����new�ؼ���  ���Խ����ݿ��ٵ�����
    //ָ�� ����Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣������ݷ��ڶ���
    int* p = new int(10);
    return p;
}
int main3()

{
    //�ڶ�����������
    int* p = func3();
    cout << *p << endl;
    system("pause");

    return 0;
}