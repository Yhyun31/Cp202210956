#include <stdio.h>

typedef struct contry {
	char name[20];
	char contry[20];
	int population;
}Contry;

int main(void)
{
	int i;
	Contry arr[3];

	printf("Input three cities:\n");
	
	for (i = 0;i < 3;i++)
	{
		printf("Name> ");
		scanf(" %[^\n]s",&arr[i].name);
		printf("Contry> ");
		scanf(" %[^\n]s",&arr[i].contry);
		printf("Population> ");
		scanf("%d",&arr[i].population);
	}
	printf("\nPrinting the three cities: \n");
	
	for (i = 0;i < 3;i++)
	{
		printf("%d. %s in %s with a population of %d people\n",
			i+1, arr[i].name, arr[i].contry, arr[i].population);
	}
	return 0;
}