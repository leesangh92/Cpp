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
	// 1. 일반함수 호출
	sum1(10, 20);

	// 2. lambda 함수 호출 // 1회성(함수 이름이 없다.)
	[](int x, int y)
	{
		cout << "sum1()과 동일한 lambda 함수 : " << x + y << endl;
	} (10, 30);

	 // 3. 합을 구하는 변수에 저장하는 lambda 함수
	int sum = 0;
	[&sum](int x, int y) { sum = x + y; }(10, 30);
	cout << "sum : " << sum << endl;

	// 4. for_each를 사용하는 lambda 함수
	vector<int> v = { 1, 2, 3, 4, 5 };
	for_each(v.begin(), v.end(), [](int n) { cout << n << ", "; }); // for_each는 헤더파일 <algorithm> 필요

	int sum2 = 0;
	for_each(v.begin(), v.end(), [&sum2](int n) { sum2 += n; }); // 배열 순회
	cout << "\nsum2 : " << sum2 << endl;

	double pi = 3.14159;
	// lambda 함수도 이름이 있을 수 있다.
	auto calc = [pi](int r) -> double { return pi * r * r; };
	cout << "면적 : " << calc(5) << endl;

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