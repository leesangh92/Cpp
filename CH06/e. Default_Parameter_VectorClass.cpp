#include <iostream>
#include <vld.h>

using namespace std;

class MyVector
{
private:
	int* p;
	int size;
public:
	MyVector(int n = 10) // ����Ʈ �����ڸ� �������� �ʾƵ� �ȴ�.
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
		cout << ", �� => " << sum << endl;
	}
};

int main()
{
	MyVector* v1 = new MyVector();
	MyVector* v2;
	v2 = new MyVector(20);

	v1->MyVector_data(); // v1 �迭��ҿ� ������ŭ 1���� ���� ������Ű�鼭 ä���
	v1->MyVector_sum(); // v1 �迭�� ���� ����� ��, ���� ���Ͽ� ���

	v2->MyVector_data();
	v2->MyVector_sum();

	delete v1;
	delete v2;

	return 0;
}