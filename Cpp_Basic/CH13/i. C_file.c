#include <stdio.h>

void Func(const char* msg)
{
	printf("msg : %s \n", msg);
	printf("C Func() 함수 호출. \n");
}

char* getName()
{
	static char name[20] = "Hong gil dong";
	return name;
}