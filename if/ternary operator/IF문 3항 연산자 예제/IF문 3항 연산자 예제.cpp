// IF문 3항 연산자 예제.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#define SIZE 10

int main()
{
	/*int a = 50, b = 100;
	(a > b) ? printf("a=%5d\n", a = SIZE) : printf("b=%5d\n", b - SIZE);*/
	int money, book;
	printf("책의 값은?");
	scanf_s("%d", &book);
	printf("현재 수중에 있는 돈은?");
	scanf_s("%d", &money);
	(money >= book) ? printf("책을 구입한다.\n") : printf("책을 구입하지 못한다.\n");
    return 0;
}

