#include <iostream>

// using std::cout; // std namespace ������ �����ϰڴ�.
using namespace std; // std�� ���ǵ� ��� �̸��� std�� �����ϰڴ�.

int main()
{
	std::cout << "Ű����� ������ �Է�" << std::endl;
	cout << "Ű����� ������ �Է�" << endl;

	int wid, hei;

	cout << "�ʺ� : ";
	cin >> wid; // >> : �Է� ��Ʈ�� ������

	cout << "���� : ";
	cin >> hei;

	int area = wid * hei;
	cout << "������.. " << area << endl;



	if (cin.fail()) // �Է� ���� Ȯ�� �Լ�
	{
		cin.clear();
		cin.ignore(100, '\n');
	}



	char ch;

	cout << "�� ���� ? : ";
	cin >> ch;
	cout << "ch : " << ch << endl;

	return 0;
}