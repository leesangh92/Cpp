#include <iostream>

using namespace std;

/*
������ �迭�� �����迭�� �Ҵ�޾� �����͸� �Է��� ��, �迭�� �ּҸ� ��ȯ�Ͽ� main()���� ����Ѵ�.
*/

//size��ŭ �����Ҵ� �� �����͸� �Է��ϰ�, �����Ҵ� �ּҸ� ��ȯ
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

	cout << "�Է��� ������ �� ? ";
	cin >> size; // 5

	NumAdd(size);

	int* Arr = NumAdd(size);

	//�����Ҵ�� �迭 ���
	for (int i = 0; i < size; i++)
	{
		cout << *(Arr + i) << ", ";
	}
	cout << endl;

	delete[] Arr;

	Arr = NULL;

	return 0;
}