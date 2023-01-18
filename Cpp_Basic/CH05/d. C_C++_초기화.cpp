#include <iostream>

using namespace std;

class AAA
{
private:
	int value;
public:
	void showData()
	{
		cout << "value : " << value << endl;
	}

	AAA(int n)
	{
		value = n;
	}

	explicit AAA(int n) // 명시적 호출만 허용. (묵시적 호출은 허용 X)
	{
		value = n;
	}
};

int main()
{
	int n1 = 20; // C 스타일 초기화
	int n2(30); // C++ 스타일 초기화

	cout << "n1 : " << n1 << ", n2 : " << n2 << endl;

	AAA a1(100); // C++ 스타일 초기화
	a1.showData();

	AAA a2 = 200; // C스타일 초기화 묵시적으로 C++ 스타일로 변환괸다. 
	a2.showData();

	return 0;
}