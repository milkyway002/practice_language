// 1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	FILE *fp3 = fopen("out3.txt", "a");
	fprintf(fp3, "hello!\n");
	fclose(fp3);
    return 0;
}

