// 프린트 Q2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a, b, c;
	printf("세 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (a > c)
		{
			printf("제일 큰 수 : %d\n", a);
		}
		else
			printf("제일 큰 수 : %d\n", c);
	}
	else if (b > c)
	{
		printf("제일 큰 수 : %d\n", b);
	}
	else
		printf("제일 큰 수 : %d\n", c);
    return 0;
}

