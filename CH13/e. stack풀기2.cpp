#include <iostream>
using namespace std;

void func1();
void func2();
void func3();

int main()
{
	try
	{
		func1();
	}

	catch(int exp)
	{
		cout << "¿¹¿Ü : " << exp << endl;
	}

	cout << "End." << endl;

	return 0;
}

void func1()
{
	func2();
}

void func2()
{
	func3();
}

void func3()
{
	throw 100;
}