// 프린트 Q1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int d = 0, m = 2000, age = 0, n = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	printf("회원 여부를 입력하세요 (1은 회원, 0은 비회원) : ");
	scanf_s("%d", &n);
	if (n == 1)
	{
		d = d + 10;
		if (age > 60)
		{
			d = d + 30;
		}
		else if (age < 7)
		{
			d = d + 20;
		}
		printf("요금은 %d원 입니다.\n", m*(100 - d) / 100);
	}
	else if (n == 0)
	{
		if (age > 60)
		{
			d = d + 30;
		}
		else if (age < 7)
		{
			d = d + 20;
		}
		printf("요금은 %d원 입니다.\n", m*(100 - d) / 100);
	}
	else
	{
		printf("잘못된 입력값입니다.\n\a");
	}
    return 0;
}

