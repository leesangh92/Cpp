#include <iostream>
#include <cstring>
using namespace std;

/*
������
CMyString(const char * _tmp) called.
operator char*() const.
TestFunc(const CMyString& strParam) : Hello
==============
CMyString(const char * _tmp) called.
operator char*() const.
TestFunc(const CMyString& strParam) : World
~CMyString() called.
~CMyString() called.
*/
 
class CMyString
{
	char* str;
	int len;
public:
	CMyString(const char* tmp)  //������
	{
		cout << "CMyString(const char* tmp) called." << endl;
		len = strlen(tmp);
		str = new char[len + 1];
		strcpy(str, tmp);
	}

	~CMyString()
	{
		cout << "~CMyString() called" << endl;
		delete str;
	}

	operator char* () const // ����ȯ ������
	{
		cout << "operator char* () const" << endl;
		return str;
	}
};

void TestFunc(const CMyString& strParam)
{
	cout << "TestFunc(const CMyString& strParam) called." << strParam << endl;
}

int main()
{
	CMyString strData("Hello");

	TestFunc(strData); //�����Լ�
	cout << "==============" << endl;

	TestFunc(CMyString("World"));
	cout << "==============" << endl;

	return 0;
}
