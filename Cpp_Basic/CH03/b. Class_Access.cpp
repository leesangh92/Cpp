#include <iostream>

using namespace std;

class Counter
{
private: // 내부 접근만을 허락. 디폴트는 private.
	int value2 = 100; // 변수 초기화는 거의 하지 않는다. 
public: // 모든 외부 접근을 허락.
	int value;
	void InCrement()
	{
		value++; // 내부 접근
		value2++; // 내부 접근
	}
	int GetValue() // private 멤버의 내부 접근을 위한 메서드 함수를 따로 만들어 주어야 한다. 
	{
		return value2; // 내부 접근
	}
};

int main()
{
	Counter cnt;

	cnt.value = 1; // 외부 접근 : 클래스 밖에서 접근
	cnt.InCrement(); // 외부 접근
	                        // 외부 접근
	cout << "cnt.value : " << cnt.value << endl;

	//cout << "cnt.value2 : " << cnt.value2 << endl;
	cout << "cnt.value2 : " << cnt.GetValue() << endl;

	return 0;
}