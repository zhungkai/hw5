#include<stdlib.h>
#include<stdio.h>
void inverse(int *b);
int main()
{
	int a[3] = { 3,5,7 },i;
	for (i = 0;i < 3;i++)
		printf("%d   ", a[i]);

	printf("\n");
	inverse(a);
	for (i = 0;i < 3;i++)
	{
		printf("%d   ", a[i]);
	}
	printf("\n");
	system("pause");
}
void inverse(int *b)
{
	int temp[3], i;
	for (i = 0;i < 3;i++)
		temp[2 - i] = b[i];
	for (i = 0;i < 3;i++)
		b[i] = temp[i];
}