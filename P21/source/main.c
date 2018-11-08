#include<stdio.h>
#include<stdlib.h>

void staticArrayInit();
void automaticArrayInit();
int main()
{
	printf("First call to each function:\n");
	staticArrayInit();
	automaticArrayInit();

	printf("\nSecond call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	system("pause");
}
void staticArrayInit()
{
	static int array1[3];
	int i;
	printf("\nValues on entering staticArrayInit:\n");
	for (i = 0;i < 3;i++)
		printf("array1[%d]=%d\t", i, array1[i]);

	printf("\n");

	printf("Values on exiting staticArrayInit:\n");
	for (i = 0;i < 3;i++)
		printf("array1[%d]=%d\t", i, array1[i] += 5);

	printf("\n");
}
void automaticArrayInit()
{
    int array2[3] = { 1,2,3 };
	int i;
	printf("\nValues on entering automaticArrayInit:\n");
	for (i = 0;i < 3;i++)
		printf("array2[%d]=%d\t", i, array2[i]);

	printf("\n");
	printf("Values on exiting staticArrayInit:\n");
	for (i = 0;i < 3;i++)
		printf("array2[%d]=%d\t", i, array2[i] += 5);

	printf("\n");
}
