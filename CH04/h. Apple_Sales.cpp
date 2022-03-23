#include <iostream>

using namespace std;

class AppleSeller // �Ǹ��� Ŭ����
{
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	void ShowSellerResult() const
	{
		cout << "�Ǹ��� ��� �� : " << numOfApples << endl;
		cout << "�Ǹ� ���� : " << myMoney << endl;
	}

	AppleSeller(int price, int num, int money) : APPLE_PRICE(price) // ����� �ݵ�� (�ݷ�)�ʱ�ȭ!!!
	{
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int money)
	{
		int n = money / APPLE_PRICE;

		if (n > numOfApples)
		{
			cout << "�����ִ� ��� ������ " << numOfApples << "�Դϴ�." << endl;
			cout << "���� �ִ� �ݾ��� : " << numOfApples * APPLE_PRICE << "�Դϴ�." << endl;

			return 0;
		}
		numOfApples -= n;
		myMoney += money;

		return n;
	}
};

class AppleBuyer // ������ Ŭ����
{
private:
	int numOfApples;
	int myMoney;
public:
	void ShowBuyerResult() const
	{
		cout << "������ ��� �� : " << numOfApples << endl;
		cout << "���� �ܾ� : " << myMoney << endl;
	}

	AppleBuyer(int money)
	{
		numOfApples = 0;
		myMoney = money;
	}

	// �޼��� ���� : ��ü ���� ����� �޼����� ���ؼ� �ǻ������� �ϴµ�, �̷��� �޼����� �� ��ü�� �ִ� �޼��带 ȣ���Ѵ�.
	void BuyApples(AppleSeller &_seller, int money)
	{

		if (money <= 0)
		{
			cout << "���� �ݾ��� 0�� �̻�!!!" << endl;
			return;
		}
		if (money > myMoney)
		{
			cout << "�����ִ� �ݾ��� " << myMoney << " �Դϴ�." << endl;
			return;
		}

		int ret = _seller.SaleApples(money);

		if (ret != 0)
		{
			numOfApples += ret;
			myMoney -= money;
		}

		//numOfApples += _seller.SaleApples(money);// �Ǹ��� ��� ����
		//myMoney -= money;
	}
};

int main()
{
	AppleSeller seller(1000, 20, 0);

	AppleBuyer buyer(50000);

	seller.ShowSellerResult();
	buyer.ShowBuyerResult();

	cout << "====================" << endl;

	buyer.BuyApples(seller, 2000);

	seller.ShowSellerResult();
	buyer.ShowBuyerResult();

	cout << "====================" << endl;

	buyer.BuyApples(seller, -3000);
	buyer.BuyApples(seller, 70000);

	cout << "====================" << endl;

	buyer.BuyApples(seller, 30000);

	cout << "====================" << endl;

	seller.ShowSellerResult();
	buyer.ShowBuyerResult();
	
	return 0;
}