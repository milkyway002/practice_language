// text-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int f(int n)
{
	if (n == 1)
		return 1;
	else
		return f(n - 1) * n;
}

int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d\n", f(n));
    return 0;
}

