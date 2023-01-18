#include <iostream>
using namespace std;

class Type
{
private:
	int n;

public:
	Type(int _n) // 변환생성자 : 인자를 하나 갖는 생성자. 묵시적으로 타입형변환
	{
		cout << "Type(int _n)" << endl;
		n = _n;
	}

	int getN()
	{
		return n;
	}

	//operator int() // 형변환연산자 (묵시적 명시적 호출 모두 허용)
	explicit operator int() // 형변환연산자 (명시적 호출만 허용)
	{
		return n;
	}
};

int main()
{
	Type data1(100);

	data1 = 200;
	//data1 = (Type)200;
	cout << "data1.getN() : " << data1.getN() << endl;

	cout << "===================" << endl;

	//int num = data1; //묵시적 호출
	//int num = (int)data1; //명시적 호출(C)
	int num = static_cast<int>(data1); //명시적 호출(C++)
	cout << "num : " << num << endl;

	return 0;
}