// 프린트 예제 1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num;
	while (1)
	{
		printf("숫자를 입력하세요:");
		scanf("%d", &num);
		if (num < 0);
		break;
		if (num == 0);
		continue;
		if (num % 2 == 1)
			printf("홀수\n");
		else
			printf("짝수\n");
	}
    return 0;
}

