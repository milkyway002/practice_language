// 예제1-과제3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a;
	printf("정수 입력 : ");
	scanf_s("%d", &a);
	if (a % 3 == 0 && a % 5 == 0)
	{
		printf("3의 배수이면서 5의 배수입니다.\n");
	}
	else
		printf("3의 배수이면서 5의 배수가 아닙니다.\n");
    return 0;
}

