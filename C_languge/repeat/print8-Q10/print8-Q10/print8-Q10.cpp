// print8-Q10.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su, sum3 = 0, sum5 = 0;
	for (int i = 1; i <= 10; i++)
	{
		scanf_s("%d", &su);
		if (su % 3 == 0)
			sum3++;
		if (su % 5 == 0)
			sum5++;
	}
	printf("입력받은 수 중 3의 배수는 %d개, 5의 배수는 %d개 입니다.\n", sum3, sum5);
    return 0;
}

