// print8-Q6.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num = 0, i = 0;
	scanf_s("%d", &num);
	for (i = 0; i <= num; i++)
	{
		if (i % 2 == 0 && i != 0)
		printf("%d ", i);
	}
    return 0;
}

