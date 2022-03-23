#include<iostream>
using namespace std;

const int SIZE = 20;

class Person
{
private:
	char *name;
	char *phone;
	int age = 0;
public:
	void ShowData();

	// 2. ������ �ۼ�
	Person(const char* _name, const char* _phone, int _age)
	{
		cout <<"Person(const char* _name, const char* _phone, int _age)"<< endl;

		name = new char[strlen(_name) + 1];
		strcpy(name, _name);

		phone = new char[strlen(_phone) + 1];
		strcpy(phone, _phone);

		age = _age;
	}

	// 3. ���� ���縦 ���� ����� ���� ���� ������ �߰�
	Person(const Person &ref)
	{
		cout << "Person(const Person &ref)" << endl;

		name = new char[strlen(ref.name) + 1];
		strcpy(name, ref.name);

		phone = new char[strlen(ref.phone) + 1];
		strcpy(phone, ref.phone);

		age = ref.age;
	}

	~Person()
	{
		cout << "~Person() " << endl;

		delete name;
		delete phone;
	}
};

void Person::ShowData()
{
	cout << "name: " << name << ", phone: " << phone << ", age: " << age << endl;
}

int main()
{
// 1. �����ڸ� �̿��� ����ʱ�ȭ
	Person  p1("KIM", "010-333-5555", 22); 
	p1.ShowData();

	Person p2 = p1; // ���� ����
	p2.ShowData();

	return 0;
}
/*
Person(const char* _name, const char* _phone, int _age)
name: KIM, phone: 010-333-5555, age: 22
name: KIM, phone: 010-333-5555, age: 22
~Person()
~Person()
*/