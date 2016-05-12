/*
*Name of Program: Greater of two numbers
*Author: Risham Chaudry
*Purpose: Program checks which number out of two is greater
*/


#include <stdio.h>
int main ()

{
int num1, num2;

printf("Enter number 1 \n");
scanf ("%d",&num1);
printf("Enter number 2 \n");
scanf ("%d",&num2);

if(num1 > num2)
{
	printf("%d is greater than %d \n", num1, num2);
}

else if(num1 < num2)
{
	printf("%d is less than %d \n", num1, num2);
}
else 
{
	printf("%d is equal to %d\n",num1,num2);
}
return 0;

}
