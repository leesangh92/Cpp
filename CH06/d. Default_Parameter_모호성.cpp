#include <iostream>

using namespace std;

int function1(int n = 0)
{
	cout << "function1(int n = 0)" << endl;
	return n + 1;
}

//int function1()
//{
//	return 1;
//}


double function2(double d)
{
	cout << "function2(double d)" << endl;
	return d * 3;
}

float function2(float d)
{
	cout << "function2(float d)" << endl;
	return d * 3;
}

// 모호한 호출
//int function3(int n1, int n2)
//{
//	return n1 + n2;
//}

int function3(int &n1, int &n2)
{
	return n1 + n2;
}

int main()
{
	cout << function1(100) << endl;
	cout << function1() << endl; // 모호한 호출 : overload된 함수의 호출이 모호 // 두 개 오버로드 함수에 모두 포함된다.

	cout << function2(3.0) << endl;
	cout << function2(3.0) << endl;
	cout << function2(3.0F) << endl; // 묵시적 형변환
	/*cout << function2(3) << endl;*/ // 모호한 호출 묵시적 형변환 float, double 둘 다로 모두 형변환이 가능하다

	int a = 100, b = 200;
	cout << function3(a, b) << endl;

	return 0;
}