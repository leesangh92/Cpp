#include <iostream>

using namespace std;

class Account
{
public:
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

int main()
{
	//class 명, 개체변수
	Account p1 = { "1001", "1234", "kim", 1000 };
	cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;

	p1.Deposit(10000);
	cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;

	p1.Withdraw(5000);
	cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;

	//Account p2; // 데이터를 넣지 않으면 쓰레기값이 들어있다.
	//cout << p1.accID << ", " << p1.passwd << ", " << p1.name << ", " << p1.balance << endl;

	return 0;
}