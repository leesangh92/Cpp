#include <iostream>
using namespace std;

class ExceptA
{
public:
	void What()
	{
		cout << "ExceptA 예외" << endl;
	}
};

class ExceptB
{
public:
	void What()
	{
		cout << "ExceptB 예외" << endl;
	}
};

class ExceptC
{
public:
	void What()
	{
		cout << "ExceptC 예외" << endl;
	}
};

void ExceptFunction(int ex)
{
	if (ex == 1)
		throw ExceptA();
	else if (ex == 2)
		throw ExceptB();
	else
		throw ExceptC();
}

int main()
{
	int exID;
	cout << "발생시킬 예외의 숫자 : " << endl;
	cin >> exID; // 2

	try
	{
		ExceptFunction(exID);
	}

	//입력 값에 상관 없이 모두 여기서 실행
	//상속관계에 있기 때문에 ExceptB 나 ExceptC의 예외는 ExceptA의 예외도 된다.

	catch (ExceptC& ex) // 파생클래스. 기반클래스로 참조전달(Upcasting)
	{
		cout << "catch(ExceptC& ex) 에 의한 처리" << endl;
		ex.What();
	}

	catch (ExceptB& ex)
	{
		cout << "catch(ExceptB& ex) 에 의한 처리" << endl;
		ex.What();
	}

	catch (ExceptA& ex)
	{
		cout << "catch(ExceptA& ex) 에 의한 처리" << endl;
		ex.What();
	}

	catch (...)
	{
		cout << "알 수 없는 예외 발생." << endl;
	}

	return 0;
}