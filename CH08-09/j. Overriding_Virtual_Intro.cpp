#include <iostream>
using namespace std;

class AAA
{
public:
	virtual void fct()
	{
		cout << "class AAA fct()" << endl;
	}
};

class BBB : public AAA
{
public:
	virtual void fct() // 같은 이름의 메서드 => Overriding(함수 재정의)
	{
		cout << "class BBB fct()" << endl;
	}
};

class CCC : public BBB
{
public:
	 void fct() // 메서드 overriding(재정의) // virtual은 상속되기 때문에 기반클래스에만 주어져도 되지만 가독성을 위해 virtual 명시를 해준다. 
	{
		cout << "class CCC fct()" << endl;
	}
};

int main()
{
	BBB* b1 = new BBB;
	b1->fct();
	b1->AAA::fct();

	cout << "====================" << endl;

	//기반클래스 포인터가 파생클래스 메서드를 호출한다.
	//실행 시 기반클래스를 가린다.(실행 시 파생클래스 주소변경, 동적결합)
	
	AAA* a1 = new BBB; // 기반클래스 포인터는 가리키는 대상에 관계없이 기반클래스를 나타낸다.
	// 함수가 virtual이 되면 객체포인터 타입과 관계없이 가리키는 대상 객체가 기준이 된다.
	a1->fct(); // AAA (x) -> BBB (o)

	AAA* a2 = new CCC;
	a2->fct(); // CCC

	BBB* b2 = new CCC;
	b2->fct(); // CCC

	AAA* a3 = b2;
	a3->fct(); // CCC
	a3->AAA::fct();

	cout << "====================" << endl;

	AAA* a4 = new AAA;
	//CCC* c1 = a4; // Error // Downcast.

	return 0;
}