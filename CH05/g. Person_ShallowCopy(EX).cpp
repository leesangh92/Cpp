#include <iostream>
#include <vld.h>

using namespace std;

class Person
{
private:
	char* name; // 동적할당
	char* phone;
	int age;

public:

	void ShowData();

	Person(const char* _name, const char* _phone, const int _age)
	{
		name = new char[strlen(_name) + 1]; // 원본 메모리 동적할당
		strcpy(name, _name);

		phone = new char[strlen(_phone) + 1]; // 원본 메모리 동적할당
		strcpy(phone, _phone);

		age = _age; // 원본 메모리 동적할당
	}

	~Person()
	{
		cout << "~Person() : age : " << age << endl;
		delete name;
		delete phone;
	}

	Person(const Person& ref) // 복사 생성자 (깊은 복사)
	{
		name = new char[strlen(ref.name + 1)]; // 사본 메모리 동적할당
		strcpy(name, ref.name);

		phone = new char[strlen(ref.phone + 1)]; // 사본 메모리 동적할당
		strcpy(phone, ref.phone);

		age = ref.age; // 사본 메모리 동적할당
	 }

};

void Person::ShowData()
{
	cout << "name : " << name << ", phone : " << phone << ", age : " << age << endl;
}

int main()
{
	Person p1("KIM", "010-333-5555", 23);
	p1.ShowData();

	Person p2 = p1; // (얕은 복사)
	p2.ShowData();

	return 0;
}