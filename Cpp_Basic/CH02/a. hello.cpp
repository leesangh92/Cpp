#include <iostream> // 입, 출력 등 다양한 메서드를 포함하는 객체지향 라이브러리를 제공하는 헤더파일

int main()
{
	int num = 100;

	// std : iostream에 선언된 객체들이 std라는 namespace에 정의되어 있다. std에 있는 cout, endl을 사용하겠다.

	// << : 출력 스트림 연산자
	std::cout << "hello world" << std::endl;
	std::cout << "INFINITT";
	std::cout << " healthcare" << std::endl;
	std::cout << "num : " << num << std::endl;
	std::cout << 'A' << ", " << 3.14 << std::endl;

	return 0;
}