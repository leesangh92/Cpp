#include <iostream>

using namespace std;

/*
점수를 입력받아 양수인지, 음수인지 출력한다.
판단은 IsPositive() 에서 확인하여 결과는 main()에서 출력한다.
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

	cout << "정수 ? : ";
	cin >> N;

	cout << (IsPositive(N) == true ? "Positive." : "Negative.") << endl;

	return 0;
}