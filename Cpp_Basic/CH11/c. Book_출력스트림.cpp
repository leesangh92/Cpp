#include <iostream>
#include <cstring>
using namespace std;

class Book // å�� ǥ���ϴ� Ŭ����
{
	string title;
	string press;
	string author;

public:
	Book(string _title, string _press, string _author)
	{
		title = _title;
		press = _press;
		author = _author;
	}

	friend ostream& operator<<(ostream& os, Book& ref); // private ����� ������ ���
};

ostream& operator<<(ostream& os, Book& ref)
{
	os << ref.title << ", " << ref.press << ", " << ref.author << endl;
	return os;
}

int main()
{
	Book book("����� C ���α׷���", "���ο����", "�����"); // book ��ü ����

	//operator<<(cout, book)
	cout << book << endl; // book ��ü book ȭ�� ���

	return 0;
}