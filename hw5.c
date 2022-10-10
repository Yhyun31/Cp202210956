#include <stdio.h>

int Bin(int num)
{
	if (num < 2)
		printf("%d", num);
	else
	{
		Bin(num / 2);
		printf("%d", num % 2);
	}


}

int main(void)
{
	int n;
	printf("Please enter a number : ");
	scanf("%d", &n);
	Bin(n);

	return 0;
}