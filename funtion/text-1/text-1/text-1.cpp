// text-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int f(int a, int b)
{
	if (a > b) return a;
	else return b;
}

int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d\n", f(a, b));
    return 0;
}

