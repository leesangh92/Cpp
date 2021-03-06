#include <iostream>

using namespace std;

char* ReverseString(const char* src, int len) // 문자열을 역순으로 복사한다.
{
	char* dest = new char[len + 1];

	for (int i = 0; i < len; ++i) // 문자열을 역순으로 복사 // 단독으로 일어나는 증감이기 때문에 전위/후위증감 상관없음
	{
		dest[i] = src[len - i - 1];
	}
	dest[len] = NULL; // 문자열 끝에 NULL

	return dest;
}

int main()
{
	const char original[] = "Multi Campus";

	char* copy = ReverseString(original, strlen(original));

	cout << original << "\n";
	cout << copy << "\n";

	delete[] copy;
	copy = NULL;

	return 0;
}