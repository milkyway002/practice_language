// print9-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su = 0, sum = 0, cnt = 0;
	double avg=0;
	while (true)
	{
		scanf_s("%d", &su);
		if (su > 100 || su < 0) break;
		else
		{
			sum += su;
			cnt++;
		}
	}
	avg = (double)sum / cnt;
	printf("합계 : %d\n평균 : %.1f\n", sum, avg);
    return 0;
}

