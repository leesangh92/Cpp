#include <iostream>
#include <vld.h>

using namespace std;

class AAA
{
private:
	char* str1;

public:
	AAA(const char* s1)
	{
		str1 = new char[strlen(s1) + 1];
		strcpy(str1, s1);
	}

	virtual void showData()
	{
		cout << str1 << ", ";
	}

	virtual ~AAA() // 소멸자 가상함수!!! // virtual이 없을 때와 있을 때의 차이!!!
	{
		cout << "~AAA()" << endl;
		delete[] str1;
	}
};

class BBB : public AAA
{
private:
	char* str2;

public:
	BBB(const char* s1, const char* s2) : AAA(s1)
	{
		str2 = new char[strlen(s2) + 1];
		strcpy(str2, s2);
	}

	void showData()
	{
		AAA::showData();
		cout << str2 << endl;
	}

	~BBB()
	{
		cout << "~BBB()" << endl;
		delete[] str2;
	}
};


int main()
{
	AAA* a1 = new BBB("Good", "morning");
	a1->showData();

	BBB *b1 = new BBB("Good", "evening");
	b1->showData();

	delete a1;
	delete b1;

	return 0;
}