// if문2-Q1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a);
	if (a > 10)
	{
		printf("%d\n10보다 큰 수를 입력하셨습니다.\n", a);
	}
    return 0;
}

