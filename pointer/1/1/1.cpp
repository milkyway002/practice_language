// 1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int 으어거억겅어ㅓ어억;
	int a;
	int *p = &a;
	scanf_s("%d", &a);
	printf("a=%d, *p=%d\n", a, *p);
	scanf_s("%d", p);
	printf("a=%d, *p=%d\n", a, *p);
	a = a + 5;
	printf("a=%d, *p=%d\n", a, *p);
	*p = *p * 2;
	printf("a=%d, *p=%d\n", a, *p);
	(*p)--;
	printf("a=%d, *p=%d\n", a, *p);
    return 0;
}

