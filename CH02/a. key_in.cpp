#include <iostream>

// using std::cout; // std namespace 선언을 생략하겠다.
using namespace std; // std에 정의된 모든 이름에 std를 생략하겠다.

int main()
{
	std::cout << "키보드로 데이터 입력" << std::endl;
	cout << "키보드로 데이터 입력" << endl;

	int wid, hei;

	cout << "너비 : ";
	cin >> wid; // >> : 입력 스트림 연산자

	cout << "높이 : ";
	cin >> hei;

	int area = wid * hei;
	cout << "면적은.. " << area << endl;



	if (cin.fail()) // 입력 실패 확인 함수
	{
		cin.clear();
		cin.ignore(100, '\n');
	}



	char ch;

	cout << "한 문자 ? : ";
	cin >> ch;
	cout << "ch : " << ch << endl;

	return 0;
}