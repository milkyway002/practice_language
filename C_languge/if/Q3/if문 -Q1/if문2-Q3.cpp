// if문 -Q1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a, b, c;
	printf("두 수를 입력하세요 : ");
	scanf_s("%d %d", &a, &b);
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
    }
	printf("입력받은 수 중 큰 수는 %d 이고 작은 수는 %d 입니다.", a, b);
    return 0;
}

