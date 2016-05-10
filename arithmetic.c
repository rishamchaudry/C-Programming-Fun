#include <stdio.h>
int main ()

{	
	int num1,num2,add,sub,mult,divi;

	printf("Enter number 1\n");
	scanf("%d",&num1);
	printf("Enter number 2\n");
	scanf("%d",&num2);

	add = num1 + num2 ;
	sub = num1 - num2;
	mult = num1 * num2;
	divi = num1 / num2;

	printf("The sum of %d and %d is %d \n", num1, num2, add);
	printf("The difference of %d and %d is %d \n", num1, num2, sub);
	printf("The product of %d and %d is %d \n", num1, num2, mult);
	printf("The quotient of %d and %d is %d \n",num1, num2, divi);

	return 0;


}