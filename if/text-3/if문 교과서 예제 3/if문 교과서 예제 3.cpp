// if문 교과서 예제 3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int score1, score2;
	printf("1과목의 점수를 입력하세요 : ");
	scanf_s("%d", &score1);
	printf("2과목의 점수를 입력하세요 : ");
	scanf_s("%d", &score2);
	if (score1 >= 60)
	{
		if (score2 >= 60)
		{
			printf("합격\n");
		}
		else
			printf("불합격\n");
	}
	else
		printf("불합격\n");
    return 0;
}

