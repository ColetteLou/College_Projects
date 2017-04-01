// assignment 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int lowest(int nums[], int len);
int highest(int nums[], int len);
double average(int nums[], int len);
int numPassed(int nums[], int len);
int numFailed(int nums[], int len);

void main()
{
	int arr[10] = { 5, 25, 45, 66, 77, 34, 90, 22, 68, 84 };
	int low = 0;
	int high;
	double avg;
	int numFails;
	int numPasses;
	int i = 0;

	printf_s("The scores for the test were:\n");

	for (i = 0; i < 10; i++)
	{
		printf_s(" %d ", arr[i]);
	}

	low = lowest(arr, 10);
	high = highest(arr, 10);
	avg = average(arr, 10);
	numPasses = numPassed(arr, 10);
	numFails = numFailed(arr, 10);

	printf_s("\nThe Lowest score was: %d \n",low);
	printf_s("The Highest score was: %d \n", high);
	printf_s("The Average score was: %.2lf \n", avg);
	printf_s("The number of passes was: %d \n", numPasses);
	printf_s("The number of fails was: %d \n", numFails);

}

int lowest(int arr[], int len)
{
	int i;
	int low = arr[0];

	for (i = 0; i < len; i++)
	{
		if (arr[i] < low)
		{
				low = arr[i];
		}
	}

	return low;
}
int highest(int arr[], int len)
{
	int i;
	int high = arr[0];

	for (i = 0; i < len; i++)
	{
		if (arr[i] > high)
		{
			high = arr[i];
		}
	}

	return high;
}

double average(int arr[], int len)
{
	int i = 0;
	double avg = 0;

	for (i = 0; i < len; i++)
	{
		avg = avg + arr[i];
	}

	return avg/len;
}

int numPassed(int arr[], int len)
{
	int i = 0;
	int count = 0;

	for (i = 0; i < len; i++)
	{
		if (arr[i] >= 45)
		{
			count++;
		}
	}

	return count;
}

int numFailed(int arr[], int len)
{
	int i = 0;
	int count = 0;

	for (i = 0; i < len; i++)
	{
		if (arr[i] < 45)
		{
			count++;
		}
	}

	return count;
}
