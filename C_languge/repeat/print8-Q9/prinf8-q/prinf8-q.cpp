// prinf8-q.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int i, num, cnt = 0;
	for (i = 1; i <= 10; i++)
	{
		scanf_s("%d", &num);
		if (num % 2 == 0)
			cnt++;
	}
	printf("입력받은 짝수의 갯수는 %d개 입니다.\n", cnt);
    return 0;
}

