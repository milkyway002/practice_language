// print9-9.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num1, num2, cop = 1;
	scanf_s("%d %d", &num1, &num2);
	for (int i = 1; i <= num1; i++)
	{
		cop = 1;
		for (int j = 1; j <= num2; j++)
		{
			printf("%d ", i*cop);
			cop++;
		}
		printf("\n");
	}
    return 0;
}

