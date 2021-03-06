#include <iostream>

using namespace std;

int main()
{
	int* num = new int;
	int* N = new int(200); // 메모리 할당과 동시에 초기화
	char* str = new char[20];
	int* Array = new int[5]; // [] : 배열

	*num = 100;
	strcpy(str, "hello world.");
	*(Array + 0) = 10;
	*(Array + 1) = 20;

	cout << *num << endl;
	cout << *N << endl;
	cout << str << endl;
	cout << Array[0] << endl;
	cout << Array[1] << endl;
	cout << Array[2] << ", " << Array[3] << endl; // 배열을 할당하고 데이터로 채우지 않으면 쓰레기값이 들어있다. 



	delete num; // 할당된 동적 메모리 해제
	delete N;
	delete[] str; // [] : 배열이 대상
	delete[] Array;

	num = NULL; // 해제된 메모리는 값을 가지고 있을 수 있으므로 NULL로 초기화 시켜준다.
	N = NULL;
	str = nullptr;
	Array = nullptr;

	return 0;
}