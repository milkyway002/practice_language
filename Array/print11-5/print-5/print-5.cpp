// print-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num[10], big = 0;
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9]);
	for (int i = 0; i < 10; i++)
	{
		if (big < num[i])
			big = num[i];
	}
	printf("%d\n", big);
    return 0;
}

