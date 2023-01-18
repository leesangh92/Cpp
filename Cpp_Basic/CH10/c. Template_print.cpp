#include <iostream>
using namespace std;

template <typename T>
void print(T *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << ", ";
	}
	cout << endl;
}

void print(char* arr, int size) // �Ϲ��Լ��� template �Լ����� �켱�Ѵ�. 
{
	for (int i = 0; i < size; i++)
	{
		cout << (int)*(arr + i) << ",  ";
	}
	cout << endl;
}

int main()
{
	int x[5] = { 1, 2, 3, 4, 5 };
	double d[7] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	print(x, sizeof(x) / sizeof(x[0]));
	print(d, sizeof(d) / sizeof(d[0]));

	//char c1[5] = { 1, 2, 3, 4, 5 }; // ASCII �ڵ�
	//print(c1, sizeof(c1) / sizeof(c1[0]));

	char c2[5] = { 'A', 'B', 'C', 'D', 'E' }; // char c2[] = { 'A', 'B', 'C', 'D', 'E' }; (unsized �迭)
	print<char>(c2, sizeof(c2) / sizeof(c2[0])); // ���ø��Լ�

	char c1[5] = { 1, 2, 3, 4, 5 };
	print(c1, sizeof(c1) / sizeof(c1[0])); // �Ϲ� �Լ�

	return 0;
}