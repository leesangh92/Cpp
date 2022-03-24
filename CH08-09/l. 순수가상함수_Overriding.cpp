#include <iostream>
using namespace std;

class AAA
{
public:
	virtual void fct() = 0; // ���� �����Լ�

	void show()
	{
		cout << "AAA show()" << endl;
	}
};

class BBB : public AAA
{
public:
	virtual void fct() // �Ļ�Ŭ������ �ݵ�� ���� �����Լ��� �����ؾ� �Ѵ�. ���Ŭ������ ���� �����Լ��� body�� ���� 
	{
		cout << "class BBB fct()" << endl;
	}
};

class CCC : public BBB
{
public:
	void fct()
	{
		cout << "class CCC fct()" << endl;
	}
};

int main()
{
	//AAA* a1 = new AAA; // �߻�Ŭ������ ��ü�� ������ �� ����.

	AAA* a2 = new BBB();
	a2->fct(); // BBB
	a2->show();

	AAA* a3 = new CCC();
	a3->fct(); // CCC

	delete a2;
	delete a3;

	return 0;
}