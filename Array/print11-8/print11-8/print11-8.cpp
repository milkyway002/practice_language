// print11-8.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int score[10], sum = 0, cnt = 0;
	double avg = 0;
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &score[0], &score[1], &score[2], &score[3], &score[4], &score[5], &score[6], &score[7], &score[8], &score[9]);
	for (int i = 0; i < 10; i++)
	{
		sum += score[i];
		cnt++;
	}
	avg = (double)sum / cnt;
	printf("sum=%d\navg=%.1lf\n", sum, avg);
	return 0;
}

