// text2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int score[5];
	int i, sum = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d번 학생의 프로그래밍 성적을 입력하시오. : ", i + 1);
		scanf_s("%d", &score[i]);
	}
	for (i = 0; i < 5; i++)
		sum += score[i];
	printf("합계 : %d\n", sum);
	printf("평균 : %.2lf\n", (double)sum / 5);
    return 0;
}

