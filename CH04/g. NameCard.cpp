/*
다음은 명함을 의미하는 NameCard 클래스이다. 이 클래스에는 성명,회사이름,전화번호,직급이 저장된다.
직급을 제외한 나머지 멤버는 문자열 형태이며, 문자열멥버는 동적할당을 받기로 한다.
직급은 나열형을 제공한다. enum선언에서 나열된 정보는 순서대로 사원,주임,대리,과장을 뜻한다.

main() 함수를 참고하여 다음의 실행결과를 출력하라.

실행결과
이름: Lee
회사: ABCEng
전화번호: 010-1111-2222
직급: 사원

이름: Hong
회사: OrangeEng
전화번호: 010-3333-4444
직급: 주임

이름: Kim
회사: SoGoodCompa
전화번호: 010-5555-6666
직급: 대리

소멸자 호출에서 동적메모리 멤버 해제 됨~~
소멸자 호출에서 동적메모리 멤버 해제 됨~~
소멸자 호출에서 동적메모리 멤버 해제 됨~~
*/

#include <iostream>
#include <cstring>
#include <vld.h> // 동적 메모리 할당 사용 시에는 확인해서 메모리 누수가 발생했는지 확인하자
using namespace std;

namespace COMP_POS
{
	enum {CLERK, SENIOR, ASSIST, MANAGER};

	void ShowPositionInfo(int pos)
	{
		switch(pos)
		{
		case CLERK:
			cout<<"사원"<<endl;
			break;
		case SENIOR:
			cout<<"주임"<<endl;
			break;
		case ASSIST:
			cout<<"대리"<<endl;
			break;
		case MANAGER:
			cout<<"과장"<<endl;
		}
	}
}

class NameCard
{
private:
	char * name;
	char * company;
	char * phone; // 포인터 변수는 동적할당
	int position;
public:
	NameCard(const char *_name, const char *_company, const char *_phone, int _pos) : position(_pos) // 콜론 초기화
	{
		//추가
		name = new char[strlen(_name) + 1]; // NULL 값이 저장될 장소 +1
		strcpy(name, _name);

		company = new char[strlen(_company) + 1]; // NULL 값이 저장될 장소 +1
		strcpy(company, _company);

		phone = new char[strlen(_phone) + 1]; // NULL 값이 저장될 장소 +1
		strcpy(phone, _phone);
	}
	void ShowNameCardInfo()
	{
		//추가
		cout << "이름 : " << this->name << endl;
		cout << "회사 : " << company << endl;
		cout << "전화번호 : " << phone << endl;
		cout << "직급 : " ; 
		COMP_POS::ShowPositionInfo(position);
		cout << endl;
	}
	~NameCard()
	{
		//추가
		cout << "동적 메모리 해제" << endl;
		delete[] name;
		delete[] company;
		delete[] phone;
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSenior("Hong", "Multi.Eng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "Samsung.Com", "010-5555-6666", COMP_POS::ASSIST);

	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}
