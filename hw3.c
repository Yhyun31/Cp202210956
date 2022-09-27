#include <stdio.h>
int main(void)
{
	int i, k, j;

	for (i = 0;i < 5;i++)
	{
		for (k = 4-i;k >0;k--)
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
