#include<stdio.h>
#include<stdlib.h>
#define a 10
int main()
{
	int b[a];
	int i;
	printf("%s%10s\n", "Element", "Value");
	for (i = 0;i < a;i++)
	{
		b[i] = 2 + 2 * i;
		printf("%7d%10d\n", i, b[i]);
	}
	system("pause");
	return 0;
}