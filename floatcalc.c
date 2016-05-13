#include <stdio.h>
int main ()
{

	float num1, num2, res;

	printf("Enter number 1 \n");
	scanf("%f",&num1);

	printf("Possible operations:\n");
	printf("1. Addition \n");
	printf("2. Subtraction \n");
	printf("3. Multiplication \n");
	printf("4. Division \n");
	printf("Enter a number from the list above \n");
	int op;
	scanf("%d", &op);

	printf("Enter number 2 \n");
	scanf("%f",&num2);

	if(op==1) 
	{
		printf("The sum of %f and %f is %f \n", num1, num2, num1 + num2);
	}
	else if(op==2)
	{
		printf("The difference of %f and %f is %f \n", num1, num2, num1 - num2);
	}	
	else if(op==3)
	{
		printf("The product of %f and %f is %f \n", num1, num2, num1 * num2);
	}
	else if(op==4)
	{
		printf("The quotient of %f and %f is %f \n", num1, num2, num1 / num2);
	}	


	return 0;


}