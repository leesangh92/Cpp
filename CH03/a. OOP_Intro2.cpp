#include <iostream>

using namespace std;

struct Account
{
	char accID[10]; // 멤버 변수
	char passwd[10];
	char name[20];
	int balance;
	
	void Deposit(int money) // 멤버 메서드
{
	balance += money;
}

void Withdraw(int money)
{
	if (money > balance)
	{
		cout << " 잔고부족!!!, 현재 잔고 : " << balance << endl;
		return;
	}
	balance -= money;
}
};
// C++ 구조체 : 관련된 함수들을 하나의 부류로 인정해주며 자료형을 만든다.  


int main()
{
	Account p1 = { "1001", "1234", "kim", 1000 };

	cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;

	p1.Deposit(10000);

	cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;

	p1.Withdraw(5000);
	cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;

	return 0;
}