#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ()
{
	printf("Matrix addition.\n");
	printf("Enter number of rows:\n");
	int r;
	scanf("%d", &r);
	printf("Enter number of columns:\n");
	int c;
	scanf("%d", &c);

	//Initialize random number generator and 2 dim array m (matrix) of dim r*c and fill it with random numbers.
	printf("Matrix 1:\n");
	srand(time(NULL));
	int m[r][c];
	for(int i = 0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			m[i][j] = rand()%100+1;
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	printf("Matrix 2:\n");
	int m2[r][c];
	for(int i = 0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			m2[i][j] = rand()%100+1;
			printf("%d ", m2[i][j]);
		}
		printf("\n");
	}

	//Compute sum
	printf("The sum of matrices 1 and 2 is:\n");
	int ms[r][c];
	for(int i = 0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			ms[i][j] = m[i][j] + m2[i][j];
			printf("%d ", ms[i][j]);
		}
		printf("\n");
	}

}

