// if문2-9.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a;
	printf("1. 삽입\n2. 수정\n3. 삭제\n숫자를 선택하세요. ");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("삽입을 선택하셨습니다.\n");
		break;
	case 2:
		printf("수정을 선택하셨습니다.\n");
		break;
	case 3:
		printf("삭제를 선택하셨습니다.\n");
		break;
	default:
		printf("잘못된 입력값입니다.\n");
		break;
	}
    return 0;
}

