// print9-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su = 1, odd = 0, even = 0;
	while (su != 0)
	{
		scanf_s("%d", &su);
		if (su % 2 == 0 && su != 0)
			even++;
		else if (su % 2 == 1 && su != 0)
			odd++;
	}
	printf("홀수 : %d개\n짝수 : %d개\n", odd, even);
    return 0;
}

