#include <stdio.h>
int main ()
{
	printf("Factorial calculator n!\n");
	printf("Enter n:\n");
	int n;
	scanf("%d",&n);

	//Use loop to compute a factorial.
	int res = 1;
	for(int i=n;i>=1;i--)
	{
		res=i*res;
	}
	printf("n! = %d\n",res);
}
