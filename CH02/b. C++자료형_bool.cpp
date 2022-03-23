#include <iostream>

using namespace std;

int main()
{
	//boolean : 참(1), 거짓(0)을 갖는 자료형
	//int BOOL = True (X)
	//int BOOL = TRUE (X)
	int BOOL = true;
	cout << "BOOL : " << BOOL << endl;

	BOOL = false;
	cout << "BOOL : " << BOOL << endl;

	cout << "sizeof(1) : " << sizeof(1) << endl;
	cout << "sizeof(0) : " << sizeof(0) << endl;
	cout << "sizeof(true) : " << sizeof(true) << endl;
	cout << "sizeof(false) : " << sizeof(false) << endl;

	return 0;
}