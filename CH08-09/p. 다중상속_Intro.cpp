#include <iostream>
using namespace std;

class AAA
{
public:
	void string()
	{
		cout << "AAA : string() \n";
	}
};

class BBB
{
public:
	void string()
	{
		cout << "BBB : string() \n";
	}
};

class CCC : public AAA, public BBB // ���� ��� // �� ��������� �ʴ´�
{
public:
	void showString()
	{
		AAA::string();
		BBB::string();
		cout << "CCC : showString() \n";
	}
};

int main()
{
	CCC c1;
	//c1.string(); // ��ȣ�� ȣ��, ������ ȣ���ؾ� �� �� �𸥴�
	c1.AAA::string();
	c1.BBB::string();
	c1.showString();

	return 0;
}