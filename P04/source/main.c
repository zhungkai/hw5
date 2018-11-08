#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int i;
	for (i = 0;i <= 9;i++)
	{
		a[i] = 0;
	}
	printf("%s%10s\n", "Element", "Value");
	for (i = 0;i <= 9;i++)
	{
		printf("%7d%10d\n", i, a[i]);
	}
	system("pause");
	return 0;
}