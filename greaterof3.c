/*
*Name of Program: Greater of two numbers
*Author: Risham Chaudry
*Purpose: Program checks which number of the 3 numbers is greater
*/

#include <stdio.h>
 int main ()
 
 {

 	int num1, num2, num3;

	printf("Enter number 1 \n");
	scanf ("%d", &num1);
	printf("Enter number 2 \n");
	scanf ("%d", &num2);
	printf("Enter number 3 \n");
	scanf ("%d", &num3);

	if (num1 > num2 && num1 > num3)
	{
		printf("%d is the greatest \n", num1);
	}

	else if (num2 > num3 && num2 > num1)
	{
		printf("%d is the greatest \n", num2);
	}
	else 
	{
		printf("%d is the greatest \n", num3);
	}

	return 0;

 }
