// if문2-8.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int age;
	char gender;
	printf("성별 (남자는 M, 여자는 F) 과 나이를 입력하세요 : ");
	scanf("%c %d", &gender, &age);
	switch(gender)
	{
	case 'F':
		if (age > 20)
		{
			printf("성인 여성입니다.\n");
		}
		else
			printf("미성년 여성입니다.\n");
		break;

	case 'M':
		if (age > 20)
		{
			printf("성인 남성입니다.\n");
		}
		else
			printf("미성년 남성입니다.\n");
		break;
	default:
		printf("잘못된 입력값입니다. \n\a");
		break;
	}
    return 0;
}

