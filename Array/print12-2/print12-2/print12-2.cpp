// print12-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int score[3][3], i, j, add, hap[4] = { 0, };

	for (i = 0; i < 3; i++)
	{
		printf("%d번 학생의 점수 ", i + 1);
		for (j = 0; j < 3; j++) 
			scanf("%d", &score[i][j]);
	}

	printf("\t국어\t영어\t수학\t총점\t\n");
	
	for (i = 0; i < 3; i++)
	{
		add = 0;
		printf("%d번", i + 1);
		for (j = 0; j < 4; j++)
		{
			if (j == 3)
			{
				printf("\t%d", add);
			}
			else
			{
				printf("\t%d", score[i][j]);
				hap[i] += score[j][i];
			}
			add += score[i][j];
		}
		printf("\n");
		hap[3] += hap[i];
	}

	printf("합계");
	for (i = 0; i < 4; i++)
	{
		printf("\t%d", hap[i]);
	}
    return 0;
}

