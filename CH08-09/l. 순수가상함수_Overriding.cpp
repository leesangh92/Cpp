#include <iostream>
using namespace std;

class AAA
{
public:
	virtual void fct() = 0; // 순수 가상함수

	void show()
	{
		cout << "AAA show()" << endl;
	}
};

class BBB : public AAA
{
public:
	virtual void fct() // 파생클래스는 반드시 순수 가상함수를 구현해야 한다. 기반클래스의 순수 가상함수는 body가 없다 
	{
		cout << "class BBB fct()" << endl;
	}
};

class CCC : public BBB
{
public:
	void fct()
	{
		cout << "class CCC fct()" << endl;
	}
};

int main()
{
	//AAA* a1 = new AAA; // 추상클래스는 객체를 생성할 수 없다.

	AAA* a2 = new BBB();
	a2->fct(); // BBB
	a2->show();

	AAA* a3 = new CCC();
	a3->fct(); // CCC

	delete a2;
	delete a3;

	return 0;
}