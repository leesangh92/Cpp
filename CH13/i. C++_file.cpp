#include <iostream>
using namespace std;

extern "C" void Func(const char* msg);
extern "C" char* getName();

int main()
{
	char* retName;

	Func("C++ ���� C�Լ� ȣ��.");

	retName = getName();
	printf("name : %s \n", retName);

	return 0;
}