#include <stdio.h>
int main(void)
{
	double num, result;
	printf("Please enter kilometers:");
	scanf("%lf", &num);
	result = num / 1.609;
	printf("%.1f km is equal to %.1f miles.", num, result);

	return 0;
}