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

	FibArray = (int *)malloc (sizeof (int) * (iLength + 1));

	printf ("Starting from 0th to %dth\n", iLength);
	for (i = 0; i <= iLength; i++)
	{
		printf ("%dth\t", i);
	}
	printf ("\n");
	for (i = 0; i <= iLength; i++)
	{
		if (i == 0)
		{
			FibArray[i] = 0;
			printf ("%d\t", FibArray[i]);
		}
		else if (i == 1)
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
