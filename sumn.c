#include <stdio.h>
int main ()
{
	printf("Sum 1 to n calculator\n");
	printf("Enter n:\n");
	int n;
	scanf("%d",&n);

	//Use loop to add 1 + 2 + ...n.
	int res = 0;
	for(int i=n;i>=1;i--)
	{
		res=i+res;
	}
	printf("Sum from 1 to %d = %d\n",n,res);
}
