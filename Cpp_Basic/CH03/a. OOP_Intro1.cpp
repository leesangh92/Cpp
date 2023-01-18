#include <iostream>

using namespace std;

struct Account
{
	char accID[10];
	char passwd[10];
	char name[20];
	int balance;
};
// 구조체의 문제 : 구조체는 관련된 데이터를 담을 수 있다. 하지만 데이터를 조작하여 결과를 원하는 함수를 따로 구현해야한다. 
void Deposit(Account& ref, int money)
{
	ref.balance += money;
}

void Withdraw(Account& ref, int money)
{
	if (money > ref.balance)
	{
		cout << " 잔고부족!!!, 현재 잔고 : " << ref.balance << endl;
		return;
	}
	ref.balance -= money;
}

int main()
{
	Account p1 = { "1001", "1234", "kim", 1000 };

	cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;
	
	Deposit (p1, 10000);

	cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;

	Withdraw(p1, 5000);
	cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;

	return 0;
}
