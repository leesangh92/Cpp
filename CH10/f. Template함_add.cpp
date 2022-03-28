#include <iostream>
#include <cstring>
#include "vld.h"
using namespace std;

template <typename T>
T Add(T x, T y) // 같은 타입 T
{
	return x + y;
}

template <typename T1, typename T2>
T1 Add(T1 x, T2 y) // 다른 타입 T1, T2 // 실수 T1을 반환
{
	return x + y;
}

char *Add(char *sour, char *dest)
{
	cout << "char *Add(char *sour, char *dest) : ";

	int len = (strlen(sour) + strlen(dest)) + 1;
	char* ptr = new char[len];
	strcpy(ptr, sour);
	strcat(ptr, dest);

	return ptr;
}

char* Add(const char* sour, const char* dest)
{
	cout << "char *Add(const char *sour, const char *dest) : ";

	int len = (strlen(sour) + strlen(dest)) + 1;
	char* ptr = new char[len];
	strcpy(ptr, sour);
	strcat(ptr, dest);

	return ptr;
}

template <typename T>
T Add(T x[], int size)
{
	cout << "T Add(T x[], int size) : ";

	T sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += x[i];
	}

	return sum;
}

int main()
{
	cout << Add(10, 20) << endl;
	cout << Add(1.5, 20) << endl;

	char s1[] = "king", s2[] = "dom";
	char* ref1;
	ref1 = Add(s1, s2);
	cout << ref1 << endl;

	char* ref2;
	ref2 = Add("Multi", "Campus");
	cout << ref2 << endl;

	delete ref1;
	delete ref2;

	int arr[5] = { 10, 20, 30, 40, 50 };
	cout << Add(arr, 5) << endl;

	double darr[5] = { 10.1, 20.2, 30.3, 40.4, 50.5 };
	cout << Add(darr, 5) << endl;

	return 0;
}