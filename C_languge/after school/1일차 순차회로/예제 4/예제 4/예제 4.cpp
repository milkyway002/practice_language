// 예제 4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	float a, b;
	printf("밑변을 입력하세요.\n");
	scanf_s("%f", &a);
	printf("높이를 입력하세요.\n");
	scanf_s("%f", &b);
	printf("입력하신 삼각형의 넓이:%5.1f\n", a*b / 2);
    return 0;
}

