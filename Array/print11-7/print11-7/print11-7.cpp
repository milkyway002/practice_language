// print11-7.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num[10], hol = 10000, zac = 0;
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9]);
	for (int i = 0; i < 10; i++)
	{
		if (num[i] < 0 && num[i] % 2 != 0)
		{
			if (num[i] < hol)
				hol = num[i];
		}
		else
		{
			if (num[i] > zac && num[i] % 2 == 0)
				zac = num[i];
		}
	}
	printf("%d %d\n", hol, zac);
    return 0;
}

