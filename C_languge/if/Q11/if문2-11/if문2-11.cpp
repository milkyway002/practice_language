// if문2-11.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char score;
	printf("점수 등급을 입력하세요. ");
	scanf("%c", &score);
	switch (score)
	{
	case 'A':
		printf("매우잘함\n");
		break;
	case 'B':
		printf("잘함\n");
		break;
	case 'C':
		printf("보통임\n");
		break;
	case 'D':
		printf("노력요함\n");
		break;
	case 'F':
		printf("낙제\n");
		break;
	default:
		printf("잘못 입력\n");
		break;
	}
    return 0;
}

