// 교과서 예제 5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int score1, score2, score3;
	printf("세 점수를 공백으로 분리해서 입력하세요 : ");
	scanf_s("%d %d %d", &score1, &score2, &score3);
	if (score1 >= score2 && score2 >= score1)
		printf("%d\n", score1);
	else if (score2 >= score1 && score2 >= score3)
		printf("%d\n", score2);
	else
		printf("%d\n", score3);
	return 0;
}

