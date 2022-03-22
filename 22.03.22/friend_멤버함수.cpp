#include <iostream>

using namespace std;

class BBB; // ���� ���� : AAA Ŭ������ BBB Ŭ������ ����ϹǷ� �����Ͽ��� �Ѵ�.

class AAA
{
public:
	void setData(BBB& ref, int value); // ���� ���� �ʿ�.

	void getData(BBB& ref);
};

class BBB
{
private:
	int data = 0;

public:
	void showData()
	{
		cout << "showData() " << data << endl;
	}

	friend void AAA::setData(BBB& ref, int value);
	friend void AAA::getData(BBB& ref);
};

// BBB Ŭ���� friend ���� �ڿ� �Լ� ���Ǹ� �ؾ� AAA Ŭ������ �޼��忡�� BBB �ڷ����� �ؼ��� �� �ִ�. 
void AAA::setData(BBB& ref, int value)
{
	ref.data = value;
}

void AAA::getData(BBB& ref)
{
	cout << "" << ref.data << endl;
}

int main()
{
	AAA a1;
	BBB b1;

	a1.setData(b1, 100);
	b1.showData();
	a1.getData(b1);

	return 0;
}