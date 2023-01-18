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

	// ���Ŭ���� �����ʹ� �Ļ�Ŭ���� �����͵� ������ �� �ִ�.(Upcast) => ���⼺

	Person* p1 = new Person();
	Person* p2 = new Student(); // Upcast
	Person* p3 = new PartTimeStd(); // Upcast

	Student* p4 = new Student();
	Student* p5 = new PartTimeStd();

	PartTimeStd* p6 = new PartTimeStd();

	// ���Ŭ������ ��ü �����ʹ� ����Ű�� ��� ������� ���Ŭ���� ���� ����� ������� ���� ����.
	p1->Sleep();
	p2->Sleep();
	//p2->Study(); // Error // ����� �޾����� ��ü �����Ͱ� ���Ŭ���� Ÿ���̹Ƿ� ������ �Ұ���.
	p3->Sleep();
	//p3.PartTimeStd()::Work(); // Error // ����� �޾����� ��ü �����Ͱ� ���Ŭ���� Ÿ���̹Ƿ� ������ �Ұ���.

	Student* s1 = new PartTimeStd();
	s1->Sleep();
	s1->Study();
	//s1->Work(); // Error

	cout << "====================" << endl;

	// �Ļ�Ŭ���� ��ü �����ʹ� ���Ŭ���� �ּҸ� ������ �� ����.(Downcast)
	//PartTimeStd *pt1 = new Person();
	//PartTimeStd *pt1 = p1;

	//PartTimeStd* pt1 = (PartTimeStd*)p1; // C Style ����� ����ȯ // ������ �����ϰ� �� ���� ������ ��������� �ʴ´�.
	PartTimeStd* pt1 = (static_cast<PartTimeStd*>(p1)); // C++ Style ����� ����ȯ
	pt1->Sleep();
	pt1->Study();
	pt1->Work();

	return 0;
}