#include <iostream>
#include <cstring>
using namespace std;

class Book // 책을 표현하는 클래스
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

	friend ostream& operator<<(ostream& os, Book& ref); // private 멤버에 접근을 허용
};

ostream& operator<<(ostream& os, Book& ref)
{
	os << ref.title << ", " << ref.press << ", " << ref.author << endl;
	return os;
}

int main()
{
	Book book("든든한 C 프로그래밍", "연두에디션", "김원선"); // book 객체 생성

	//operator<<(cout, book)
	cout << book << endl; // book 객체 book 화면 출력

	return 0;
}