#include <iostream>

using namespace std;

/*
������ �Է¹޾� �������, �������� ����Ѵ�.
�Ǵ��� IsPositive() ���� Ȯ���Ͽ� ����� main()���� ����Ѵ�.
*/

bool IsPositive(int N)
{
	if (N >= 0)
		return true;
	else
		return false;
}

int main()
{
	int N;

	cout << "���� ? : ";
	cin >> N;

	cout << (IsPositive(N) == true ? "Positive." : "Negative.") << endl;

	return 0;
}