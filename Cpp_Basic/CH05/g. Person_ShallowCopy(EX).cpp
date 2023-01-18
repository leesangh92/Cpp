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
		name = new char[strlen(_name) + 1]; // ���� �޸� �����Ҵ�
		strcpy(name, _name);

		phone = new char[strlen(_phone) + 1]; // ���� �޸� �����Ҵ�
		strcpy(phone, _phone);

		age = _age; // ���� �޸� �����Ҵ�
	}

	~Person()
	{
		cout << "~Person() : age : " << age << endl;
		delete name;
		delete phone;
	}

	Person(const Person& ref) // ���� ������ (���� ����)
	{
		name = new char[strlen(ref.name + 1)]; // �纻 �޸� �����Ҵ�
		strcpy(name, ref.name);

		phone = new char[strlen(ref.phone + 1)]; // �纻 �޸� �����Ҵ�
		strcpy(phone, ref.phone);

		age = ref.age; // �纻 �޸� �����Ҵ�
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

	Person p2 = p1; // (���� ����)
	p2.ShowData();

	return 0;
}