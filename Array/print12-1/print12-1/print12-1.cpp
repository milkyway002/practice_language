// print12-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	/*int a[3][2] = { {100,10},{90,86},{89,98} };
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}*/
	
	/*int a[4][2], s, i, j;
	for (i = 0; i < 4; i++)
	{
		printf("%d번 학생의 수학, 프로그래밍 성적을 입력하시오. : ", i + 1);
		for (j = 0; j < 2; j++)
			scanf_s("%d", &a[i][j]);
	}
	for (i = 0; i < 4; i++)
	{
		s = 0;
		printf("%d번 학생 점수 : ", i + 1);
		for (j = 0; j < 2; j++)
			s += a[i][j];
		printf("%d\n", s);
	}*/

	int a[3][3], b[3][3], i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("a배열 %d행 %d열의 값을 입력하시오. ", i+1, j+1);
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("b배열 %d행 %d열의 값을 입력하시오. ", i+1, j+1);
			scanf_s("%d", &b[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
    return 0;
}

