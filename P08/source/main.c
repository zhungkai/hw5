#include<stdio.h>
#include<stdlib.h>
#define a 10
int main()
{
	int b[a] = { 19,3,15,7,11,9,13,5,17,1 };
	int i,j;
	printf("%s%10s%14s\n", "Element", "Value", "Histogram");
	for (i = 0;i < a;i++)
	{
		printf("%7d%10d    ", i, b[i]);
		for (j = 1;j <= b[i];j++)
		{
			printf("%c",'*');
		}
		printf("\n");
	}
	system("pause");
}