// print8-Q8while.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su=0, sum = 0;
	scanf_s("%d", &su);
	while (su <= 100)
	{
		sum += su;
		su++;
	}
	printf("%d", sum);
    return 0;
}

