#include<iostream>
using namespace std;
#include<set>

//setÈİÆ÷ ²åÈëºÍÉ¾³ı
void printSet3(const set<int>& s);
void test013()
{
	set<int> s1;
	//²åÈë
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);
	//±éÀú
	printSet3(s1);
	//É¾³ı
	s1.erase(s1.begin());
	printSet3(s1);
	//É¾³ıÖØÔØ°æ±¾
	s1.erase(30);
	printSet3(s1);
	//Çå¿Õ
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet3(s1);

}

int main3()

{
	test013();
	system("pause");

	return 0;
}

void printSet3(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it!= s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
