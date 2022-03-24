#include <iostream>
using namespace std;

class AAA
{
public:
	void string1()
	{
		cout << "AAA : string1() \n";
	}
};

//string1, string2
class BBB : virtual public AAA
{ // virtual ��� : �Ļ�Ŭ�������� ���Ŭ������ virtual ��ӹ����� �����Ϸ��� ���Ŭ���� ������ �� ���� �Ҵ��ϰ�, 
  //�Ļ�Ŭ������ �Ҵ�� ������ �����ϵ��� �����Ѵ�. 

public:
	void string2()
	{
		cout << "BBB : string2() \n";
	}
};

//string1, string3
class CCC : virtual public AAA
{
public:
	void string3()
	{
		cout << "CCC : string3() \n";
	}
};

//string1, string2, string1, string3, showString // string1�� �ߺ�
class DDD : public BBB, public CCC
{
public:
	void showString()
	{
		cout << "DDD : showString() \n";
	}
};

int main()
{
	DDD d1;

	d1.string2();
	d1.string3();
	d1.showString();
	
	//d1.string(); // ��ȣ��
	//d1.AAA::string1();
	//d1.BBB::string1();

	d1.string1(); // virtual ���

	return 0;
}