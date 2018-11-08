#include<stdio.h>
#include<stdlib.h>
#define Size 100
int linearSearch(int array[],int key,int size);
int main()
{
	int a[Size];
	int i;
	int searchKey;
	int element;

	for (i = 0;i < Size;i++)
		a[i] = 2 * i;

	printf("Enter inteager search key:\n");
	scanf_s("%d", &searchKey);

	element = linearSearch(a, searchKey, Size);

	if (element != -1)
	{
		printf("Found value in element %d\n", element);
	}
	else
	{
		printf("Values not found\n");
	}
	system("pause");
}
int linearSearch(int array[], int key, int size)
{
	int i;
	for (i = 0;i < size;i++)
	{
		if (array[i] == key)
			return i;
	}
	return -1;
}