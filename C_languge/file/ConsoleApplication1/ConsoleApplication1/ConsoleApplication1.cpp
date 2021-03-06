// ConsoleApplication1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <stdio.h>

int s = 0;

int search(int a[], int low, int high, int f)
{
	int n, m;
	n = high - low;
	if (n<0) return -1;
	if (n == 0)
	{
		if (f == a[high]) return high;
		else return -1;
	}
	m = n * (f - a[low]) / (a[high] - a[low]) + low;
	s = s + a[m];
	if (f == a[m]) return m;
	else
	{
		if (f<a[m]) return search(a, low, m - 1, f);
		else return search(a, m + 1, high, f);
	}
}

int main()
{
	int a[11] = { 2,3,5,12,22,42,43,62,72,92,105 };
	int p, find = 22;
	p = search(a, 0, 10, find);
	if (p != -1) printf("%d\n", s);
	else printf("0\n");
}
