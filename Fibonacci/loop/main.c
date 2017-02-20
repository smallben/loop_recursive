#include <stdio.h>
#include <stdlib.h>

#define S_OK 0
#define S_FAIL 1

int main()
{
	int iLength = 0;
	int i;
	int *FibArray;
	printf ("Enter the length of the Fibonacci Serials?");
	scanf("%d", &iLength);

	FibArray = (int *)malloc (sizeof (int) * iLength);

	printf ("Starting from 1th to %dth\n", iLength);
	for (i = 1; i <= iLength; i++)
	{
		printf ("%dth\t", i);
	}
	printf ("\n");
	for (i = 1; i <= iLength; i++)
	{
		if (i == 1)
		{
			FibArray[i] = 1;
			printf ("%d\t", FibArray[i]);
		}
		else if (i == 2)
		{
			FibArray[i] = 1;
			printf ("%d\t", FibArray[i]);
		}
		else
		{
			FibArray[i] = FibArray[i - 1] + FibArray[i - 2];
			printf ("%d\t", FibArray[i]);
		}

	}
	printf ("\n");
	return S_OK;
}
