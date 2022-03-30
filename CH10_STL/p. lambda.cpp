#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sum1(int x, int y)
{
	cout << "sum1() : " << x + y << endl;
}

int main()
{
	// 1. �Ϲ��Լ� ȣ��
	sum1(10, 20);

	// 2. lambda �Լ� ȣ�� // 1ȸ��(�Լ� �̸��� ����.)
	[](int x, int y)
	{
		cout << "sum1()�� ������ lambda �Լ� : " << x + y << endl;
	} (10, 30);

	 // 3. ���� ���ϴ� ������ �����ϴ� lambda �Լ�
	int sum = 0;
	[&sum](int x, int y) { sum = x + y; }(10, 30);
	cout << "sum : " << sum << endl;

	// 4. for_each�� ����ϴ� lambda �Լ�
	vector<int> v = { 1, 2, 3, 4, 5 };
	for_each(v.begin(), v.end(), [](int n) { cout << n << ", "; }); // for_each�� ������� <algorithm> �ʿ�

	int sum2 = 0;
	for_each(v.begin(), v.end(), [&sum2](int n) { sum2 += n; }); // �迭 ��ȸ
	cout << "\nsum2 : " << sum2 << endl;

	double pi = 3.14159;
	// lambda �Լ��� �̸��� ���� �� �ִ�.
	auto calc = [pi](int r) -> double { return pi * r * r; };
	cout << "���� : " << calc(5) << endl;

	int num = 10, num2;
	auto f1 = [num] { cout << num * num << endl; };
	f1();

	auto f2 = [num]()->int { return num * num; };
	cout << f2() << endl;

	auto f3 = [num, &num2] { num2 = num * num; };
	f3();
	cout << "num2 : " << num2 << endl;

	return 0;
}