// 예제2-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a, b, c, max, midde, small;
	printf("세 개의 정수 입력 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (b > c)
		{
			printf("큰 수부터 출력 : %d %d %d\n", a, b, c);
		}
		else
			printf("큰 수부터 출력 : %d %d %d\n", a, c, b);
	}
	
	if (b > c)
	{
		if (c > a)
		{
			printf("큰 수부터 출력 : %d %d %d\n", b, c, a);
		}
		else
			printf("큰 수부터 출력: %d %d %d\n", b, a, c);
	}

	if (c > a)
	{
		if (a > b)
		{
			printf("큰 수부터 출력 : %d %d %d\n", c, a, b);
		}
		else
			printf("큰 수부터 출력: %d %d %d\n", c, b, a);
	}
	return 0;
}

