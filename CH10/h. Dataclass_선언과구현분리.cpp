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

template <typename T> // �Ʒ��� T�� ���ø����� �˸���. 
Data<T>::Data(T n) // T Ÿ���� ���ø����� ���ǵ� Data Ŭ�������� �˸���. 
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
	// Ŭ���� ���ø��� ȣ�� �� �ڷ����� ������ �� ����. 
	Data <int>d1(100);
	d1.setData(150);
	cout << "d1.getData() : " << d1.getData() << endl;

	Data <double>d2(1.5); // int�������� �ڵ� ����ȯ
	cout << "d2.getData() : " << d2.getData() << endl;

	Data <char>d3('A'); // int�������� �ڵ� ����ȯ(ASCII �ڵ�)
	cout << "d3.getData() : " << d3.getData() << endl;

	return 0;
}