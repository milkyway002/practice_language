// text-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int f(int a, int b)
{
	if (a > b) return a;
	else return b;
}

int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d\n", f(a, f(b, c)));
    return 0;
}

