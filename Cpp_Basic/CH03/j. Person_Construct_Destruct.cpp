#include <iostream>
#include <vld.h>

using namespace std;

class Person
{
private:
	char* name; // �����Ҵ�
	char* phone;
	int age;

public:

	void ShowData();

	Person(const char* _name, const char* _phone, const int _age)
	{
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
		
		phone = new char[strlen(_phone) + 1];
		strcpy(phone, _phone);

		age = _age;
	}

	~Person()
	{
		cout << "~Person() : age : " << age << endl;
		delete name;
		delete phone;
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
}