// if문 교과서 예제 2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int score, pass;
	printf("당신의 점수를 입력하세요.");
	scanf_s("%d", &score);
	printf("합격점을 입력하세요.");
	scanf_s("%d", &pass);
	if (score >= pass)
	{
		printf("합격\n");
	}
	else
	{
		printf("불합격\n");
	}
    return 0;
}

