#include <iostream>

using namespace std;

class Account
{
public:
	char accID[10]; // ��� ����
	char passwd[10];
	char name[20];
	int balance;

	void Deposit(int money) // ��� �޼���
	{
		balance += money;
	}

	void Withdraw(int money)
	{
		if (money > balance)
		{
			cout << " �ܰ����!!!, ���� �ܰ� : " << balance << endl;
			return;
		}
		balance -= money;
	}
};

int main()
{
	//class ��, ��ü����
	Account p1 = { "1001", "1234", "kim", 1000 };
	cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;

	p1.Deposit(10000);
	cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;

	p1.Withdraw(5000);
	cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;

	//Account p2; // �����͸� ���� ������ �����Ⱚ�� ����ִ�.
	//cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;

	return 0;
}