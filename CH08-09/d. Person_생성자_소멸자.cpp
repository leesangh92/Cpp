#include <iostream>
#include <cstring>
using namespace std;

/*
다음과 같이 실행되는 코드를 완성하시오.

실행결과
My name is kim
My age is 10

My name is Lee
My age is 22
My major is Computer eng.

~Student() called.
~Person() called.
~Person() called.
*/

class Person
{
private:
	char* name;     // 이름
	int age;        // 나이

public:
	void ShowPerson() const
	{
		cout << "My name is " << name << endl;
		cout << "My age is " << age << endl;
	}

	Person(const char* _name, int _age)
	{
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);

		age = _age;
	}

	// 4. 기반클래스 메모리 해제
	~Person()
	{
		cout << "~Person()" << endl;
		delete[] name;
	}
};

class Student : public Person
{
private:
	char* major;     // 전공과목

public:
	void ShowStudent() const
	{
		// 2. 출력
		ShowPerson();

		cout << "My major is " << major << endl << endl;
	}

	// 1. 메모리 할당
	Student(const char *_name, int _age, const char *_major) : Person(_name, _age) // 기반클래스에서 처리되는 인자들을 불러온다.
	{
		major = new char[strlen(_major) + 1];
		strcpy(major, _major);
	}

	// 3. 파생클래스 메모리 해제
	~Student()
	{
		cout << "~Student()" << endl;
		delete[] major;
	}
};

int main()
{
	Person emp("Kim", 10);
	emp.ShowPerson();
	cout << endl;

	Student st1("Lee", 22, "Computer eng.");
	st1.ShowStudent();

	return 0;
};