// if문 교과서 예제 1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int money = 0, remain, book = 15000;
	printf("책의 값은 15000원 입니다.\n");
	printf("당신의 용돈은 얼마입니까?:");
	scanf_s("%d", &money);
	if (money >= book)
	{
		remain = money - book;
		printf("책을 구입하였습니다. 이제 남은 돈은 %d원 입니다.", remain);
	}
    return 0;
}

