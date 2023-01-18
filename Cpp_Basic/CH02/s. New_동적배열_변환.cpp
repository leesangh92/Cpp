#include <iostream>

using namespace std;

/*
정수형 배열을 동적배열로 할당받아 데이터를 입력한 후, 배열의 주소를 반환하여 main()에서 출력한다.
*/

//size만큼 동적할당 후 데이터를 입력하고, 동적할당 주소를 반환
int *NumAdd(int size)
{
	int *arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << "input ? ";
		cin >> *(arr + i);
	}

	return arr;
}

int main()
{
	int size;

	cout << "입력할 정수의 수 ? ";
	cin >> size; // 5

	NumAdd(size);

	int* Arr = NumAdd(size);

	//동적할당된 배열 출력
	for (int i = 0; i < size; i++)
	{
		cout << *(Arr + i) << ", ";
	}
	cout << endl;

	delete[] Arr;

	Arr = NULL;

	return 0;
}