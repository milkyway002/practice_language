// print11-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char alp[26],j=65;
	for (int i = 0; i < 26; i++)
	{
		alp[i] = j;
		j++;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%c ", alp[i]);
	}
    return 0;
}

