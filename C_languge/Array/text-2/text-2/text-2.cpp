// text-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string.h>


int main()
{
	char str[101];
	int i;

	gets_s(str);
	for (i = strlen(str) - 1; i >= NULL; i--)
		printf("%c", str[i]);
    return 0;
}

