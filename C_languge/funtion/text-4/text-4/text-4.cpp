// text-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void f(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	f(&a, &b);
	printf("%d %d\n", a, b);
    return 0;
}

