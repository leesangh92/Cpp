#include <iostream>
using namespace std;

class AAA
{
public:
	virtual void fct()
	{
		cout << "class AAA fct()" << endl;
	}
};

class BBB : public AAA
{
public:
	virtual void fct() // ���� �̸��� �޼��� => Overriding(�Լ� ������)
	{
		cout << "class BBB fct()" << endl;
	}
};

class CCC : public BBB
{
public:
	 void fct() // �޼��� overriding(������) // virtual�� ��ӵǱ� ������ ���Ŭ�������� �־����� ������ �������� ���� virtual ��ø� ���ش�. 
	{
		cout << "class CCC fct()" << endl;
	}
};

int main()
{
	BBB* b1 = new BBB;
	b1->fct();
	b1->AAA::fct();

	cout << "====================" << endl;

	//���Ŭ���� �����Ͱ� �Ļ�Ŭ���� �޼��带 ȣ���Ѵ�.
	//���� �� ���Ŭ������ ������.(���� �� �Ļ�Ŭ���� �ּҺ���, ��������)
	
	AAA* a1 = new BBB; // ���Ŭ���� �����ʹ� ����Ű�� ��� ������� ���Ŭ������ ��Ÿ����.
	// �Լ��� virtual�� �Ǹ� ��ü������ Ÿ�԰� ������� ����Ű�� ��� ��ü�� ������ �ȴ�.
	a1->fct(); // AAA (x) -> BBB (o)

	AAA* a2 = new CCC;
	a2->fct(); // CCC

	BBB* b2 = new CCC;
	b2->fct(); // CCC

	AAA* a3 = b2;
	a3->fct(); // CCC
	a3->AAA::fct();

	cout << "====================" << endl;

	AAA* a4 = new AAA;
	//CCC* c1 = a4; // Error // Downcast.

	return 0;
}