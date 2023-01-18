#include <iostream>

#include <cstdlib>

using namespace std;

int divide(int a, int b);

int main()
{
	int a, b;

	cout << "두 수를 입력 : ";
	cin >> a >> b;
	try
	{
		cout << "a/b : " << divide(a, b) << endl;
		//abort();
	}

	catch (char exp)
	{
		cout << "예외 발생." << endl;
	}
	cout << "End." << endl;

	return 0;
}

int divide(int a, int b)
{
	if (b == 0)
		throw b;

	return a / b;
}