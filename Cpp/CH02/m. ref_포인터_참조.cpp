#include <iostream>

using namespace std;

int main()
{
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr; // ���� ������ ����
	int**(&dpref) = dptr; // ���� ������ ����

	cout << "num : " << num << ", ref : " << ref << endl;
	cout << "*ptr : " << *ptr << ", *pref : " << *pref << endl;
	cout << "**dptr : " << **dptr << ", **dpref : " << **dpref << endl;

	//char* str = "kingdom"; // ����
	const char* str = "kingdom"; // "kingdom"�� ���ڿ� ����� ������ �Ұ����ϴٴ� ���� const�� ����Ѵ�. 
	const char* (&strRef) = str;
	cout << "str : " << str << ", strRef : " << strRef << endl;

	return 0;
}