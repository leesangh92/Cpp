#include <iostream>
#include <cstring> // C++ 규칙 : C 헤더파일 사용 시 확장자 h 는 버리고 헤더파일명 앞에 c 를 추가한다.

using namespace std;

int main()
{
	char name[20]; // 20 byte 미만의 문자열 저장(문자열 하나 저장)
	char comAddr[50];

	cout << "성명 ? : "; //kim
	cin >> name; // 공백 출력은 하지 않는다. 
	cin.ignore(100, '\n');

	cout << "회사주소 ? : "; //SEOUL 서울시
	cin.getline(comAddr, 50); // 객체이름.메서드(함수) // 공백을 포함하는 데이터
	//cin.getline(comAddr, 50, '\n'); // 50 byte 입력 후 
	//cin.getline(comAddr, 50, '.'); // 종료 문자 '.', '.' 문자를 만날때까지 입력을 받고 출력한다. 

	cout << name << ", " << comAddr << endl;



	cout << "strupr(name) : " << strupr(name) << endl; // 모든 문자를 대문자로(toupper)
	cout << "strlwr(comAddr) : " << strlwr(comAddr) << endl; // 모든 문자를 소문자로(tolower)



	if (strcmp(name, "KIM") == 0)
		cout << "Equal." << endl;
	else
		cout << "Not Equal." << endl;



	return 0;
}