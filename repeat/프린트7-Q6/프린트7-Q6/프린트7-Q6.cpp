// 프린트7-Q6.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su = 0;
	while (1)
	{
		printf("정수를 입력하세요. ");
		scanf_s("%d", &su);
		if (su == 0) break;
		if (su % 2 == 1)
		{
			printf("음수입니다.\n");
		}
		else
			printf("양수입니다.\n");
	}
    return 0;
}

