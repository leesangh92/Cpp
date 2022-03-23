#include <iostream>
using namespace std;

// �޼��� �������̵�(Overriding) = �Լ� ������
// �޼��� �����ε�(Overloadaing) = �Լ� �ߺ�����

class AAA
{
public:
	void fct()
	{
		cout << "class AAA fct()" << endl;
	}
};

class BBB : public AAA
{
public:
	void fct() // ���� �̸��� �޼��� => Overriding(�Լ� ������)
	{
		cout << "class BBB fct()" << endl;
	}
};

int main()
{
	BBB b1; // Overriding�� �ڽ��� �޼��带 ȣ���Ѵ�. ���Ŭ���� �޼��带 ������ ȿ��.
	b1.fct();
	b1.AAA::fct(); // ����� ȣ��

	BBB* b2 = new BBB;
	b2->fct();
	b2->AAA::fct(); // ����� ȣ��

	AAA* a1 = b2; // upcast
	a1->fct(); // AAA �޼��� ȣ�� // ��ü �����ʹ� ����Ű�� ��� ������� ���Ŭ���� ���� ����� ������� ���� ����
	//a1->BBB::fct(); // Error // ���Ŭ���� �����ʹ� �Ļ�Ŭ���� ��ü�� ����ų �� ����.


	return 0;
}