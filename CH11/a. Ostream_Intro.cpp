//입, 출력 시스템(IStream, OStream)
//OStream을 이해하기 위해 cout 객체를 구현
// << : 출력스트림 연산자

#include <cstdio>
//using namespace std;

namespace myStd
{
	const char* endl = "\n";

	class ostream
	{
	public:
		ostream& operator << (const char* str)
		{
			printf("%s", str);
			return *this;
		}

		ostream& operator << (int i)
		{
			printf("%d", i);
			return *this;
		}

		ostream& operator << (double n)
		{
			printf("%lf", n);
			return *this;
		}
	};

	ostream cout; // ostream 객체 cout 생성
}

//using namespace myStd;

int main()
{
	myStd::cout << "hello world";
	myStd::cout << myStd::endl;
	myStd::cout << 3.14159;
	myStd::cout << myStd::endl;
	myStd::cout << 100;
	myStd::cout << myStd::endl;

	//return *this; 
	myStd::cout << "hello world" << myStd::endl;
	myStd::cout << 3.14159 << ", " << 500 << myStd::endl;

	return 0;
}
