#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = rand() % 2;

	if (a == 0)
		printf("���� a�� 0�Դϴ�.\n");
	else
		printf("���� a�� 1�Դϴ�.\n");

	return 0;

}