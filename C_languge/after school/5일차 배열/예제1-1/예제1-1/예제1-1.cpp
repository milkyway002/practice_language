// 예제1-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num[10], zac = 0, hol = 0;
	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d", &num[i]);
	}

	for (int i = 0; i < 9; i++)
	{
		if (num[i] % 2 == 0)
		{
			if (num[i] > zac)
				zac = num[i];
		}
		else
		{
			if (num[i] < hol)
				hol = num[i];
		}
	}
	printf("짝수 중 가장 큰 값: %d\n홀수 중 가장 작은 값: %d\n", zac, hol);
    return 0;
}

