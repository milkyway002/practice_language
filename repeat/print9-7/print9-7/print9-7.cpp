// print9-7.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su1, sum = 0, i;
	scanf_s("%d", &su1);
	for (i = 0; i <= su1; i++)
	{
		if (i % 5 == 0)
			sum += i;
	}
	printf("%d", sum);
    return 0;
}

