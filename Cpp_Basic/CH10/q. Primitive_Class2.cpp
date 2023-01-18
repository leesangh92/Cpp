#include <iostream>
using namespace std;

template <typename T>
class Type
{
private:
	T n;

public:
	Type(T _n) // 변환생성자
	{
		cout << "Type(T _n)" << endl;
		n = _n;
	}

	int getN()
	{
		return n;
	}

	operator T() // 형변환연산자
	{
		cout << "operator T()" << endl;
		return n;
	}
};

int main()
{
	Type <int>data1(100);
	data1 = 200;
	int num = data1;
	cout << "num : " << num << endl;

	cout << "====================\n";

	Type <char>data2('A');
	char ch = data2;
	cout << "ch : " << ch << endl;

	cout << "====================\n";

	Type <double>data3(3.5);
	double dnum = data3;
	cout << "dnum : " << dnum << endl;

	cout << "====================\n";

	Type <string>data4("Hello World!!!");
	string str = data4;
	cout << "str : " << str << endl;

	cout << "====================\n";

	return 0;
}