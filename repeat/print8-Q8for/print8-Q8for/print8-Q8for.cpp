// print8-Q8for.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su, sum = 0;
	scanf_s("%d", &su);
	for (int i=su; i <= 100; i++)
	{
		sum += i;
	}
	printf("%d", sum);
    return 0;
}

