// text-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char S[101];
	int i, c = 0, cc = 0;
	printf("100자 이내의 문자열을 입력하시오. : ");
	scanf("%s", S);
	for (i = 0; S[i] != NULL; i++)
	{
		if (S[i] == 'c' || S[i] == 'C')
		{
			c++;
			if (S[i + 1] == 'c' || S[i + 1] == 'C')
				cc++;
		}
	}
	printf("C의 개수는  : %d\n", c);
	printf("CC의 개수는 : %d\n", cc);
    return 0;
}

