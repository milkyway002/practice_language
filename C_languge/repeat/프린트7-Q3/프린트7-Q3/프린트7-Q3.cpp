// 프린트7-Q3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num = 1, sum = 0;
	while (num <= 10)
	{
		sum = sum + num;
		num = num + 1;
	}
	printf("1부터 10까지의 합 : %d\n", sum);
	printf("while문이 끝난 후 num의 값 : %d\n", num);
    return 0;
}

