#include<iostream>
#include<cstring>
#include<vld.h>
using namespace std;


//�����ڸ� �ۼ��Ͽ� ������ ����Ͻÿ�.
/*
name: , phone: , age: 0
name: KIM, phone: 010-333-5555, age: 22
name: LEE, phone: 010-111-1234, age: 37
*/

const int SIZE = 20;

class Person
{
private:
	char name[SIZE] = "";
	char phone[SIZE] = "";
	int age = 0; //�ʱ�ȭ 
public:

	void ShowData();

	Person() : Person("", "", 0) //�̿� ������ �θ��� 
	{
		/*
		strcpy(name, "");
		strcpy(phone, "");
		age = 0;
		*/
	}

	~Person()
	{
		cout << "~person() :age :" << age << endl;
	}
	Person(const char* _name, const char* _phone, int _age)
	{
		strcpy(name, _name);
		strcpy(phone, _phone);
		age = _age;

	}
};

void Person::ShowData()
{
	cout << "name: " << name << ", phone: " << phone << ", age: " << age << endl;
}

int main()
{
	//Person p1;
    //p1.ShowData(); //������ ���

	Person p2("KIM", "010-333-5555", 22);
	p2.ShowData();

	Person p3 = Person("LEE", "010-111-1234", 37);
	p3.ShowData();

	Person* p4 = new Person();
	p4->ShowData(); //-> �� �ּҸ� �θ���. 

	Person* p5 = new Person("HAN", "010-111-5674", 28);
	p5->ShowData(); // 

	delete p4;
	delete p5;
	//new�� �Ҵ�� �޸𸮴� delete �� ���� �ؾ� �Ѵ�. 
	return 0;
}