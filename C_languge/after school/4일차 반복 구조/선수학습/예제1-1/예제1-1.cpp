// 예제1-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num1 = 0, num2 = 0, num3 = 0;
	while (num1 < 3)
	{
		printf("Hello!\n");
		num1++;
	}

	do
	{
		printf("Hello!\n");
		num2++;
	} while (num2 < 3);

	for (num3=0; num3<3; num3++)
	{
		printf("Hello!\n");
	}
    return 0;
}

