// 프린트7-Q8.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su, cnt = 0, sum = 0;
	double avg;
	while(1)
	{
		scanf_s("%d", &su);
		sum=sum+su;
		cnt++;
		if (su == 100) break;
	}
	avg = (double)sum / cnt;
	printf("%d\n", sum);
	printf("%.1f\n", avg);
    return 0;
}

