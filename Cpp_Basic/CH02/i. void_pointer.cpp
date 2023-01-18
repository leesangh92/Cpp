#include <iostream>

using namespace std;

int main()
{
	int nArray[5], i;
	void* ptr = nArray;

	for (i = 0; i < 5; i++)
		*((int*)ptr + i) = 10 + i; // void 포인터는 자료형을 알려줘야 주소 값을 반환할 수 있다. 

	for (i = 0; i < 5; i++)
		cout << nArray[i] << ", ";
	cout << endl;

	return 0;
}