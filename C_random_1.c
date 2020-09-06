#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = rand() % 2;

	if (a == 0)
		printf("변수 a는 0입니다.\n");
	else
		printf("변수 a는 1입니다.\n");

	return 0;

}