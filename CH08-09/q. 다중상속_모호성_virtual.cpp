#include <iostream>
using namespace std;

class AAA
{
public:
	void string1()
	{
		cout << "AAA : string1() \n";
	}
};

//string1, string2
class BBB : virtual public AAA
{ // virtual 상속 : 파생클래스에서 기반클래스를 virtual 상속받으면 컴파일러는 기반클래스 공간을 한 번만 할당하고, 
  //파생클래스는 할당된 공간을 공유하도록 지시한다. 

public:
	void string2()
	{
		cout << "BBB : string2() \n";
	}
};

//string1, string3
class CCC : virtual public AAA
{
public:
	void string3()
	{
		cout << "CCC : string3() \n";
	}
};

//string1, string2, string1, string3, showString // string1이 중복
class DDD : public BBB, public CCC
{
public:
	void showString()
	{
		cout << "DDD : showString() \n";
	}
};

int main()
{
	DDD d1;

	d1.string2();
	d1.string3();
	d1.showString();
	
	//d1.string(); // 모호성
	//d1.AAA::string1();
	//d1.BBB::string1();

	d1.string1(); // virtual 상속

	return 0;
}