// 예제3-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a[4] = { 1,5,7,9 }, b[4] = { 2,4,8,10 }, c[8], i = 0, j = 0, k = 0, cnt = 0;

	for (k = 0; k <= 8; k++)
	{
		if (a[i] < b[j])
		{
			c[k] = a[i];
			i++;
		}
		else
		{
			c[k] = b[j];
			j++;
		}
	}
	for (k = 0; k < 8; k++)
		printf("%d ", c[k]);

	/*int a[20], num, i, j;
	printf("10진수 : ");
	scanf_s("%d", &num);
	for (i = 0; num > 0; i++)
	{
		a[i] = num % 8;
		num /= 8;
	}
	for (j = i - 1; j >= 0; j--)
		printf("%d\n", a[j]);*/

	/*int a[5] = { 1,1,0,0,1 }, i, j = 1, sum = 0;
	for (i = 4; i >= 0; i--)
	{
		if (a[i] == 1) sum += j;
		j *= 2;
	}
	printf("10진수 : %d\n", sum);*/
    return 0;
}

