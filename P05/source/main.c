#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int a[10] = {32,27,64,18,95,14,90,70,60,37};
	printf("%s%10s\n", "Element", "Value");
	for (i = 0;i <= 9;i++)
	{
		printf("%7d%10d\n", i, a[i]);
	}
	system("pause");
	return 0;
}