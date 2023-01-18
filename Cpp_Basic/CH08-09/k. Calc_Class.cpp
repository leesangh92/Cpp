#include <iostream>
using namespace std;

class Calculator
{
private:
	void input()
	{
		cout << "���� 2 ���� �Է��ϼ���>> ";
		cin >> a >> b;
	}
protected:
	int a, b;

public:
	Calculator(int a = 1, int b = 1)
	{	}

	virtual int calc(int _a, int _b) = 0; // ���� �����Լ�

	void run()
	{
		input();
		cout << "���� ���� " << calc(a, b) << endl;
	}
};

class Adder : public Calculator
{
public:
	virtual int calc(int a, int b)
	{
		return a + b;
	}
};

class Subtractor : public Calculator
{
public:
	virtual int calc(int a, int b)
	{
		return a - b;
	}
};

class Multiply : public Calculator
{
public:
	virtual int calc(int a, int b)
	{
		return a * b;
	}
};

class Divide : public Calculator
{
public:
	virtual int calc(int a, int b)
	{
		return a / b;
	}
};

int main()
{
	Adder adder;
	adder.run();

	cout << "====================" << endl;
	
	Subtractor subtractor;
	subtractor.run();

	cout << "====================" << endl;

	Multiply multiply;
	multiply.run();

	cout << "====================" << endl;
	
	Divide divide;
	divide.run();

	return 0;
}