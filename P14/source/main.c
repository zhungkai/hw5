#include<stdio.h>
#include<stdlib.h>
#define students 3
#define exams 4

int printarray(int grades[students][exams]);
int minimum(int grades[students][exams]);
int maximum(int grades[students][exams]);
double average(int grades[students][exams]);

int i, j, small,big;
int main()
{
	int studentsgrades[students][exams] =
	{
		{77,68,86,73},
		{96,87,89,78},
		{70,90,86,81} 
	};
	printf("The array is:\n");
	printarray(studentsgrades);
	minimum(studentsgrades);
	maximum(studentsgrades);
	average(studentsgrades);
	system("pause");
}
int printarray(int grades[students][exams])
{
	printf("                 [0]  [1]  [2]  [3]\n");
	for (i = 0; i < 3;i++)
	{
		printf("studentsgrades[%d]", i);
		for (j = 0;j < 4;j++)
		{
			printf("%-5d", grades[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}
int minimum(int grades[students][exams])
{
	small = 100;
	for ( i=0;i<3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			if (grades[i][j] < small)
			{
				small = grades[i][j];
			}
		}
	}
	printf("Lowest grade:%d\n", small);
}
int maximum(int grades[students][exams])
{
	big = 0;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			if (grades[i][j] > big)
			{
				big = grades[i][j];
			}
		}
	}
	printf("Highest grade:%d\n", big);
}
double average(int grades[students][exams])
{
	double total = 0;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			total += grades[i][j];
		}
		total /= 4;
		printf("The average grade for students %d is %.2lf\n", i, total);
		total = 0;
	}
}