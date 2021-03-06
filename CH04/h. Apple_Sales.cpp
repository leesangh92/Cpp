#include <iostream>

using namespace std;

class AppleSeller // 판매자 클래스
{
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	void ShowSellerResult() const
	{
		cout << "판매할 사과 수 : " << numOfApples << endl;
		cout << "판매 수익 : " << myMoney << endl;
	}

	AppleSeller(int price, int num, int money) : APPLE_PRICE(price) // 상수는 반드시 (콜론)초기화!!!
	{
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int money)
	{
		int n = money / APPLE_PRICE;

		if (n > numOfApples)
		{
			cout << "남아있는 사과 수량은 " << numOfApples << "입니다." << endl;
			cout << "구매 최대 금액은 : " << numOfApples * APPLE_PRICE << "입니다." << endl;

			return 0;
		}
		numOfApples -= n;
		myMoney += money;

		return n;
	}
};

class AppleBuyer // 구매자 클래스
{
private:
	int numOfApples;
	int myMoney;
public:
	void ShowBuyerResult() const
	{
		cout << "구입한 사과 수 : " << numOfApples << endl;
		cout << "현재 잔액 : " << myMoney << endl;
	}

	AppleBuyer(int money)
	{
		numOfApples = 0;
		myMoney = money;
	}

	// 메세지 전달 : 객체 간의 통신은 메세지에 의해서 의사전달을 하는데, 이러한 메세지는 그 객체에 있는 메서드를 호출한다.
	void BuyApples(AppleSeller &_seller, int money)
	{

		if (money <= 0)
		{
			cout << "구매 금액은 0원 이상!!!" << endl;
			return;
		}
		if (money > myMoney)
		{
			cout << "남아있는 금액은 " << myMoney << " 입니다." << endl;
			return;
		}

		int ret = _seller.SaleApples(money);

		if (ret != 0)
		{
			numOfApples += ret;
			myMoney -= money;
		}

		//numOfApples += _seller.SaleApples(money);// 판매한 사과 개수
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