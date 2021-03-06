#include <iostream>

using namespace std;

//int Array1D(int tmp[], int size)
int Array1D(int *tmp, int size)
{
	int sum = 0, i;

	for (i = 0; i < size; i++)
		//sum += tmp[i];
		sum += *(tmp + i);

	return sum;
}

int Array2D(int (*tmp)[4], int row, int col) // 배열 포인터 변수
//int Array2D(inttmp[][4], int row, int col)
{
	int sum = 0, i, j;

	for (i = 0; i < row; i++)
		for(j  =0; j < col; j++)
			sum += tmp[i][j];

	return sum;
}
int main()
{
	int num1[5] = { 10, 20, 30, 40, 50 }, tot;

	tot = Array1D(num1, 5);
	cout << "Array1D 배열의 합 : " << tot << endl;

	int num2[2][4] = { 10, 20, 30, 40, 50, 60, 70, 80 };
	int row = sizeof(num2) / sizeof(num2[0]);
	int col = sizeof(num2[0]) / sizeof(num2[0][0]);

	tot = Array2D(num2, row, col);
	cout << "Array2D 배열의 합 : " << tot << endl;



	int i;

	for (auto n : num1) // 배열의 원소를 하나씩 가져온다. 
	{
		n += 1;
		cout << n << " , ";
	}
	cout << endl;

	for (i = 0; i < 5; i++)
	{
		num1[i] += 1;
		cout << num1[i] << " , ";
	}
	cout << endl;



	for (auto &n : num1) // 참조
	{
		n += 1;
		cout << n << " , ";
	}
	cout << endl;

	return 0;
}