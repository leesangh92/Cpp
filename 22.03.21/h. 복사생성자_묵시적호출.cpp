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
	// ��ü�� ���ڷ� ������ ���� �����ڰ� ����� ���� �ƴ϶� ���� �����ڷ� ����ȴ�. 
	SoSimple(const SoSimple& ref) // ����� ���� ���� ������
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

	// ���� �����ڰ� ȣ��Ǵ� ���
	
	// 1. ��ü�� ������ ���ÿ� ��ü �ʱ�ȭ�� ��
	SoSimple obj2(obj);

	obj2.showData();

	cout << "========================================" << endl;

	// 2. ��ü�� �Լ��� ���ڷ� ���޵� ��
	obj.Simple1(obj2);

	cout << "========================================" << endl;

	// 3. ��ü�� ��ȯ�� �� 
	SoSimple obj3 = obj.Simple2();

	obj3.showData();

	cout << "========================================" << endl;

	obj.AddSudang(200000).showData(); // this�� �ڽ��� �����߱� ������ �ڿ� .showData()�� �����͸� �ҷ��� �� �ִ�. 

	/*obj.showData();*/

	return 0;
}