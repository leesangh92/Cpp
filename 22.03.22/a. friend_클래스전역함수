#include <iostream>

using namespace std;

class Counter
{
private:
	int value;

public:
	Counter() : value(0)
	{	}

	void showData()
	{
		cout << "value : " << value << endl;
	}

	friend void setValue(Counter& ref, int n);
};

void setValue(Counter& ref, int n) // 전역함수에서 객체의 private 멤버 접근 => 클래스에서 friend 선언
{
	ref.value = n;
}

int main()
{
	Counter cnt;
	cnt.showData();

	setValue(cnt, 5000);
	cnt.showData();

	return 0;
}
