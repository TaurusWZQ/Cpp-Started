#include<iostream>
using namespace std;
#include<map>

//map ÅÅĞò
class MyCompare5
{
public:
	bool operator()(int v1,int v2) const
	{
		//½µĞò
		return v1 > v2;
	}
};
void test015()
{
	map<int, int,MyCompare5> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

int main5()

{
	test015();
	system("pause");

	return 0;
}