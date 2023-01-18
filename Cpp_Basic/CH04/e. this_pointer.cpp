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
	// ��� �޼��忡 �ڽ��� ����� ����Ű�� 'this->' �� �����Ǿ��ִ�. 
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
	cout << "������ p1 : " << p1 << endl;
	cout << "p1 this ������ : " << p1->getThis() << endl << endl;

	Person* p2 = new Person();
	cout << "������ p2 : " << p2 << endl;
	cout << "p2 this ������ : " << p2->getThis() << endl << endl;

	cout << "��ü ��ȯ" << endl;
	Person p3 = p2->getThis2(); // p3�� stack ���׸�Ʈ�� �Ҵ�
	p2->ShowData();
	p3.ShowData();

	delete p1;
	delete p2;

	Person per1; // ��ü ���� stack ���׸�Ʈ
	cout << "&per1 : " << &per1 << endl;
	cout << "per1 this ������ : " << per1.getThis() << endl;

	return 0;
}