// print9-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su, cnt = 0;
	while (true)
	{
		scanf_s("%d", &su);
		if (su == 0) break;
		else if (su % 3 != 0 && su % 5 != 0)
		{
			cnt++;
		}
	}
	printf("%d\n", cnt);
    return 0;
}

