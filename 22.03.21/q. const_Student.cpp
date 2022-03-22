#include <iostream>
using namespace std;

class Student
{
private:
	const int id;

	char name[20];
	char major[20];

	mutable int age; // 상수화된 메서드에서도 수정 가능
public:
	Student(int _id, const char *_name, const char *_major, int _age) : id(_id)
	{
		//id = _id; // 상수(상수화된 멤버)는 반드시 콜론초기화

		strcpy(name, _name);
		strcpy(major, _major);
		age = _age;
	}

	/*void showStudentIntro() // 일반메서드
	{
		cout << "== 학생정보 출력 ==" << endl;
	}*/

	void showStudentIntro() const // 상수화된 메서드
	{
		cout << "== 학생정보 출력 ==" << endl;
	}

	void ShowData() const // 상수화된 메서드에서는 상수화된 메서드만 호출할 수 있다. 
	{
		showStudentIntro();

		age = 27; // 메서드는 상수화시켜두면 값 변경 불가능, mutable 변수명으로 선언하여 변경이 가능함.
		//strcpy(name, "AAA") // 수정불가, mutable 선언 X
		cout << id << ", " << name << ", " << major << ", " << age << endl;
	}

	//char* getName() const // 주소가 반환되면 const 불가능
	//{
	//	return name;
	//}

	const char* getName() const// 주소가 반환되면 const 불가능
	{
		return name;
	}
};

int main()
{
	Student st1(1001, "kim", "computer", 25);
	
	st1.ShowData();

	cout << "성명 : " << st1.getName() << endl;

	const char* ptrName = st1.getName();
	cout << "성명 : " << ptrName << endl;

	return 0;
}
