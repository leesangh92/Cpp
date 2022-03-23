#include <iostream>
using namespace std;

class SoBase
{
private:
	int baseNum;

public:
	SoBase() // 파생 클래스가 있다면 반드시 기본 생성자가 있어야 한다!!!
	{
		cout << "SoBase() : " << baseNum << endl;
	}

	SoBase(int n) : baseNum(n)
	{
		cout << "SoBase(int n) : " << baseNum << endl;
	}

	~SoBase()
	{
		cout << "~SoBase() : " << baseNum << endl;
	}
};

class SoDerived : public SoBase
{
private:
	int devNum;

public:
	SoDerived(int n) : SoBase(n) // 기반클래스 명시적 호출
	{
		cout << "SoDerived(int n) : " << devNum << endl;
	}

	/*SoDerived(int n) : devNum(n)
	{
		cout << "SoDerived(int n) : " << devNum << endl;
	}*/

	~SoDerived()
	{
		cout << "~SoDerived : " << devNum << endl;
	}
};

int main()
{
	SoDerived dr1(100);


	return 0;
}