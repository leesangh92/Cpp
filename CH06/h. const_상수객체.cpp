#include <iostream>
using namespace std;

//개체 == 객체 == Object

class AAA
{
private:
	mutable int num;

public:
	AAA(int n) : num(n)
	{}

	void showData()
	{
		cout << "void showData()" << endl;
		cout << "num : " << num << endl;
	}

	void showData() const
	{
		cout << "void showData() const" << endl;
		cout << "num : " << num << endl;
	}

	void Add(int n)
	{
		num += n;
	}

	void Add(int n) const
	{
		num += n;
	}
};

int main()
{
	AAA a1(200); // 일반객체 // 일반메서드 우선 생성, 일반메서드가 없을 때는 상수화된 메서드도 생성
	a1.showData();

	//const AAA a2(100); // 상수객체
	//a2.showData(); // 상수메서드만 접근 가능

	a1.Add(50);
	a1.showData();

	return 0;
}