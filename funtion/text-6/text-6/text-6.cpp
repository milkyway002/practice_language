// text-6.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int f(int n)
{
	if (n > 0)
	{
		f(n - 1);
		printf("*");
	}
}

int main()
{
	int n;
	scanf_s("%d", &n);
	f(n);
    return 0;
}

