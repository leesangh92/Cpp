#include <cstdio>

namespace mtStd
{
	class istream
	{
	public:
		istream& operator>>(char* str)
		{
			gets_s(str, 30);
			return *this;
		}

		istream& operator>>(char& ch)
		{
			scanf("%c%*c", &ch);
			return *this;
		}

		istream& operator>>(int& num)
		{
			scanf("%d%*c", &num);
			return *this;
		}

		istream& operator>>(double& dnum)
		{
			scanf("%lf%*c", &dnum);
			return *this;
		}

	};

	istream cin; // cin 객체 생성
}

using namespace mtStd;

int main()
{
	char msg[30], Ch;
	int Num;
	double Dnum;

	printf("input char ? ");
	cin >> Ch;

	printf("input string ? ");
	cin >> msg;

	printf("input int ? ");
	cin >> Num;

	printf("input double ? ");
	cin >> Dnum;

	printf("%c, %s, %d, %lf \n", Ch, msg, Num, Dnum);

	printf("==================== \n");

	printf("문자, 정수, 문자열 입력 ? ");
	cin >> Ch >> Num >> msg;
	printf("%c, %d, %s", Ch, Num, msg);

	return 0;
}