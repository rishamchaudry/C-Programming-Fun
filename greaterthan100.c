/*
*Name of Program: Greater than 100
*Author: Risham Chaudry
*Purpose: Program checks if the input number is greater 100
*/

#include <stdio.h>
int main ()
{

int num;

printf ("Enter a number \n");
scanf("%d",&num);

if(num>100)
{
	printf("%d is greater than 100\n",num);

}
else if(num<100)
{
	printf("%d is lesser than 100\n",num);

}
else

printf("You entered 100, YOU MORON\n");

return 0;
}