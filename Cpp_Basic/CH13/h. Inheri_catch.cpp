#include <iostream>
using namespace std;

class ExceptA
{
public:
	void What()
	{
		cout << "ExceptA ����" << endl;
	}
};

class ExceptB
{
public:
	void What()
	{
		cout << "ExceptB ����" << endl;
	}
};

class ExceptC
{
public:
	void What()
	{
		cout << "ExceptC ����" << endl;
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
	cout << "�߻���ų ������ ���� : " << endl;
	cin >> exID; // 2

	try
	{
		ExceptFunction(exID);
	}

	//�Է� ���� ��� ���� ��� ���⼭ ����
	//��Ӱ��迡 �ֱ� ������ ExceptB �� ExceptC�� ���ܴ� ExceptA�� ���ܵ� �ȴ�.

	catch (ExceptC& ex) // �Ļ�Ŭ����. ���Ŭ������ ��������(Upcasting)
	{
		cout << "catch(ExceptC& ex) �� ���� ó��" << endl;
		ex.What();
	}

	catch (ExceptB& ex)
	{
		cout << "catch(ExceptB& ex) �� ���� ó��" << endl;
		ex.What();
	}

	catch (ExceptA& ex)
	{
		cout << "catch(ExceptA& ex) �� ���� ó��" << endl;
		ex.What();
	}

	catch (...)
	{
		cout << "�� �� ���� ���� �߻�." << endl;
	}

	return 0;
}