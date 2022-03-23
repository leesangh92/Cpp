#include <iostream>
#include <vld.h>

using namespace std;

class MyVector
{
private:
	int* p;
	int size;
public:
	MyVector(int n = 10) // 디폴트 생성자를 생성하지 않아도 된다.
	{
		p = new int[n];
		size = n;
	}

	~MyVector()
	{
		delete[] p;
	}

	void MyVector_data()
	{
		for (int i = 0; i < size; i++)
		{
			*(p + i) = i + 1;
		}
	}

	void MyVector_sum()
	{
		int sum = 0;

		for (int i = 0; i < size; i++)
		{
			cout << *(p + i) << ", ";
			sum += p[i];
		}
		cout << ", 합 => " << sum << endl;
	}
};

int main()
{
	MyVector* v1 = new MyVector();
	MyVector* v2;
	v2 = new MyVector(20);

	v1->MyVector_data(); // v1 배열요소에 개수만큼 1부터 값을 증가시키면서 채운다
	v1->MyVector_sum(); // v1 배열의 값을 출력한 후, 합을 구하여 출력

	v2->MyVector_data();
	v2->MyVector_sum();

	delete v1;
	delete v2;

	return 0;
}