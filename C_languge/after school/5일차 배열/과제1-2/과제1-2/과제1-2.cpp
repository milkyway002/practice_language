// 과제1-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num[10], j = 0, temp = 0;
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", num[i]);
	}
		
	for (int i = 0; i < 10; i++)
	{
		j = num[i];
		for (int y = i+1; y < 10; y++)
		{
			if (j < num[y])
			{
				temp = num[y];
				num[y] = j;
				j = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", num[i]);
    return 0;
}

