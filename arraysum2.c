#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ()
{
	printf("Sum of numbers in array.\n");
	printf("Enter your number:\n");
	int n;
	scanf("%d", &n);

	//Initialize random number generator and array a of length n and fill it with random numbers.
	srand(time(NULL));
	int a[n];
	for(int i = 0;i<n;i++)
	{
		a[i] = rand()%100+1;
	}

	//output and addition of all numbers
	printf("The generated numbers are:\n");
	int res = 0;
	for(int i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
		res = a[i] + res;
	}
	printf("\nThe sum of all generated numbers is: %d\n", res);
}
