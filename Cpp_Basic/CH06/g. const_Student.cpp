#include <iostream>
using namespace std;

class Student
{
private:
	const int id;

	char name[20];
	char major[20];

	mutable int age; // ���ȭ�� �޼��忡���� ���� ����
public:
	Student(int _id, const char *_name, const char *_major, int _age) : id(_id)
	{
		//id = _id; // ���(���ȭ�� ���)�� �ݵ�� �ݷ��ʱ�ȭ

		strcpy(name, _name);
		strcpy(major, _major);
		age = _age;
	}

	/*void showStudentIntro() // �Ϲݸ޼���
	{
		cout << "== �л����� ��� ==" << endl;
	}*/

	void showStudentIntro() const // ���ȭ�� �޼���
	{
		cout << "== �л����� ��� ==" << endl;
	}

	void ShowData() const // ���ȭ�� �޼��忡���� ���ȭ�� �޼��常 ȣ���� �� �ִ�. 
	{
		showStudentIntro();

		age = 27; // �޼���� ���ȭ���ѵθ� �� ���� �Ұ���, mutable ���������� �����Ͽ� ������ ������.
		//strcpy(name, "AAA") // �����Ұ�, mutable ���� X
		cout << id << ", " << name << ", " << major << ", " << age << endl;
	}

	//char* getName() const // �ּҰ� ��ȯ�Ǹ� const �Ұ���
	//{
	//	return name;
	//}

	const char* getName() const// �ּҰ� ��ȯ�Ǹ� const �Ұ���
	{
		return name;
	}
};

int main()
{
	Student st1(1001, "kim", "computer", 25);
	
	st1.ShowData();

	cout << "���� : " << st1.getName() << endl;

	const char* ptrName = st1.getName();
	cout << "���� : " << ptrName << endl;

	return 0;
}