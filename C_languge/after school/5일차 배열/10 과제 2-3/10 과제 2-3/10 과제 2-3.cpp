// 10 과제 2-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char str[50] = { 0, };
	int len = 0, cnt = 0;

	scanf("%s", &str);
	scanf("%d", &cnt);

	while (str[len] != '\0')
		len++;
	
	for (int i = len-1; cnt > 0; cnt--)
	{
		printf("%c", str[i]);
		i--;
	}
	printf("\n");
	return 0;
}

