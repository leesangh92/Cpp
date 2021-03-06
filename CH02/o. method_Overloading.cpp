#include <iostream>

using namespace std;

// 함수 중복 정의(method overloading) // C언어에서는 같은 이름의 함수가 여러번 올 수 없었지만 C++에서는 가능하다. 
// C언어에서는 함수의 이름만으로 구별, 객체지향에서는 괄호 안의 인자까지 모두 확인하여 구별
void MyFunc()
{
	cout << "void MyFunc() : " << endl;
}

void MyFunc(const int x)
{
	cout << "void MyFunc(int x) : " << x << endl;
}

void MyFunc(const char x)
{
	cout << "void MyFunc(char x) : " << x << endl;
}

void MyFunc(const char *str)
{
	cout << "void MyFunc(const char *str) : " << str << endl;
}

void MyFunc(const int x, const double y)
{
	cout << "void MyFunc(int x, double y) : " << x << ", " << y << ", " << x+y <<endl;
}

int main()
{
	MyFunc();
	MyFunc(100);
	MyFunc("INFINITT healthcare");
	MyFunc(100, 3.5);

	MyFunc('A');
	MyFunc(100, 200);
	//MyFunc(100, 200, 300); // 인자의 개수와 타입이 맞아야 한다. 
	//MyFunc(5.5);

	//int N = MyFunc(200); // 에러 // return 타입(함수의 반환형)은 overloading 조건에 해당되지 않는다.

	return 0;
}