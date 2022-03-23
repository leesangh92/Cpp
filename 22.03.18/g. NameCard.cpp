/*
������ ������ �ǹ��ϴ� NameCard Ŭ�����̴�. �� Ŭ�������� ����,ȸ���̸�,��ȭ��ȣ,������ ����ȴ�.
������ ������ ������ ����� ���ڿ� �����̸�, ���ڿ������ �����Ҵ��� �ޱ�� �Ѵ�.
������ �������� �����Ѵ�. enum���𿡼� ������ ������ ������� ���,����,�븮,������ ���Ѵ�.

main() �Լ��� �����Ͽ� ������ �������� ����϶�.

������
�̸�: Lee
ȸ��: ABCEng
��ȭ��ȣ: 010-1111-2222
����: ���

�̸�: Hong
ȸ��: OrangeEng
��ȭ��ȣ: 010-3333-4444
����: ����

�̸�: Kim
ȸ��: SoGoodCompa
��ȭ��ȣ: 010-5555-6666
����: �븮

�Ҹ��� ȣ�⿡�� �����޸� ��� ���� ��~~
�Ҹ��� ȣ�⿡�� �����޸� ��� ���� ��~~
�Ҹ��� ȣ�⿡�� �����޸� ��� ���� ��~~
*/

#include <iostream>
#include <cstring>
#include <vld.h> // ���� �޸� �Ҵ� ��� �ÿ��� Ȯ���ؼ� �޸� ������ �߻��ߴ��� Ȯ������
using namespace std;

namespace COMP_POS
{
	enum {CLERK, SENIOR, ASSIST, MANAGER};

	void ShowPositionInfo(int pos)
	{
		switch(pos)
		{
		case CLERK:
			cout<<"���"<<endl;
			break;
		case SENIOR:
			cout<<"����"<<endl;
			break;
		case ASSIST:
			cout<<"�븮"<<endl;
			break;
		case MANAGER:
			cout<<"����"<<endl;
		}
	}
}

class NameCard
{
private:
	char * name;
	char * company;
	char * phone; // ������ ������ �����Ҵ�
	int position;
public:
	NameCard(const char *_name, const char *_company, const char *_phone, int _pos) : position(_pos) // �ݷ� �ʱ�ȭ
	{
		//�߰�
		name = new char[strlen(_name) + 1]; // NULL ���� ����� ��� +1
		strcpy(name, _name);

		company = new char[strlen(_company) + 1]; // NULL ���� ����� ��� +1
		strcpy(company, _company);

		phone = new char[strlen(_phone) + 1]; // NULL ���� ����� ��� +1
		strcpy(phone, _phone);
	}
	void ShowNameCardInfo()
	{
		//�߰�
		cout << "�̸� : " << this->name << endl;
		cout << "ȸ�� : " << company << endl;
		cout << "��ȭ��ȣ : " << phone << endl;
		cout << "���� : " ; 
		COMP_POS::ShowPositionInfo(position);
		cout << endl;
	}
	~NameCard()
	{
		//�߰�
		cout << "���� �޸� ����" << endl;
		delete[] name;
		delete[] company;
		delete[] phone;
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSenior("Hong", "Multi.Eng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "Samsung.Com", "010-5555-6666", COMP_POS::ASSIST);

	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}
