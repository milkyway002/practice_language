// 센티 미리.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int m, km;
	printf("미터:");
	scanf_s("%d", &m);
	km = m / 1000;
	m = m % 1000;
	printf("%dkm %dm", km, m);
    return 0;
}

