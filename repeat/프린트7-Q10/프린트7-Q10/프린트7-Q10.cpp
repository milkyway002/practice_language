// 프린트7-Q10.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su;
	do
	{
		scanf_s("%d", &su);
		if (su % 3 == 0)
		{
			printf("%d\n", su / 3);
		}
	} while (su != -1);
    return 0;
}

