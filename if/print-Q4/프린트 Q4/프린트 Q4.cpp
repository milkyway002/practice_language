// 프린트 Q4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int m = 1000, age = 0, dis = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	if (4 < age&&age < 13)
	{
		dis = dis + 50;
		printf("최종요금 : %d\n", m*(100 - dis) / 100);
	}
	else if (14 < age&&age < 19)
	{
		dis = dis + 25;
		printf("최종요금 : %d\n", m*(100 - dis) / 100);
	}
	else if (age > 20)
	{
		dis = dis + 0;
		printf("최종요금 : %d\n", m*(100 - dis) / 100);
	}
	else
	{
		dis = dis + 100;
		printf("최종요금 : %d\n", m*(100 - dis) / 100);
	}
    return 0;
}

