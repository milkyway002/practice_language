// if문2-Q5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int age;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	if (age < 20)
	{
		printf("당신은 %d년 후에 성인이 됩니다.\n", 20 - age);
	}
	else
		printf("당신은 성인입니다.\n");
    return 0;
}

