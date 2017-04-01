// ConsoleApplication2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <cstdio>

int main()
{
	int iSum = 0;
	int iAverage = 0;
	int ages[10];
	int i;


	for (i = 0; i < 10; i++)
	{
		printf("Please enter an age #%d? ", i + 1);
		scanf_s("%d", &ages[i]);

	}

	int iMax = ages[0];
	int iMin = ages[0];

	for (i = 0; i < 10; i++)
	{
		iSum = iSum + ages[i];
	}


	for (i = 0; i<10; i++)
	{

		if (ages[i]> iMax)
		{
			iMax = ages[i];
		}

		if (ages[i] < iMin)
		{
			iMin = ages[i];
		}
	}




	iAverage = iSum / 10;

	printf("The average age is %d \n", iAverage);
	printf("The max age is %d \n", iMax);
	printf("The min age is %d \n", iMin);

	return (0);
}
