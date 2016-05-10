#include <stdio.h>
int main()
{
	int a =5; //creating a variable a
	int b =10;
	printf("The value stored in a is %d \n",a);
	printf("The value stored in a is %d \n",b);

	//Your code goes here

	int c = a;
	 a = b;
	 b = c;


	printf("After Swapping \n");
	printf("The value stored in a is %d \n",a);
	printf("The value stored in a is %d \n",b);


	return 0;
}