// if문2-Q4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int weight, heigt, biman;
	printf("키와 몸무게를 입력하세요 : ");
	scanf_s("%d %d", &heigt, &weight);
	if (weight + 100 - heigt> 0)
	{
		printf("비만수치는 %d 입니다.\n당신은 비만입니다.\n", weight + 100 - heigt);
	}
    return 0;
}

