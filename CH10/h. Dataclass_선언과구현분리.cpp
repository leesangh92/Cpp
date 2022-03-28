#include <iostream>
using namespace std;

//template <typename T>
template <class T>
class Data
{
private:
	T data;

public:
	Data(T n);
	void setData(T n);
	T getData();
};

template <typename T> // 아래의 T가 템플릿임을 알린다. 
Data<T>::Data(T n) // T 타입이 템플릿으로 정의된 Data 클래스임을 알린다. 
{
	data = n;
}

template <typename T>
void Data<T>::setData(T n)
{
	data = n;
}

template <typename T>
T Data<T>::getData()
{
	return data;
}

int main()
{
	// 클래스 템플릿은 호출 시 자료형을 생략할 수 없다. 
	Data <int>d1(100);
	d1.setData(150);
	cout << "d1.getData() : " << d1.getData() << endl;

	Data <double>d2(1.5); // int형식으로 자동 형변환
	cout << "d2.getData() : " << d2.getData() << endl;

	Data <char>d3('A'); // int형식으로 자동 형변환(ASCII 코드)
	cout << "d3.getData() : " << d3.getData() << endl;

	return 0;
}