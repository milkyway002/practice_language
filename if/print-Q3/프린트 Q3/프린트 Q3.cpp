// 프린트 Q3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int age = 0, m = 1000, dis = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	if (age < 20)
	{
		dis = dis + 25;
		printf("최종요금 : %d\n", m*(100 - dis) / 100);
	}
	else
	{
		printf("최종요금 : %d\n", m);
	}
    return 0;
}

