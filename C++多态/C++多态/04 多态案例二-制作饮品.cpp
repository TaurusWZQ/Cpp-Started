#include<iostream>
using namespace std;

//多态案例二 制作饮品

class AbstractDrinking4
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void PutSomething() = 0;
	
	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//制作咖啡
class Coffee4 :public AbstractDrinking4
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;
	}
	//冲泡
	virtual void Brew() 
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入糖和牛奶" << endl;
	}
};

//制作茶类
class Tea4 :public AbstractDrinking4
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮怡宝" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入柠檬" << endl;
	}
};
//制作函数
void doWork4(AbstractDrinking4 * abs)
{
	abs->makeDrink();
	delete abs;//释放
}
void test014()
{
	//制作咖啡
	doWork4(new Coffee4);
	cout << "---------------" << endl;
	//制作茶叶
	doWork4(new Tea4);
}
int main4()

{
	test014();
	system("pause");

	return 0;
}