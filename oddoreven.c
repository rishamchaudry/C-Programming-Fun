#include <stdio.h>
int main ()

{
	int num;

	printf("Enter a number \n");
	scanf ("%d", &num);



	if (num %2 == 1)
	{
		printf("%d is an odd number \n", num);
	}

	else if (num %2 == 0)
	{
		printf("%d is an even number \n", num);
	}

	return 0;

}