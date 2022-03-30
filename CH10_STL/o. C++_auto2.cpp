#include <iostream>
#include <vector>
using namespace std;

int square(int n)
{
	return n * n;
}

auto add(int x, double y) // 매개변수는 컴파일 시 매개변수의 타입을 추론할 수 없으므로 auto 키워드를 사용할 수 없다. 
{
	return x + y;
}

template <typename T1, typename T2>
auto ADD(T1 x, T2 y)
{
	return x + y;
}

int main()
{
	auto ret = square(3);
	cout << "ret : " << ret << endl;

	auto sum = add(10, 3.5);
	cout << "sum : " << sum << endl;

	auto t1 = ADD<int, float>(100, 1.5);
	auto t2 = ADD<int, char>(1, 'A');
	auto t3 = ADD(100, 2.0);

	cout << t1 << ", " << t2 << ", " << t3 << endl;
	cout << typeid(t1).name() << ", " << typeid(t2).name() << ", " << typeid(t3).name() << endl;

	auto add2 = add; // 함수의 주소, 함수 포인터 변수
	auto sum2 = add2(100, 7.1);
	cout << "sum2 : " << sum2 << endl;

	return 0;
}