// print12-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su[20][20] = { 0, 1 }, num, i, j;
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++) 
		{
			su[i][j] = su[i - 1][j - 1] + su[i - 1][j];
			printf("%d ", su[i][j]);
		}
		printf("\n");
	}
    return 0;
}

