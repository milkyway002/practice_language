// if문 교과서 예제 4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int score;
	printf("과목의 점수를 입력하세요 : ");
	scanf_s("%d", &score);
	if (score >= 90) printf("A\n");
	else if (score >= 80) printf("B\n");
	else if (score >= 70) printf("C\n");
	else if (score >= 60) printf("D\n");
	else printf("E\n");
    return 0;
}

