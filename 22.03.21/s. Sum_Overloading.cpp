#include <iostream>

using namespace std;

int Sum(int n1, int n2)
{
	int sum = 0;

	for (int i = 0; i <= n2; i++)
	{
		sum += i;
	}
	return sum;
}

int Sum(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

int Sum(int* arr, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}

int main()
{
	cout << Sum(3, 5) << endl;
	cout << Sum(1, 10) << endl;
	cout << Sum(3) << endl;
	cout << Sum(100) << endl;

	int num[5] = { 100, 200, 300, 400, 500 };

	cout << Sum(num, sizeof(num) / sizeof(num[0])) << endl;

	return 0;
}
