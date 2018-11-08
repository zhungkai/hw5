#include<stdio.h>
#include<stdlib.h>
#define size 5

void modifyArray(int b[],int size2);
void modifyElement(int e);
int main()
{
	int a[size] = { 0,1,2,3,4 };
	int i;
	printf("Effects of passing entire array by reference:\n");
	for (i = 0;i < size;i++)
		printf("%3d", a[i]);

	printf("\n");

	printf("The values of the modified array are:\n");
	modifyArray(a,size);
	printf("\n\n\nEffects of passing array elementby value:\n\nThe value of a[3] is %d\n",a[3]);
	modifyElement(a[3]);
	printf("The value of a[3] is %d\n", a[3]);
	system("pause");

}
void modifyArray(int b[],int size2)
{
	int i;
	for (i = 0;i < size2;i++)
	{
		b[i] *= 2;
		printf("%3d", b[i]);
	}
	printf("\n");
}
void modifyElement(int e)
{
	printf("Value in modifyElement is %d\n", e *= 2);
}