// print11-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num[100], i, cnt = 0;
	for (i = 0; i < 100; i++)
	{
		scanf_s("%d", &num[i]);
		cnt++;
		if (num[i] == 0) break;
		if (cnt % 2 == 0 && i != 0)
		{
			printf("%d ", num[i]);
		}	

	}
    return 0;
}

