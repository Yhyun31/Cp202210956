#include <stdio.h>
int main(void)
{
	int i, k, j;

	for (i = 0;i < 5;i++)
	{
		for (k = i;k <4;k++)
		{
			printf(" ");
		}
		for (j = 0;j < 2 * i + 1;j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
}