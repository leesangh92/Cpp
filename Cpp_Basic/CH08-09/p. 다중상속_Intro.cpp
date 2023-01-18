#include <iostream>
using namespace std;

class AAA
{
public:
	void string()
	{
		cout << "AAA : string() \n";
	}
};

class BBB
{
public:
	void string()
	{
		cout << "BBB : string() \n";
	}
};

class CCC : public AAA, public BBB // 다중 상속 // 잘 사용하지는 않는다
{
public:
	void showString()
	{
		AAA::string();
		BBB::string();
		cout << "CCC : showString() \n";
	}
};

int main()
{
	CCC c1;
	//c1.string(); // 모호한 호출, 무엇을 호출해야 할 지 모른다
	c1.AAA::string();
	c1.BBB::string();
	c1.showString();

	return 0;
}