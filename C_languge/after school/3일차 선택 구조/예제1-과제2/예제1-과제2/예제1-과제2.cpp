// 예제1-과제2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a;
	printf("정수 입력 : ");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("입력한 수는 짝수입니다.\n");
	}
	else
		printf("입력한 수는 홀수입니다.\n");
    return 0;
}

