// if문2-Q2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a;
	printf("수를 입력하세요 : ");
	scanf_s("%d", &a);
	if (a < 0)
	{
		printf("%d\n음수입니다.\n", a);
	}
	else
		printf("%d\n", a);
    return 0;
}

