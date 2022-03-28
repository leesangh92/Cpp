#include <iostream>
using namespace std;

template <typename T>
int sizeOf(T x)
{
	return sizeof(x); // 주소의 크기를 반환
}

int sizeOf(const char* x) // 일반메서드 // 일반메서드가 특수메서드보다 우선한다. 
{
	cout << "sizeOf (const char* x) ";

	return strlen(x); // 문자열의 크기를 반환
}

// 템플릿 특수화 : < ~ > 형식이면 이 템플릿을 가져옴
template<>
int sizeOf <const char*>(const char* x)
{
	cout << "sizeOf <const char *>(const char* x) ";

	return strlen(x);
}

int main()
{
	int n = 100;
	double d = 3.9;
	cout << "sizeOf(n) : " << sizeOf(n) << endl;
	cout << "sizeOf(d) : " << sizeOf(d) << endl;

	const char* str = "hello world!!!"; // 문자열의 크기
	cout << "sizeOf(str) : " << sizeOf(str) << endl;
	cout << "sizeOf<const char *>(str) : " << sizeOf<const char *>(str) << endl;

	return 0;
}