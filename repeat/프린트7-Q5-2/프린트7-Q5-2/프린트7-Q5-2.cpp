// 프린트7-Q5-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int score = 0;
	while (1)
	{
		printf("점수를 입력하세요. ");
		scanf_s("%d", &score);
		if (0 >= score || score >= 100) break;
		if (score >= 80) {
			printf("축하합니다. 합격입니다.\n");
		}
		else {
			printf("죄송합니다. 불합격입니다.\n");
		}
	}
    return 0;
}

