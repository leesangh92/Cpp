#include <iostream>

using namespace std;

int main()
{
	int salary = 3800000;

	   //�����ڸ�   //������ ����
	int& r_salary = salary; // ������ : ���𹮿��� �ڷ����� &�� ����
	cout << salary << ", " << r_salary << endl;

	r_salary += 200000;
	cout << salary << ", " << r_salary << endl;
	cout << &salary << ", " << &r_salary << endl;

	int* p1 = &salary;
	cout << *p1 << ", " << &p1 << ", " << p1 << endl;

	//int& n1; // �����ڴ� �ݵ�� ����� ���ÿ� �ʱ�ȭ�ؾ��Ѵ�.
	//int& n2 = 100;// �����ڴ� lvalue(�̸��� �ο��� ����. ex)����)�� �����Ѵ�. 
	const int& n3 = 100; // ����� ������ �� �ִ�.

	return 0;
}