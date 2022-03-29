#include <iostream>
#include <cstdlib>
using namespace std;

class AutoArray
{
private:
	int idx;
	int *arrptr;

public:
	AutoArray(int *ptr)
	{
		idx = 0;
		arrptr = ptr;
	}

	~AutoArray()
	{
		delete[] arrptr;
	}

	int getIdx()
	{
		return idx;
	}

	int& operator[](int index)
	{
		//cout << "int& operator[](int index)" << endl;

		if (index < 0 || index >= 10)
		{
			cout << "배열 첨자 오류!!!" << endl;
			exit(1);
		}
		idx = index;
		return arrptr[index];
	}
};

int main()
{
	AutoArray arr(new int[10]);

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;

	int idx = arr.getIdx();
	for (int i = 0; i <= idx; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}