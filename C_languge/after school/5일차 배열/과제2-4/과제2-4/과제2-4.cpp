// 과제2-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a[5][5] = { 0, };
	int i = 0, j = 0, k = 0;
	/*for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			k += 1;
			a[j][i] = k;
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}*/

	for (i = 0; i < 5; i++)
	{

		if (i % 2 == 0)
		{
			for (j = 0; j < 5; j++)
			{
				k += 1;
				a[i][j] = k;
			}
		}
		else
		{
			for (j = 4; j > -1; j--)
			{
				k += 1;
				a[i][j] = k;
			}
		}
		
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
    return 0;
}

