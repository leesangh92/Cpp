#include <iostream>

using namespace std;

void swap(int &ptr1, int &ptr2)
{
	int temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

//void swap(const int& ref1, const int& ref2) // swap 함수로 데이터를 변경하는 것이기 때문에 const 로 상수화를 시키면 안된다.
//{
//	const int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}

void swap(double& ptr1, double& ptr2)
{
	double temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

void swap(char& ptr1, char& ptr2)
{
	char temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

int main()
{
	int num1 = 20, num2 = 30;
	swap(num1, num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(ch1, ch2);
	cout << ch1 << ' ' << endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(dbl1, dbl2);
	cout << dbl1 << ' ' << dbl2 << endl;

	return 0;
}