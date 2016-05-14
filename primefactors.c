#include <stdio.h>
int main ()
{
	printf("Prime factors of n\n");
	printf("Enter n:\n");
	int n;
	scanf("%d",&n);
	int nb = n;

	int i = 2;
	printf("List of prime factors:\n");
	while(n>1)
	{
		//try if n (or what is left of n) is divisible by the current i
		while(n%i==0)
		{
			//now/here remainder is zero so we found the factor "i"
			printf("%d ",i);
			n=(int)(n/i);
		}
		i++;
	}
	printf("\n");
	printf("These are the prime factors of %d.\n", nb);
}
