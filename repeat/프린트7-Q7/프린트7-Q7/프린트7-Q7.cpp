// 프린트7-Q7.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su = 0, sum = 0, cnt = 0;
	double avg;
	while (1)
	{
		scanf_s("%d", &su);
		if (su == 0) break;
		sum = sum + su;
		cnt++;
	}
	avg =(double) sum/cnt;
	printf("입력된 자료의 개수=%d\n", cnt);
	printf("입력된 자료의 합계=%d\n", sum);
	printf("입력된 자료의 평균=%.2f\n", avg);
    return 0;
}

