// 예제3-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int cnt, a = 1, b = 1, c = 0;
	scanf_s("%d", &cnt);
	for (int i = 0; i < cnt; i++)
	{
		a = b;
		b = c;
		c = a + b;
		printf("%d ", c);
	}
    return 0;
}

