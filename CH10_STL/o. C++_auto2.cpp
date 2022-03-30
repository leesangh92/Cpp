#include <iostream>
#include <vector>
using namespace std;

int square(int n)
{
	return n * n;
}

auto add(int x, double y) // �Ű������� ������ �� �Ű������� Ÿ���� �߷��� �� �����Ƿ� auto Ű���带 ����� �� ����. 
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

	auto add2 = add; // �Լ��� �ּ�, �Լ� ������ ����
	auto sum2 = add2(100, 7.1);
	cout << "sum2 : " << sum2 << endl;

	return 0;
}