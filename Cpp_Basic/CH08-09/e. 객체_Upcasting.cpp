#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
	void Sleep()
	{
		cout << "Sleep()" << endl;
	}
};

class Student : public Person
{
public:
	void Study()
	{
		cout << "Study()" << endl;
	}
};

class PartTimeStd : public Student
{
private:
	int ptNum;

public:
	PartTimeStd() : ptNum(100)
	{}

	void Work()
	{
		cout << "Work() : " << ptNum << endl;
	}
};

int main()
{
	Person t1;
	Student t2;
	PartTimeStd t3;

	t1.Sleep();

	t2.Sleep();
	t2.Study();

	t3.Sleep();
	t3.Study();
	t3.Work();

	cout << "====================" << endl;

	// 기반클래스 포인터는 파생클래스 포인터도 저장할 수 있다.(Upcast) => 다향성

	Person* p1 = new Person();
	Person* p2 = new Student(); // Upcast
	Person* p3 = new PartTimeStd(); // Upcast

	Student* p4 = new Student();
	Student* p5 = new PartTimeStd();

	PartTimeStd* p6 = new PartTimeStd();

	// 기반클래스의 객체 포인터는 가르키는 대상에 상관없이 기반클래스 내에 선언된 멤버에만 접근 가능.
	p1->Sleep();
	p2->Sleep();
	//p2->Study(); // Error // 상속은 받았지만 객체 포인터가 기반클래스 타입이므로 접근이 불가능.
	p3->Sleep();
	//p3.PartTimeStd()::Work(); // Error // 상속은 받았지만 객체 포인터가 기반클래스 타입이므로 접근이 불가능.

	Student* s1 = new PartTimeStd();
	s1->Sleep();
	s1->Study();
	//s1->Work(); // Error

	cout << "====================" << endl;

	// 파생클래스 객체 포인터는 기반클래스 주소를 저장할 수 없다.(Downcast)
	//PartTimeStd *pt1 = new Person();
	//PartTimeStd *pt1 = p1;

	//PartTimeStd* pt1 = (PartTimeStd*)p1; // C Style 명시적 형변환 // 억지로 가능하게 할 수는 있지만 사용하지는 않는다.
	PartTimeStd* pt1 = (static_cast<PartTimeStd*>(p1)); // C++ Style 명시적 형변환
	pt1->Sleep();
	pt1->Study();
	pt1->Work();

	return 0;
}