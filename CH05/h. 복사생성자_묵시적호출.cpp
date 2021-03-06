#include <iostream>

using namespace std;

class SoSimple
{
private:
	int salary;
public:

	SoSimple(int sal)
	{
		salary = sal;
	}
	// 객체가 인자로 생성될 때는 생성자가 생기는 것이 아니라 복사 생성자로 복사된다. 
	SoSimple(const SoSimple& ref) // 사용자 정의 복사 생성자
	{
		salary = ref.salary;
		cout << "SoSimple(const SoSimple& ref) : " << salary << endl;
	}

	void Simple1(SoSimple tmp)
	{
		cout << "Simple1(SoSimple tmp)" << endl;
	}

	SoSimple Simple2()
	{
		SoSimple tmp(3500000);
		return tmp;
	}

	/*void AddSudang(int sudang)
	{
		salary += sudang;
	}*/

	SoSimple &AddSudang(int sudang)
	{
		salary += sudang;
		return *this;
	}

	void showData()
	{
		cout << "salary : " << salary << endl;
	}
};

int main()
{
	SoSimple obj(2700000);

	// 복사 생성자가 호출되는 경우
	
	// 1. 객체가 생성과 동시에 객체 초기화될 때
	SoSimple obj2(obj);

	obj2.showData();

	cout << "========================================" << endl;

	// 2. 객체가 함수의 인자로 전달될 때
	obj.Simple1(obj2);

	cout << "========================================" << endl;

	// 3. 객체가 반환될 때 
	SoSimple obj3 = obj.Simple2();

	obj3.showData();

	cout << "========================================" << endl;

	obj.AddSudang(200000).showData(); // this로 자신을 리턴했기 때문에 뒤에 .showData()로 데이터를 불러올 수 있다. 

	/*obj.showData();*/

	return 0;
}