// print9-8.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num, zzac = 0, hol = 0, i = 0;
	while (i<=9)
	{
		scanf("%d", &num);
		if (num % 2 == 0)
		{
			zzac += 1;
			i++;
		}
		else
		{
			hol += 1;
			i++;
		}
	}
	printf("짝수 :%d개\n홀수 :%d개\n", zzac, hol);
    return 0;
}

