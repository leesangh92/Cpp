#include <iostream>
#include <vld.h>

using namespace std;

class Person
{
private:
	int age = 0;
public:
	void ShowData()
	{
		cout << "age : " << age << endl;
	}
	// 모든 메서드에 자신의 멤버를 가리키는 'this->' 가 생략되어있다. 
	Person *getThis()
	{
		return this;
	}

	Person getThis2()
	{
		this->age = 25;

		return *this;
	}
};

int main()
{
	Person* p1 = new Person();
	cout << "포인터 p1 : " << p1 << endl;
	cout << "p1 this 포인터 : " << p1->getThis() << endl << endl;

	Person* p2 = new Person();
	cout << "포인터 p2 : " << p2 << endl;
	cout << "p2 this 포인터 : " << p2->getThis() << endl << endl;

	cout << "객체 반환" << endl;
	Person p3 = p2->getThis2(); // p3는 stack 세그먼트에 할당
	p2->ShowData();
	p3.ShowData();

	delete p1;
	delete p2;

	Person per1; // 객체 변수 stack 세그먼트
	cout << "&per1 : " << &per1 << endl;
	cout << "per1 this 포인터 : " << per1.getThis() << endl;

	return 0;
}