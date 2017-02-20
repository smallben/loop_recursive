#include <stdio.h>
#include <stdlib.h>

#define S_OK 0
#define S_FAIL 1

// Big-O (2^n), because every node will have two branch until the length touch the leaf(n depth)
int Fibonacci_recursive(int iLength)
{
	if (iLength == 0)
	{
		return 0;
	}
	else if (iLength == 1)
	{
		return 1;
	}

	return Fibonacci_recursive(iLength - 1) + Fibonacci_recursive (iLength - 2);
}

int main()
{
	int iLength = 0;
	int i;
	int *FibArray;
	printf ("Enter the length of the Fibonacci Serials?");
	scanf("%d", &iLength);

	FibArray = (int *)malloc (sizeof (int) * (iLength + 1));

	printf ("Starting from 0th to %dth\n", iLength);
	for (i = 0; i <= iLength; i++)
	{
		printf ("%dth\t", i);
	}
	printf ("\n");

	//The for loop is only for the print the different th. value;
	for (i = 0; i <= iLength; i ++)
	{
		printf ("%d\t", Fibonacci_recursive(i));
	}
	printf ("\n");
	return S_OK;
}
