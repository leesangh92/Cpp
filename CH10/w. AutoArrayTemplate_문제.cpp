#include <iostream>
#include <string>
using namespace std;

//1. 템플릿 클래스 생성,객체를 배열처럼 접근한다
//   여러 자료형으로 배열을 만들는 클래스 템플릿, 

/*
10, 20, 30, 40,
5.1, 2.1,
multi, campus, 멀티캠퍼스,
*/

#define A_SIZE 10

template <typename T>
class AutoArray
{
private:
	int idx;
	T* arrptr;

public:
	AutoArray(T* ptr)
	{
		idx = 0;
		arrptr = ptr;
	}

	~AutoArray()
	{
		delete[] arrptr;
	}

	int GetIdx()
	{
		return idx;
	}

	T& operator[](int index)
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
	
	AutoArray<int> arrInt(new int[A_SIZE]);
	AutoArray<double> arrDouble(new double[A_SIZE]);
	AutoArray<string> arrStr(new string[A_SIZE]);


	arrInt[0] = 10;
	arrInt[1] = 20;
	arrInt[2] = 30;
	arrInt[3] = 40;

	arrDouble[0] = 5.1;
	arrDouble[1] = 2.1;

	arrStr[0] = "multi ";
	arrStr[1] = "campus";
	arrStr[2] = "멀티캠퍼스";


	int idx1, idx2, idx3;

	idx1 = arrInt.GetIdx();
	idx2 = arrDouble.GetIdx();
	idx3 = arrStr.GetIdx();

	for (int i = 0; i <= idx1; i++)
		cout << arrInt[i] << ", ";
	cout << endl;

	for (int i = 0; i <= idx2; i++)
		cout << arrDouble[i] << ", ";
	cout << endl;

	for (int i = 0; i <= idx3; i++)
		cout << arrStr[i] <<  endl;
	cout << endl;

	return 0;
}
