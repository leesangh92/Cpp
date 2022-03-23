#include <iostream>
#include <cstring>
using namespace std;

/*
������ ���� ����Ǵ� �ڵ带 �ϼ��Ͻÿ�.

������
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
	char* name;     // �̸�
	int age;        // ����

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

	// 4. ���Ŭ���� �޸� ����
	~Person()
	{
		cout << "~Person()" << endl;
		delete[] name;
	}
};

class Student : public Person
{
private:
	char* major;     // ��������

public:
	void ShowStudent() const
	{
		// 2. ���
		ShowPerson();

		cout << "My major is " << major << endl << endl;
	}

	// 1. �޸� �Ҵ�
	Student(const char *_name, int _age, const char *_major) : Person(_name, _age) // ���Ŭ�������� ó���Ǵ� ���ڵ��� �ҷ��´�.
	{
		major = new char[strlen(_major) + 1];
		strcpy(major, _major);
	}

	// 3. �Ļ�Ŭ���� �޸� ����
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