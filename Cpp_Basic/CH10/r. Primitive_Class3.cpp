#include <iostream>
using namespace std;

class CTestData
{
private:
	int mData;

public:
	CTestData(int _data)
	{
		cout << "CTestData(int _data)" << endl;
		mData = _data;
	}

	~CTestData()
	{
		//cout << "~CTestData()" << endl;
	}

	int getData()
	{
		return mData;
	}

	void setData(int _param)
	{
		mData = _param;
	}

	operator int() // 형변환연산자
	{
		cout << "operator int()" << endl;
		return mData;
	}

	friend ostream& operator << (ostream& os, CTestData& ref);
};

//void TestFunc(int num)
//{
//	cout << "TestFunc(int num)" << endl;
//}

void TestFunc(CTestData param)
{
	cout << "TestFunc(CTestData param)" << endl;

	cout << param.getData() << endl;
	param.setData(200);
	cout << param.getData() << endl;
}

ostream& operator << (ostream& os, CTestData& ref)
{
	cout << "operator << (ostream& os, CTestData& ref)" << endl;
	os << ref.mData << endl;

	return os;
}

int main()
{
	TestFunc(100); // 묵시적 호출
	//TestFunc(CTestData(100)); // 명시적 호출

	cout << "====================" << endl;

	CTestData c1(50);
	//operator << (cout, c1)
	cout << c1 << endl; // 묵시적 호출
	//cout << (int)c1 << endl; // 명시적 호출(C)
	cout << static_cast <int>(c1) << endl; // 명시적 호출(C++)

	return 0;
}